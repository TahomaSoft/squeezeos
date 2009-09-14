/*
 * Copyright 2008 Freescale Semiconductor, Inc. All Rights Reserved.
 */

/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/*!
 * @file sdma_script_code.h
 * @brief This file contains functions of SDMA scripts code initialization
 *
 * The file was generated automatically. Based on sdma scripts library.
 *
 * @ingroup SDMA
 */
/****************************************************************************

			SDMA RELEASE LABEL: 	"SS14_RINGO"

*****************************************************************************/

#ifndef SDMA_SCRIPT_CODE_H
#define SDMA_SCRIPT_CODE_H

/*!
 * SDMA ROM scripts start addresses and sizes
 */

#define start_ADDR	0
#define start_SIZE	22

#define core_ADDR	80
#define core_SIZE	232

#define common_ADDR	312
#define common_SIZE	330

#define ap_2_ap_ADDR	642
#define ap_2_ap_SIZE	41

#define app_2_mcu_ADDR	683
#define app_2_mcu_SIZE	64

#define mcu_2_app_ADDR	747
#define mcu_2_app_SIZE	70

#define uart_2_mcu_ADDR	817
#define uart_2_mcu_SIZE	75

#define shp_2_mcu_ADDR	892
#define shp_2_mcu_SIZE	69

#define mcu_2_shp_ADDR	961
#define mcu_2_shp_SIZE	72

#define per_2_shp_ADDR	1033
#define per_2_shp_SIZE	78

#define shp_2_per_ADDR	1111
#define shp_2_per_SIZE	72

#define uartsh_2_mcu_ADDR	1183
#define uartsh_2_mcu_SIZE	69

#define mcu_2_ata_ADDR	1252
#define mcu_2_ata_SIZE	81

#define ata_2_mcu_ADDR	1333
#define ata_2_mcu_SIZE	96

#define loop_DMAs_routines_ADDR	1429
#define loop_DMAs_routines_SIZE	227

#define test_ADDR	1656
#define test_SIZE	63

#define signature_ADDR	1023
#define signature_SIZE	1

/*!
* SDMA RAM scripts start addresses and sizes
*/

#define app_2_per_ADDR	6144
#define app_2_per_SIZE	66

#define descrambler_ADDR	6210
#define descrambler_SIZE	129

#define ext_mem__ipu_ram_ADDR	6339
#define ext_mem__ipu_ram_SIZE	123

#define mcu_2_spdif_ADDR	6462
#define mcu_2_spdif_SIZE	59

#define per_2_app_ADDR	6521
#define per_2_app_SIZE	74

#define spdif_2_mcu_ADDR	6595
#define spdif_2_mcu_SIZE	32

#define uart_2_per_ADDR	6627
#define uart_2_per_SIZE	73

#define uartsh_2_per_ADDR	6700
#define uartsh_2_per_SIZE	67

/*!
* SDMA RAM image start address and size
*/

#define RAM_CODE_START_ADDR		6144
#define RAM_CODE_SIZE			623

/*!
* Buffer that holds the SDMA RAM image
*/

