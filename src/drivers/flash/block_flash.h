/*
 * Copyright 2015 Google Inc.
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but without any warranty; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#ifndef __DRIVERS_FLASH_BLOCK_FLASH_H__
#define __DRIVERS_FLASH_BLOCK_FLASH_H__

#include "drivers/flash/flash.h"
#include "drivers/storage/blockdev.h"

typedef struct FlashBlockDev
{
	BlockDevCtrlr ctrlr;
	BlockDev dev;
	FlashOps *ops;
} FlashBlockDev;

FlashBlockDev *block_flash_register_nor(FlashOps *ops);

#endif /* __DRIVERS_FLASH_BLOCK_FLASH_H__ */
