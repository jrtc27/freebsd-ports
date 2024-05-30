--- bsd-user/riscv/target_arch_cpu.h.orig	2024-05-30 01:31:34 UTC
+++ bsd-user/riscv/target_arch_cpu.h
@@ -40,7 +40,6 @@ static inline void target_cpu_loop(CPURISCVState *env)
 {
     CPUState *cs = env_cpu(env);
     int trapnr;
-    target_siginfo_t info;
     abi_long ret;
     unsigned int syscall_num;
     int32_t signo, code;
@@ -123,7 +122,7 @@ static inline void target_cpu_loop(CPURISCVState *env)
             abort();
         }
 
-        if (info.si_signo) {
+        if (signo) {
             force_sig_fault(signo, code, env->pc);
         }
 
