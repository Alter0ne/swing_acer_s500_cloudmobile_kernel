/*
 * Copyright (c) 2011, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef _DSPS_H_
#define _DSPS_H_

#include <linux/ioctl.h>

#define DSPS_IOCTL_MAGIC 'd'

#define DSPS_IOCTL_ON	_IO(DSPS_IOCTL_MAGIC, 1)
#define DSPS_IOCTL_OFF	_IO(DSPS_IOCTL_MAGIC, 2)

#define DSPS_IOCTL_READ_SLOW_TIMER _IOR(DSPS_IOCTL_MAGIC, 3, unsigned int*)
#define DSPS_IOCTL_READ_FAST_TIMER _IOR(DSPS_IOCTL_MAGIC, 4, unsigned int*)

#define DSPS_IOCTL_RESET _IO(DSPS_IOCTL_MAGIC, 5)

#define DSPS_DEVINFO

#ifdef DSPS_DEVINFO
#define DSPS_IOCTL_WRITE_ACCEL_VENDOR_INFO _IOW(DSPS_IOCTL_MAGIC, 10, char*)

#define DSPS_IOCTL_WRITE_MAG_VENDOR_INFO _IOW(DSPS_IOCTL_MAGIC, 11, char*)

#define DSPS_IOCTL_WRITE_GYRO_VENDOR_INFO _IOW(DSPS_IOCTL_MAGIC, 12, char*)

#define DSPS_IOCTL_WRITE_PROX_LIGHT_VENDOR_INFO _IOW(DSPS_IOCTL_MAGIC, 13, char*)

#define DSPS_IOCTL_WRITE_ACCEL_CHIP_INFO _IOW(DSPS_IOCTL_MAGIC, 14,  int*)

#define DSPS_IOCTL_WRITE_MAG_CHIP_INFO _IOW(DSPS_IOCTL_MAGIC, 15, int*)

#define DSPS_IOCTL_WRITE_GYRO_CHIP_INFO _IOW(DSPS_IOCTL_MAGIC, 16, int*)

#define DSPS_IOCTL_WRITE_PROX_LIGHT_CHIP_INFO _IOW(DSPS_IOCTL_MAGIC, 17, int*)
#endif

#endif	/* _DSPS_H_ */
