// golden
// 6/12/2018
//

/* functions */
KFUNC(0x3095D0, Xfast_syscall, void, (void));
KFUNC(0x14A890, copyin, int, (const void *uaddr, void *kaddr, uint64_t len));
KFUNC(0x14A7B0, copyout, int, (const void *kaddr, void *uaddr, uint64_t len));
KFUNC(0x017F30, printf, int, (const char *fmt, ... ));
KFUNC(0x017FA0, vprintf, int, (const char *fmt, va_list arg));
KFUNC(0x3F7750, malloc, void *, (uint64_t size, void *type, int flags));
KFUNC(0x3F7930, free, void, (void *addr, void *type));
KFUNC(0x14A6B0, memcpy, void *, (void *dest, const void *src, uint64_t num));
KFUNC(0x302BD0, memset, void *, (void *ptr, int value, uint64_t num));
KFUNC(0x242A60, memcmp, int, (const void *ptr1, const void *ptr2, uint64_t num));
KFUNC(0x16ECD0, kmem_alloc, void *, (struct vm_map *map, uint64_t size));
KFUNC(0x3514F0, strlen, uint64_t, (const char *str));
KFUNC(0x261120, pause, void, (const char *wmesg, int timo));
KFUNC(0x464C90, kthread_add, int, (void (*func)(void *), void *arg, struct proc *procp, struct thread **newtdpp, int flags, int pages, const char *fmt, ...));
KFUNC(0x464F60, kthread_exit, void, (void));
KFUNC(0x072410, sched_prio, void, (struct thread *td, uint16_t prio));
KFUNC(0x072740, sched_add, void, (struct thread *td, uint64_t cpuset));
KFUNC(0x261440, kern_yield, void, (uint64_t p));
KFUNC(0x2829C0, fill_regs, int, (struct thread *td, struct reg *rg));
KFUNC(0x282AF0, set_regs, int, (struct thread *td, struct reg *rg));
KFUNC(0x2ECCD0, create_thread, int, (struct thread * td, uint64_t ctx, void (*start_func)(void *), void *arg, char *stack_base, uint64_t stack_size, char *tls_base, long *child_tid, long *parent_tid, uint64_t flags, uint64_t rtp));
KFUNC(0x464700, kproc_create, int, (void (*func)(void *), void *arg, struct proc **newpp, int flags, int pages, const char *fmt, ...));
KFUNC(0x4655E0, kthread_set_affinity, void, (const char *tdname, uint64_t prio, uint64_t cpuset, uint64_t unknown)); // custom name
KFUNC(0x465380, kthread_suspend_check, void, (void));
KFUNC(0x465490, kproc_kthread_add, int, (void (*func)(void *), void *arg, struct proc **procptr, struct thread **tdptr, int flags, int pages, char * procname, const char *fmt, ...));
KFUNC(0x38F900, sx_init_flags, void, (struct sx *sx, const char *description, int opts));
KFUNC(0x38FA30, sx_xlock, void, (struct sx *sx));
KFUNC(0x38FBC0, sx_xunlock, void, (struct sx *sx));
KFUNC(0x30E0C0, mtx_init, void, (struct mtx *mutex, const char *name, const char *type, int opts));
KFUNC(0x30DA70, mtx_lock_spin_flags, void, (struct mtx *mutex, int flags));
KFUNC(0x30DC30, mtx_unlock_spin_flags, void, (struct mtx *mutex, int flags));
KFUNC(0x30D6A0, mtx_lock_sleep, void, (struct mtx *mutex, int flags));
KFUNC(0x30D940, mtx_unlock_sleep, void, (struct mtx *mutex, int flags));
KFUNC(0x0998A0, kern_reboot, int, (int magic));
KFUNC(0x3920B0, vm_map_lock_read, void, (struct vm_map *map));
KFUNC(0x392C70, vm_map_lookup_entry, int, (struct vm_map *map, uint64_t address, struct vm_map_entry **entries));
KFUNC(0x392100, vm_map_unlock_read, void, (struct vm_map *map));
KFUNC(0x391EE0, vmspace_acquire_ref, struct vmspace *, (struct proc *p));
KFUNC(0x391D10, vmspace_free, void, (struct vmspace *vm));
KFUNC(0x394790, vm_map_delete, int, (struct vm_map *map, uint64_t start, uint64_t end));
KFUNC(0x396860, vm_map_protect, int, (struct vm_map * map, uint64_t start, uint64_t end, int new_prot, uint64_t set_max));
KFUNC(0x394E90, vm_map_findspace, int, (struct vm_map * map, uint64_t start, uint64_t length, uint64_t *addr));
KFUNC(0x392F70, vm_map_insert, int, (struct vm_map * map, uint64_t object, uint64_t offset, uint64_t start, uint64_t end, int prot, int max, int cow));
KFUNC(0x391F40, vm_map_lock, void, (struct vm_map * map));
KFUNC(0x391FB0, vm_map_unlock, void, (struct vm_map * map));
KFUNC(0x17CB70, proc_rwmem, int, (struct proc *p, struct uio *uio));

/* data */
KDATA(0x1997BC8, disable_console_output, uint8_t);
KDATA(0x1993B30, M_TEMP, void);
KDATA(0x1B31218, kernel_map, void *);
KDATA(0x10399B0, prison0, void *);
KDATA(0x21AFA30, rootvnode, void *);
KDATA(0x1AD7718, allproc, struct proc *);
KDATA(0x102B690, sysents, struct sysent);
