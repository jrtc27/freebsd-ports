--- bsd-user/host/aarch64/host-signal.h.orig	2024-05-30 00:00:17 UTC
+++ bsd-user/host/aarch64/host-signal.h
@@ -13,12 +13,12 @@ static inline uintptr_t host_signal_pc(ucontext_t *uc)
 
 static inline uintptr_t host_signal_pc(ucontext_t *uc)
 {
-    return uc->uc_mcontext.mc_gregs.gp_lr;
+    return uc->uc_mcontext.mc_gpregs.gp_lr;
 }
 
 static inline void host_signal_set_pc(ucontext_t *uc, uintptr_t pc)
 {
-    uc->uc_mcontext.mc_gregs.gp_lr = pc;
+    uc->uc_mcontext.mc_gpregs.gp_lr = pc;
 }
 
 static inline bool host_signal_write(siginfo_t *info, ucontext_t *uc)
