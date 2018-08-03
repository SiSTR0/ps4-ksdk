// SiSTRo
// 08/03/2018
//

/* functions */
KFUNC(0x0030EB30, Xfast_syscall, void, (void));
KFUNC(0x00286DF0, copyin, int, (const void *uaddr, void *kaddr, uint64_t len));
KFUNC(0x00286D70, copyout, int, (const void *kaddr, void *uaddr, uint64_t len));
KFUNC(0x00347580, printf, int, (const char *fmt, ... ));
KFUNC(0x003475F0, vprintf, int, (const char *fmt, va_list arg));
KFUNC(0x001D1700, malloc, void *, (uint64_t size, void *type, int flags));
KFUNC(0x001D18D0, free, void, (void *addr, void *type));
KFUNC(0x00286CF0, memcpy, void *, (void *dest, const void *src, uint64_t num));
KFUNC(0x001ECB10, memset, void *, (void *ptr, int value, uint64_t num));
KFUNC(0x0029CD10, memcmp, int, (const void *ptr1, const void *ptr2, uint64_t num));
KFUNC(0x00369500, kmem_alloc, void *, (struct vm_map *map, uint64_t size));
KFUNC(0x001D3640, strlen, uint64_t, (const char *str));
KFUNC(0x0008A7A0, pause, void, (const char *wmesg, int timo));
KFUNC(0x001C9890, kthread_add, int, (void (*func)(void *), void *arg, struct proc *procp, struct thread **newtdpp, int flags, int pages, const char *fmt, ...));
KFUNC(0x001C9B60, kthread_exit, void, (void));
KFUNC(0x001CFEF0, sched_prio, void, (struct thread *td, uint16_t prio));
KFUNC(0x001D0240, sched_add, void, (struct thread *td, uint64_t cpuset));
KFUNC(0x0008AAC0, kern_yield, void, (uint64_t p));
KFUNC(0x0038AD30, fill_regs, int, (struct thread *td, struct reg *rg));
KFUNC(0x0038AE60, set_regs, int, (struct thread *td, struct reg *rg));
KFUNC(0x001D3700, create_thread, int, (struct thread * td, uint64_t ctx, void (*start_func)(void *), void *arg, char *stack_base, uint64_t stack_size, char *tls_base, long *child_tid, long *parent_tid, uint64_t flags, uint64_t rtp));
KFUNC(0x001C92F0, kproc_create, int, (void (*func)(void *), void *arg, struct proc **newpp, int flags, int pages, const char *fmt, ...));
KFUNC(0x001CA1D0, kthread_set_affinity, void, (const char *tdname, uint64_t prio, uint64_t cpuset, uint64_t unknown)); // custom name
KFUNC(0x001C9F60, kthread_suspend_check, void, (void));
KFUNC(0x001CA070, kproc_kthread_add, int, (void (*func)(void *), void *arg, struct proc **procptr, struct thread **tdptr, int flags, int pages, char * procname, const char *fmt, ...));
KFUNC(0x0027AAF0, sx_init_flags, void, (struct sx *sx, const char *description, int opts));
KFUNC(0x0027AC20, sx_xlock, void, (struct sx *sx));
KFUNC(0x0027ADB0, sx_xunlock, void, (struct sx *sx));
KFUNC(0x0036EC70, mtx_init, void, (struct mtx *mutex, const char *name, const char *type, int opts));
KFUNC(0x0036E640, mtx_lock_spin_flags, void, (struct mtx *mutex, int flags));
KFUNC(0x0036E800, mtx_unlock_spin_flags, void, (struct mtx *mutex, int flags));
KFUNC(0x0036E260, mtx_lock_flags, void, (struct mtx *mutex, int flags));
KFUNC(0x0036E2D0, mtx_lock_sleep, void, (struct mtx *mutex, uintptr_t tid, int opts, const char *file, int line));
KFUNC(0x0036E5E0, mtx_unlock_sleep, void, (struct mtx *mutex, int opts, const char *file, int line));
KFUNC(0x0025FC10, kern_reboot, int, (int magic));
KFUNC(0x0043DF10, vm_map_lock_read, void, (struct vm_map *map));
KFUNC(0x0043E470, vm_map_lookup_entry, int, (struct vm_map *map, uint64_t address, struct vm_map_entry **entries));
KFUNC(0x0043DF60, vm_map_unlock_read, void, (struct vm_map *map));
KFUNC(0x0043DD40, vmspace_acquire_ref, struct vmspace *, (struct proc *p));
KFUNC(0x0043DB70, vmspace_free, void, (struct vmspace *vm));
KFUNC(0x00440580, vm_map_delete, int, (struct vm_map *map, uint64_t start, uint64_t end));
KFUNC(0x00442270, vm_map_protect, int, (struct vm_map * map, uint64_t start, uint64_t end, int new_prot, uint64_t set_max));
KFUNC(0x00440B60, vm_map_findspace, int, (struct vm_map * map, uint64_t start, uint64_t length, uint64_t *addr));
KFUNC(0x0043EEC0, vm_map_insert, int, (struct vm_map * map, uint64_t object, uint64_t offset, uint64_t start, uint64_t end, int prot, int max, int cow));
KFUNC(0x0043DDA0, vm_map_lock, void, (struct vm_map * map));
KFUNC(0x0043DE10, vm_map_unlock, void, (struct vm_map * map));
KFUNC(0x000ABBB0, proc_rwmem, int, (struct proc *p, struct uio *uio));

/* data */
KDATA(0x0186B0A0, disable_console_output, uint8_t);
KDATA(0x0134B730, M_TEMP, void);
KDATA(0x01FE71B8, kernel_map, void *);
KDATA(0x00F26010, prison0, void *);
KDATA(0x0206D250, rootvnode, void *);
KDATA(0x01FE3498, allproc, struct proc *);
KDATA(0x00F17790, sysents, struct sysent);
