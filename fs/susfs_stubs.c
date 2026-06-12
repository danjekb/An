// SPDX-License-Identifier: GPL-2.0
/*
 * SusFS stub implementations for linking
 * 
 * These are weak symbol implementations that provide stub functions
 * for SusFS that allow the kernel to build even if SusFS features
 * are not fully integrated. They can be overridden by the actual
 * SusFS implementation if provided.
 */

#include <linux/fs.h>
#include <linux/errno.h>

/**
 * susfs_is_avc_log_spoofing_enabled - Check if AVC log spoofing is enabled
 * 
 * This function is referenced by the SusFS patch but may not be defined
 * in all configurations. This stub provides a default implementation.
 */
__weak bool susfs_is_avc_log_spoofing_enabled(void)
{
	return false;
}
EXPORT_SYMBOL(susfs_is_avc_log_spoofing_enabled);

/**
 * susfs_is_current_ksu_domain - Check if current process is in KSU domain
 * 
 * This function is referenced by the SusFS patch but may not be defined
 * in all configurations. This stub provides a default implementation.
 */
__weak bool susfs_is_current_ksu_domain(void)
{
	return false;
}
EXPORT_SYMBOL(susfs_is_current_ksu_domain);
