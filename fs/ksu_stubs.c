// SPDX-License-Identifier: GPL-2.0
/*
 * KernelSU stub implementations for linking
 * 
 * These are weak symbol implementations that allow the kernel to build
 * even if KernelSU is not fully integrated. They can be overridden by
 * the actual KernelSU implementation if provided.
 */

#include <linux/fs.h>
#include <linux/stat.h>

/* Stub for newfstat return handler */
__weak void ksu_handle_newfstat_ret(unsigned int *fd, struct stat __user **statbuf_ptr)
{
	/* No-op implementation */
	return;
}

/* Stub for VFS read hook flag */
__weak bool ksu_vfs_read_hook __read_mostly = false;

/* Stub for read syscall handler */
__weak int ksu_handle_sys_read(unsigned int fd, char __user **buf_ptr, size_t *count_ptr)
{
	/* No-op implementation */
	return 0;
}

EXPORT_SYMBOL(ksu_handle_newfstat_ret);
EXPORT_SYMBOL(ksu_vfs_read_hook);
EXPORT_SYMBOL(ksu_handle_sys_read);
