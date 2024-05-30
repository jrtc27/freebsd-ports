--- bsd-user/freebsd/os-socket.h.orig	2022-02-04 18:27:07 UTC
+++ bsd-user/freebsd/os-socket.h
@@ -60,8 +60,12 @@ static abi_long do_sendrecvmsg_locked(int fd, struct t
         msg.msg_namelen = 0;
     }
     msg.msg_controllen = 2 * tswap32(msgp->msg_controllen);
-    msg.msg_control = alloca(msg.msg_controllen);
-    memset(msg.msg_control, 0, msg.msg_controllen);
+    if (msgp->msg_control) {
+        msg.msg_control = alloca(msg.msg_controllen);
+        memset(msg.msg_control, 0, msg.msg_controllen);
+    } else {
+        msg.msg_control = NULL;
+    }
 
     msg.msg_flags = tswap32(msgp->msg_flags);
 
@@ -86,7 +90,11 @@ static abi_long do_sendrecvmsg_locked(int fd, struct t
     msg.msg_iov = vec;
 
     if (send) {
-        ret = t2h_freebsd_cmsg(&msg, msgp);
+        if (msg.msg_control != NULL) {
+            ret = t2h_freebsd_cmsg(&msg, msgp);
+        } else {
+            ret = 0;
+        }
         if (ret == 0) {
             ret = get_errno(safe_sendmsg(fd, &msg, flags));
         }
@@ -94,7 +102,11 @@ static abi_long do_sendrecvmsg_locked(int fd, struct t
         ret = get_errno(safe_recvmsg(fd, &msg, flags));
         if (!is_error(ret)) {
             len = ret;
-            ret = h2t_freebsd_cmsg(msgp, &msg);
+            if (msg.msg_control != NULL) {
+                ret = h2t_freebsd_cmsg(msgp, &msg);
+            } else {
+                ret = 0;
+            }
             if (!is_error(ret)) {
                 msgp->msg_namelen = tswap32(msg.msg_namelen);
                 msgp->msg_flags = tswap32(msg.msg_flags);