static const short sdma_code[] = {
	0xc1e3, 0x57db, 0x52fb, 0x6ac3, 0x52f3, 0x6ad7, 0x008f, 0x00d5,
	0x7d01, 0x008d, 0x05a0, 0x0478, 0x7d03, 0x0479, 0x7d1c, 0x7c21,
	0x0479, 0x7c14, 0x6ddd, 0x56ee, 0x62c8, 0x7e28, 0x0660, 0x7d02,
	0x0210, 0x0212, 0x6ac8, 0x7f22, 0x0212, 0x6ac8, 0x7f1f, 0x0212,
	0x6ac8, 0x7f1c, 0x2003, 0x4800, 0x7cef, 0x9836, 0x6ddd, 0x7802,
	0x62c8, 0x6ac8, 0x9835, 0x6dde, 0x0015, 0x7802, 0x62c8, 0x6ac8,
	0x9835, 0x0015, 0x0015, 0x7801, 0x62d8, 0x7c08, 0x6ddf, 0x7f06,
	0x0000, 0x4d00, 0x7d05, 0xc1fa, 0x57db, 0x9806, 0xc273, 0x0454,
	0xc20a, 0x9801, 0xc13c, 0x7d4a, 0x0970, 0x0111, 0x5111, 0x5ad1,
	0x5bd9, 0xc14e, 0x5ce1, 0x7d02, 0x0200, 0x9848, 0x08ff, 0x0011,
	0x28ff, 0x00bc, 0x0288, 0x3a03, 0x4a00, 0x7c67, 0x0015, 0x0015,
	0x4800, 0x7d2d, 0x58c1, 0x028e, 0x3a03, 0x4a00, 0x7c58, 0x028d,
	0x3a03, 0x4a00, 0x7c54, 0x6e05, 0x6d01, 0x0d00, 0x0549, 0x5dc9,
	0x2d49, 0x0f01, 0x660b, 0xd8b2, 0x50c9, 0x284c, 0x00cd, 0x7c01,
	0x05a0, 0x5de9, 0x50c9, 0x2849, 0x05d0, 0x7c05, 0x4d00, 0x7c01,
	0x0f01, 0xd890, 0x0692, 0x6e0b, 0x6e28, 0x7e39, 0x7f38, 0x55e9,
	0x1d01, 0x50c1, 0x2001, 0x58c1, 0x4800, 0x7d01, 0x986a, 0x52d1,
	0x53d9, 0x54e1, 0xc159, 0x7dbc, 0x0200, 0x9842, 0x0200, 0x9842,
	0x0b04, 0x0a00, 0x0c00, 0x0760, 0x7c0b, 0x0803, 0x058b, 0x2501,
	0x7801, 0x0517, 0x008d, 0x009c, 0x0d01, 0x7801, 0x0517, 0x0295,
	0x058f, 0x3d03, 0x0715, 0x4d01, 0x7d02, 0x4d02, 0x7c03, 0x0d00,
	0x054e, 0x07ad, 0x1c01, 0x4c08, 0x7ce6, 0x0c00, 0x2301, 0x4b00,
	0x7ce2, 0x0006, 0x0611, 0x0610, 0x0611, 0x0610, 0x0006, 0x0007,
	0x6004, 0x680c, 0x50c1, 0x0017, 0x0017, 0xc256, 0x048b, 0x0498,
	0x0454, 0x5ce1, 0x9887, 0x0e70, 0x0611, 0x5616, 0xc13c, 0x7d2a,
	0x5ade, 0x008e, 0xc14e, 0x7c26, 0x5be0, 0x5ef0, 0x5ce8, 0x0688,
	0x08ff, 0x0011, 0x28ff, 0x00bc, 0x53f6, 0x05df, 0x7d0b, 0x6dc5,
	0x03df, 0x7d03, 0x6bd5, 0xd912, 0x98ee, 0x6b05, 0xc5f5, 0x7e27,
	0x7f29, 0x98ee, 0x6d01, 0x03df, 0x7d05, 0x6bd5, 0xc61f, 0x7e18,
	0x7f1a, 0x98ee, 0x6b05, 0xc595, 0x7e07, 0x7f06, 0x52de, 0x53e6,
	0xc159, 0x7dd7, 0x0200, 0x98c6, 0x0007, 0x6004, 0x680c, 0x53f6,
	0x028e, 0x00a3, 0xc256, 0x048b, 0x0498, 0x0454, 0x068a, 0x98ee,
	0x0207, 0x680c, 0x6ddf, 0x0107, 0x68ff, 0x60d0, 0x98f7, 0x0207,
	0x68ff, 0x6d28, 0x0107, 0x6004, 0x680c, 0x98f7, 0x0007, 0x68ff,
	0x60d0, 0x98f7, 0x0288, 0x03a5, 0x3b03, 0x3d03, 0x4d00, 0x7d0a,
	0x0804, 0x00a5, 0x00da, 0x7d1a, 0x02a0, 0x7b01, 0x65d8, 0x7eee,
	0x65ff, 0x7eec, 0x0804, 0x02d0, 0x7d11, 0x4b00, 0x7c0f, 0x008a,
	0x3003, 0x6dcf, 0x6bdf, 0x0015, 0x0015, 0x7b02, 0x65d8, 0x0000,
	0x7edd, 0x63ff, 0x7edb, 0x3a03, 0x6dcd, 0x6bdd, 0x008a, 0x7b02,
	0x65d8, 0x0000, 0x7ed3, 0x65ff, 0x7ed1, 0x0006, 0xc1d9, 0xc1e3,
	0x57db, 0x52f3, 0x6a01, 0x008f, 0x00d5, 0x7d01, 0x008d, 0x05a0,
	0x5deb, 0x56fb, 0x0478, 0x7d28, 0x0479, 0x7c16, 0x0015, 0x0015,
	0x0388, 0x620a, 0x0808, 0x7801, 0x0217, 0x5a06, 0x7f1d, 0x620a,
	0x0808, 0x7801, 0x0217, 0x5a26, 0x7f17, 0x2301, 0x4b00, 0x7cf1,
	0x0b70, 0x0311, 0x5313, 0x996d, 0x0015, 0x0015, 0x0015, 0x7804,
	0x620b, 0x5a06, 0x620b, 0x5a26, 0x7c07, 0x0000, 0x55eb, 0x4d00,
	0x7d06, 0xc1fa, 0x57db, 0x9943, 0x0007, 0x680c, 0xc213, 0xc20a,
	0x9940, 0xc1e3, 0x57db, 0x52f3, 0x6ac5, 0x52fb, 0x6ad3, 0x008f,
	0x00d5, 0x7d01, 0x008d, 0x05a0, 0x5deb, 0x0478, 0x7d03, 0x0479,
	0x7d20, 0x7c25, 0x0479, 0x7c19, 0x59e3, 0x56ee, 0x61c8, 0x7e2e,
	0x62c8, 0x7e2c, 0x65c8, 0x7e2a, 0x0660, 0x7d03, 0x0112, 0x0112,
	0x999b, 0x0512, 0x0512, 0x0211, 0x02a9, 0x02ad, 0x6ac8, 0x7f1e,
	0x2003, 0x4800, 0x7ceb, 0x51e3, 0x99b5, 0x7802, 0x62c8, 0x6ac8,
	0x99b4, 0x6dce, 0x0015, 0x7802, 0x62c8, 0x6ac8, 0x99b4, 0x6dcf,
	0x0015, 0x0015, 0x7801, 0x62d8, 0x7c09, 0x6ddf, 0x7f07, 0x0000,
	0x55eb, 0x4d00, 0x7d06, 0xc1fa, 0x57db, 0x997f, 0x0007, 0x68ff,
	0xc213, 0xc20a, 0x997a, 0xc1d9, 0xc1e3, 0x57db, 0x52f3, 0x6a05,
	0x008f, 0x00d5, 0x7d01, 0x008d, 0x05a0, 0x56fb, 0x0015, 0x0015,
	0x0015, 0x7804, 0x5206, 0x6a0b, 0x5226, 0x6a0b, 0x7c08, 0x6a28,
	0x7f06, 0x0000, 0x4d00, 0x7d05, 0xc1fa, 0x57db, 0x99c8, 0xc277,
	0x0454, 0xc20a, 0x99c5, 0xc1e3, 0x57db, 0x52f3, 0x6ad5, 0x56fb,
	0x028e, 0x1a94, 0x6ac3, 0x62c8, 0x0269, 0x7d1e, 0x1e94, 0x6ee3,
	0x62d0, 0x5aeb, 0x62c8, 0x0248, 0x6ed3, 0x6ac8, 0x2694, 0x52eb,
	0x6ad5, 0x6ee3, 0x62c8, 0x026e, 0x7d27, 0x6ac8, 0x7f23, 0x2501,
	0x4d00, 0x7d26, 0x028e, 0x1a98, 0x6ac3, 0x62c8, 0x6ec3, 0x0260,
	0x7df1, 0x62d0, 0xc27a, 0x9a28, 0x6ee3, 0x008f, 0x2001, 0x00d5,
	0x7d01, 0x008d, 0x05a0, 0x62c8, 0x026e, 0x7d0e, 0x6ac8, 0x7f0a,
	0x2001, 0x7cf9, 0x6add, 0x7f06, 0x0000, 0x4d00, 0x7d09, 0xc1fa,
	0x57db, 0x99e7, 0x0007, 0x6aff, 0x62d0, 0xc27a, 0x0458, 0x0454,
	0x6add, 0x7ff8, 0xc20a, 0x99e4, 0xc1d9, 0xc1e3, 0x57db, 0x52f3,
	0x6ad5, 0x56fb, 0x028e, 0x1a94, 0x5202, 0x0269, 0x7d17, 0x1e94,
	0x5206, 0x0248, 0x5a06, 0x2694, 0x5206, 0x026e, 0x7d26, 0x6ac8,
	0x7f22, 0x2501, 0x4d00, 0x7d27, 0x028e, 0x1a98, 0x5202, 0x0260,
	0x7df3, 0x6add, 0x7f18, 0x62d0, 0xc27a, 0x9a6b, 0x008f, 0x2001,
	0x00d5, 0x7d01, 0x008d, 0x05a0, 0x5206, 0x026e, 0x7d0e, 0x6ac8,
	0x7f0a, 0x2001, 0x7cf9, 0x6add, 0x7f06, 0x0000, 0x4d00, 0x7d0b,
	0xc1fa, 0x57db, 0x9a31, 0x0007, 0x6aff, 0x6add, 0x7ffc, 0x62d0,
	0xc27a, 0x0458, 0x0454, 0x6add, 0x7ff6, 0xc20a, 0x9a2e
};
#endif