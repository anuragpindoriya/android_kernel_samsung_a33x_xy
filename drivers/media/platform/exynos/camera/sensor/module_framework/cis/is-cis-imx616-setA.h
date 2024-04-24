/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2018 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef IS_CIS_IMX616_SET_A_H
#define IS_CIS_IMX616_SET_A_H

#include "is-cis.h"
#include "is-cis-imx616.h"

/*
 * Reference File : IMX616-AAJH5_SAM-DPHY_26MHz_RegisterSetting_ver3.00-8.00_190422.xlsx
 *
 * Sensor Modes
 *
 * - 2x2 BIN For Single Still Preview / Capture -
 *    [ 0 ] REG_Z_G : 2x2 Binning 3264x2448 30fps : Single Still Preview (4:3)    ,  MIPI lane: 4, MIPI data rate(Mbps/lane): 800
 *
 * - FULL Remosaic For Single Still Remosaic Capture -
 *    [ 1 ] REG_Z_F  : Full Remosaic 6528x4896 24fps : Single Still Remosaic Capture (4:3) , MIPI lane: 4, MIPI data rate(Mbps/lane): 800
 *
 */

const u32 sensor_imx616_setfile_A_Global[] = {
	//External Clock Setting
	0x0136, 0x1A, 0x01,
	0x0137, 0x00, 0x01,
	//Register version
	0x3C7E, 0x03, 0x01,
	0x3C7F, 0x08, 0x01,
	//Signaling mode setting
	0x0111, 0x02, 0x01,
	//Global Setting
	0x380C, 0x00, 0x01,
	0x3C00, 0x01, 0x01,
	0x3C01, 0x00, 0x01,
	0x3C02, 0x00, 0x01,
	0x3C03, 0x03, 0x01,
	0x3C04, 0xFF, 0x01,
	0x3C05, 0x01, 0x01,
	0x3C06, 0x00, 0x01,
	0x3C07, 0x00, 0x01,
	0x3C08, 0x03, 0x01,
	0x3C09, 0xFF, 0x01,
	0x3C0A, 0x00, 0x01,
	0x3C0B, 0x00, 0x01,
	0x3C0C, 0x10, 0x01,
	0x3C0D, 0x10, 0x01,
	0x3C0E, 0x10, 0x01,
	0x3C0F, 0x10, 0x01,
	0x3C10, 0x10, 0x01,
	0x3C11, 0x20, 0x01,
	0x3C15, 0x00, 0x01,
	0x3C16, 0x00, 0x01,
	0x3C17, 0x00, 0x01,
	0x3C18, 0x00, 0x01,
	0x3C19, 0x01, 0x01,
	0x3C1A, 0x00, 0x01,
	0x3C1B, 0x01, 0x01,
	0x3C1C, 0x00, 0x01,
	0x3C1D, 0x01, 0x01,
	0x3C1E, 0x00, 0x01,
	0x3C1F, 0x00, 0x01,
	0x3F89, 0x01, 0x01,
	0x3F8F, 0x01, 0x01,
	0x53B9, 0x01, 0x01,
	0x577C, 0x00, 0x01,
	0x577D, 0x1D, 0x01,
	0x5784, 0x02, 0x01,
	0x5785, 0x4E, 0x01,
	0x5788, 0x00, 0x01,
	0x5789, 0xA8, 0x01,
	0x5794, 0x06, 0x01,
	0x5795, 0xB3, 0x01,
	0x579E, 0x00, 0x01,
	0x579F, 0x69, 0x01,
	0x57A8, 0x02, 0x01,
	0x57A9, 0x4E, 0x01,
	0x57AC, 0x00, 0x01,
	0x57AD, 0x4F, 0x01,
	0x57B0, 0x00, 0x01,
	0x57B1, 0xDA, 0x01,
	0x57B4, 0x06, 0x01,
	0x57B5, 0xB3, 0x01,
	0x57B6, 0x00, 0x01,
	0x57B7, 0x9B, 0x01,
	0x57BA, 0x02, 0x01,
	0x57BB, 0x4E, 0x01,
	0x57C4, 0x00, 0x01,
	0x57C5, 0x18, 0x01,
	0x57D0, 0x00, 0x01,
	0x57D1, 0xA8, 0x01,
	0x57DE, 0x00, 0x01,
	0x57DF, 0x4A, 0x01,
	0x57E2, 0x00, 0x01,
	0x57E3, 0xDA, 0x01,
	0x60D5, 0x0F, 0x01,
	0x60D6, 0x0F, 0x01,
	0x60D7, 0x0F, 0x01,
	0x60D8, 0x0F, 0x01,
	0x60D9, 0x0F, 0x01,
	0x60DA, 0x0F, 0x01,
	0x60DB, 0x0F, 0x01,
	0x60DC, 0x0F, 0x01,
	0x60DD, 0x0F, 0x01,
	0x60DE, 0x0F, 0x01,
	0x60DF, 0x0F, 0x01,
	0x60E0, 0x0F, 0x01,
	0x60E1, 0x0F, 0x01,
	0x60E2, 0x0F, 0x01,
	0x60E3, 0x0F, 0x01,
	0x62A2, 0x08, 0x01,
	0x62A3, 0x08, 0x01,
	0x62A5, 0x08, 0x01,
	0x62A7, 0x08, 0x01,
	0x62A9, 0x08, 0x01,
	0x62AB, 0x08, 0x01,
	0x62AD, 0x08, 0x01,
	0x62B1, 0x08, 0x01,
	0x62B2, 0x08, 0x01,
	0x62B3, 0x08, 0x01,
	0x62B4, 0x08, 0x01,
	0x62B5, 0x08, 0x01,
	0x62B6, 0x08, 0x01,
	0x62B7, 0x10, 0x01,
	0x62B8, 0x10, 0x01,
	0x62B9, 0x10, 0x01,
	0x62BA, 0x10, 0x01,
	0x62BB, 0x10, 0x01,
	0x62BC, 0x10, 0x01,
	0x62BD, 0x10, 0x01,
	0x62BE, 0x10, 0x01,
	0x62BF, 0x10, 0x01,
	0x62C0, 0x10, 0x01,
	0x62C1, 0x10, 0x01,
	0x62C2, 0x10, 0x01,
	0x62C3, 0x10, 0x01,
	0x62C4, 0x04, 0x01,
	0x62C5, 0x04, 0x01,
	0x62C6, 0x04, 0x01,
	0x62C7, 0x04, 0x01,
	0x62C8, 0x04, 0x01,
	0x62C9, 0x04, 0x01,
	0x62CA, 0x04, 0x01,
	0x62CB, 0x04, 0x01,
	0x62CC, 0x04, 0x01,
	0x62CD, 0x04, 0x01,
	0x62CE, 0x04, 0x01,
	0x62CF, 0x04, 0x01,
	0x62D0, 0x04, 0x01,
	0x62D1, 0x04, 0x01,
	0x62D2, 0x04, 0x01,
	0x62D3, 0x04, 0x01,
	0x62D4, 0x04, 0x01,
	0x62D5, 0x04, 0x01,
	0x62D6, 0x04, 0x01,
	0x62D7, 0x04, 0x01,
	0x62D8, 0x04, 0x01,
	0x62D9, 0x04, 0x01,
	0x62DA, 0x04, 0x01,
	0x62DB, 0x04, 0x01,
	0x62DC, 0x04, 0x01,
	0x62DD, 0x04, 0x01,
	0x62DE, 0x04, 0x01,
	0x62DF, 0x04, 0x01,
	0x62E0, 0x04, 0x01,
	0x62E1, 0x04, 0x01,
	0x62E2, 0x04, 0x01,
	0x62E3, 0x04, 0x01,
	0x62E4, 0x04, 0x01,
	0x62E5, 0x04, 0x01,
	0x62E6, 0x02, 0x01,
	0x62E7, 0x02, 0x01,
	0x62E8, 0x02, 0x01,
	0x62E9, 0x02, 0x01,
	0x62EA, 0x02, 0x01,
	0x62EB, 0x02, 0x01,
	0x62EC, 0x02, 0x01,
	0x62ED, 0x02, 0x01,
	0x62EE, 0x02, 0x01,
	0x62EF, 0x02, 0x01,
	0x62F0, 0x02, 0x01,
	0x62F1, 0x02, 0x01,
	0x62F2, 0x02, 0x01,
	0x62F3, 0x01, 0x01,
	0x62F4, 0x01, 0x01,
	0x62F5, 0x01, 0x01,
	0x62F6, 0x01, 0x01,
	0x62F7, 0x01, 0x01,
	0x62F8, 0x01, 0x01,
	0x62F9, 0x01, 0x01,
	0x62FA, 0x01, 0x01,
	0x62FB, 0x01, 0x01,
	0x62FC, 0x01, 0x01,
	0x62FD, 0x01, 0x01,
	0x62FE, 0x01, 0x01,
	0x62FF, 0x01, 0x01,
	0x6300, 0x01, 0x01,
	0x6301, 0x01, 0x01,
	0x6302, 0x01, 0x01,
	0x6303, 0x01, 0x01,
	0x6304, 0x01, 0x01,
	0x6305, 0x01, 0x01,
	0x6306, 0x01, 0x01,
	0x6307, 0x01, 0x01,
	0x6308, 0x01, 0x01,
	0x6309, 0x01, 0x01,
	0x630A, 0x01, 0x01,
	0x630B, 0x01, 0x01,
	0x630C, 0x01, 0x01,
	0x630D, 0x01, 0x01,
	0x630E, 0x01, 0x01,
	0x630F, 0x01, 0x01,
	0x6310, 0x01, 0x01,
	0x6311, 0x01, 0x01,
	0x6312, 0x01, 0x01,
	0x6313, 0x01, 0x01,
	0x6314, 0x01, 0x01,
	0x6315, 0x01, 0x01,
	0x6316, 0x01, 0x01,
	0x6317, 0x01, 0x01,
	0x6318, 0x01, 0x01,
	0x6319, 0x01, 0x01,
	0x631A, 0x01, 0x01,
	0x631B, 0x01, 0x01,
	0x631C, 0x01, 0x01,
	0x631D, 0x01, 0x01,
	0x631E, 0x01, 0x01,
	0x631F, 0x01, 0x01,
	0x6320, 0x01, 0x01,
	0x6321, 0x01, 0x01,
	0x6366, 0x00, 0x01,
	0x6367, 0x55, 0x01,
	0x6368, 0x00, 0x01,
	0x6369, 0x55, 0x01,
	0x636A, 0x00, 0x01,
	0x636B, 0x55, 0x01,
	0x636C, 0x00, 0x01,
	0x636D, 0x55, 0x01,
	0x636E, 0x00, 0x01,
	0x636F, 0x55, 0x01,
	0x6370, 0x00, 0x01,
	0x6371, 0x55, 0x01,
	0x6372, 0x00, 0x01,
	0x6373, 0x55, 0x01,
	0x6374, 0x00, 0x01,
	0x6375, 0x55, 0x01,
	0x6376, 0x00, 0x01,
	0x6377, 0x55, 0x01,
	0x6378, 0x00, 0x01,
	0x6379, 0x55, 0x01,
	0x637A, 0x00, 0x01,
	0x637B, 0x55, 0x01,
	0x637C, 0x00, 0x01,
	0x637D, 0x55, 0x01,
	0x637E, 0x00, 0x01,
	0x637F, 0x55, 0x01,
	0x63C4, 0x00, 0x01,
	0x63C5, 0xBC, 0x01,
	0x63C6, 0x00, 0x01,
	0x63C7, 0xBC, 0x01,
	0x63C8, 0x00, 0x01,
	0x63C9, 0xBC, 0x01,
	0x63CA, 0x00, 0x01,
	0x63CB, 0xBC, 0x01,
	0x63CC, 0x00, 0x01,
	0x63CD, 0xBC, 0x01,
	0x63CE, 0x00, 0x01,
	0x63CF, 0xBC, 0x01,
	0x63D0, 0x00, 0x01,
	0x63D1, 0xBC, 0x01,
	0x63D2, 0x00, 0x01,
	0x63D3, 0xBC, 0x01,
	0x63D4, 0x00, 0x01,
	0x63D5, 0xBC, 0x01,
	0x63D6, 0x00, 0x01,
	0x63D7, 0xBC, 0x01,
	0x63D8, 0x00, 0x01,
	0x63D9, 0xBC, 0x01,
	0x63DA, 0x00, 0x01,
	0x63DB, 0xBC, 0x01,
	0x63DC, 0x00, 0x01,
	0x63DD, 0xBC, 0x01,
	0x63EA, 0x00, 0x01,
	0x63EB, 0xBC, 0x01,
	0x63EC, 0x00, 0x01,
	0x63ED, 0xBC, 0x01,
	0x63EE, 0x19, 0x01,
	0x63EF, 0x19, 0x01,
	0x63F0, 0x19, 0x01,
	0x63F1, 0x19, 0x01,
	0x63F2, 0x19, 0x01,
	0x63F3, 0x19, 0x01,
	0x63F4, 0x19, 0x01,
	0x63F5, 0x19, 0x01,
	0x63F6, 0x19, 0x01,
	0x63F7, 0x19, 0x01,
	0x63F8, 0x19, 0x01,
	0x63F9, 0x19, 0x01,
	0x63FA, 0x19, 0x01,
	0x63FB, 0x19, 0x01,
	0x63FC, 0x19, 0x01,
	0x63FD, 0x19, 0x01,
	0x63FE, 0x19, 0x01,
	0x63FF, 0x19, 0x01,
	0x6400, 0x19, 0x01,
	0x6401, 0x19, 0x01,
	0x6402, 0x19, 0x01,
	0x6403, 0x19, 0x01,
	0x6404, 0x19, 0x01,
	0x6405, 0x19, 0x01,
	0x6406, 0x19, 0x01,
	0x6407, 0x19, 0x01,
	0x6408, 0x19, 0x01,
	0x6409, 0x19, 0x01,
	0x640A, 0x19, 0x01,
	0x640B, 0x19, 0x01,
	0x640C, 0x19, 0x01,
	0x640D, 0x19, 0x01,
	0x640E, 0x19, 0x01,
	0x640F, 0x19, 0x01,
	0x6410, 0x19, 0x01,
	0x6411, 0x19, 0x01,
	0x6412, 0x19, 0x01,
	0x6413, 0x19, 0x01,
	0x6414, 0x19, 0x01,
	0x6415, 0x19, 0x01,
	0x6416, 0x19, 0x01,
	0x6417, 0x19, 0x01,
	0x6418, 0x19, 0x01,
	0x6419, 0x19, 0x01,
	0x641A, 0x19, 0x01,
	0x641B, 0x19, 0x01,
	0x641C, 0x19, 0x01,
	0x644A, 0x00, 0x01,
	0x644B, 0x25, 0x01,
	0x644C, 0x00, 0x01,
	0x644D, 0x21, 0x01,
	0x644E, 0x00, 0x01,
	0x644F, 0x0B, 0x01,
	0x6450, 0x00, 0x01,
	0x6451, 0x1B, 0x01,
	0x6452, 0x00, 0x01,
	0x6453, 0x07, 0x01,
	0x6454, 0x00, 0x01,
	0x6455, 0x19, 0x01,
	0x6456, 0x00, 0x01,
	0x6457, 0x05, 0x01,
	0x6462, 0x00, 0x01,
	0x6463, 0x27, 0x01,
	0x6464, 0x00, 0x01,
	0x6465, 0x22, 0x01,
	0x6466, 0x00, 0x01,
	0x6467, 0x21, 0x01,
	0x6468, 0x00, 0x01,
	0x6469, 0x1C, 0x01,
	0x646A, 0x00, 0x01,
	0x646B, 0x1A, 0x01,
	0x646C, 0x00, 0x01,
	0x646D, 0x1A, 0x01,
	0x646E, 0x00, 0x01,
	0x646F, 0x18, 0x01,
	0x647A, 0x00, 0x01,
	0x647B, 0x22, 0x01,
	0x647C, 0x00, 0x01,
	0x647D, 0x1B, 0x01,
	0x647E, 0x00, 0x01,
	0x647F, 0x19, 0x01,
	0x6486, 0x01, 0x01,
	0x6487, 0x22, 0x01,
	0x6488, 0x00, 0x01,
	0x6489, 0x1C, 0x01,
	0x648A, 0x00, 0x01,
	0x648B, 0x1A, 0x01,
	0x648C, 0x00, 0x01,
	0x648D, 0x3C, 0x01,
	0x648E, 0x00, 0x01,
	0x648F, 0x38, 0x01,
	0x6490, 0x01, 0x01,
	0x6491, 0x38, 0x01,
	0x6492, 0x00, 0x01,
	0x6493, 0x2F, 0x01,
	0x6494, 0x00, 0x01,
	0x6495, 0x2E, 0x01,
	0x6496, 0x00, 0x01,
	0x6497, 0x2D, 0x01,
	0x6498, 0x00, 0x01,
	0x6499, 0x2D, 0x01,
	0x64A4, 0x06, 0x01,
	0x64A5, 0x04, 0x01,
	0x64A6, 0x00, 0x01,
	0x64A7, 0x04, 0x01,
	0x64A8, 0x00, 0x01,
	0x64A9, 0x03, 0x01,
	0x64AA, 0x00, 0x01,
	0x64B0, 0x06, 0x01,
	0x64B1, 0x04, 0x01,
	0x64B2, 0x04, 0x01,
	0x64B3, 0x04, 0x01,
	0x64B4, 0x05, 0x01,
	0x64B5, 0x04, 0x01,
	0x64B6, 0x03, 0x01,
	0x64BC, 0x04, 0x01,
	0x64BD, 0x05, 0x01,
	0x64BE, 0x02, 0x01,
	0x64C2, 0x04, 0x01,
	0x64C3, 0x04, 0x01,
	0x64C4, 0x02, 0x01,
	0x64C5, 0x0A, 0x01,
	0x64C6, 0x08, 0x01,
	0x64C7, 0x07, 0x01,
	0x64C8, 0x07, 0x01,
	0x64C9, 0x07, 0x01,
	0x64CA, 0x05, 0x01,
	0x64CB, 0x05, 0x01,
	0x6558, 0x01, 0x01,
	0x6559, 0x01, 0x01,
	0x655A, 0x01, 0x01,
	0x655B, 0x01, 0x01,
	0x655C, 0x01, 0x01,
	0x655D, 0x01, 0x01,
	0x655E, 0x01, 0x01,
	0x655F, 0x01, 0x01,
	0x6560, 0x01, 0x01,
	0x6561, 0x01, 0x01,
	0x6562, 0x01, 0x01,
	0x6563, 0x01, 0x01,
	0x6564, 0x01, 0x01,
	0x6565, 0x01, 0x01,
	0x6566, 0x01, 0x01,
	0x6567, 0x01, 0x01,
	0x6568, 0x01, 0x01,
	0x6569, 0x01, 0x01,
	0x656A, 0x01, 0x01,
	0x656B, 0x01, 0x01,
	0x656C, 0x01, 0x01,
	0x656D, 0x01, 0x01,
	0x656E, 0x01, 0x01,
	0x656F, 0x01, 0x01,
	0x6570, 0x01, 0x01,
	0x6571, 0x01, 0x01,
	0x6572, 0x01, 0x01,
	0x6573, 0x01, 0x01,
	0x6574, 0x01, 0x01,
	0x6575, 0x01, 0x01,
	0x6576, 0x01, 0x01,
	0x6577, 0x01, 0x01,
	0x6578, 0x01, 0x01,
	0x6579, 0x01, 0x01,
	0x657A, 0x01, 0x01,
	0x657B, 0x01, 0x01,
	0x657C, 0x01, 0x01,
	0x657D, 0x01, 0x01,
	0x657E, 0x01, 0x01,
	0x657F, 0x01, 0x01,
	0x658F, 0x07, 0x01,
	0x6590, 0x05, 0x01,
	0x6591, 0x07, 0x01,
	0x6592, 0x05, 0x01,
	0x6593, 0x07, 0x01,
	0x6594, 0x05, 0x01,
	0x6595, 0x07, 0x01,
	0x6596, 0x05, 0x01,
	0x6597, 0x05, 0x01,
	0x6598, 0x05, 0x01,
	0x6599, 0x05, 0x01,
	0x659A, 0x05, 0x01,
	0x659B, 0x05, 0x01,
	0x659C, 0x05, 0x01,
	0x659D, 0x05, 0x01,
	0x659E, 0x07, 0x01,
	0x659F, 0x05, 0x01,
	0x65A0, 0x07, 0x01,
	0x65A1, 0x05, 0x01,
	0x65A2, 0x07, 0x01,
	0x65A3, 0x05, 0x01,
	0x65A4, 0x07, 0x01,
	0x65A5, 0x05, 0x01,
	0x65A6, 0x05, 0x01,
	0x65A7, 0x05, 0x01,
	0x65A8, 0x05, 0x01,
	0x65A9, 0x05, 0x01,
	0x65AA, 0x05, 0x01,
	0x65AB, 0x05, 0x01,
	0x65AC, 0x05, 0x01,
	0x65AD, 0x07, 0x01,
	0x65AE, 0x07, 0x01,
	0x65AF, 0x07, 0x01,
	0x65B0, 0x05, 0x01,
	0x65B1, 0x05, 0x01,
	0x65B2, 0x05, 0x01,
	0x65B3, 0x05, 0x01,
	0x65B4, 0x07, 0x01,
	0x65B5, 0x07, 0x01,
	0x65B6, 0x07, 0x01,
	0x65B7, 0x07, 0x01,
	0x65B8, 0x05, 0x01,
	0x65B9, 0x05, 0x01,
	0x65BA, 0x05, 0x01,
	0x65BB, 0x05, 0x01,
	0x65BC, 0x05, 0x01,
	0x65BD, 0x05, 0x01,
	0x65BE, 0x05, 0x01,
	0x65BF, 0x05, 0x01,
	0x65C0, 0x05, 0x01,
	0x65C1, 0x05, 0x01,
	0x65C2, 0x05, 0x01,
	0x65C3, 0x05, 0x01,
	0x65C4, 0x05, 0x01,
	0x65C5, 0x05, 0x01,
	0x65C6, 0x00, 0x01,
	0x65C7, 0x34, 0x01,
	0x65C8, 0x1E, 0x01,
	0x65C9, 0x28, 0x01,
	0x65CA, 0x14, 0x01,
	0x65CB, 0x18, 0x01,
	0x65CC, 0x0F, 0x01,
	0x65CE, 0x2C, 0x01,
	0x65D0, 0x1A, 0x01,
	0x65D2, 0x30, 0x01,
	0x65D4, 0x34, 0x01,
	0x65D5, 0x00, 0x01,
	0x65D6, 0x46, 0x01,
	0x65D7, 0x37, 0x01,
	0x65D8, 0x3C, 0x01,
	0x65D9, 0x28, 0x01,
	0x65DA, 0x28, 0x01,
	0x65DB, 0x23, 0x01,
	0x65DD, 0x41, 0x01,
	0x65DF, 0x2D, 0x01,
	0x65E1, 0x46, 0x01,
	0x65E3, 0x4B, 0x01,
	0x65E4, 0x00, 0x01,
	0x65E5, 0x4B, 0x01,
	0x65E6, 0x4B, 0x01,
	0x65E7, 0x41, 0x01,
	0x65E8, 0x41, 0x01,
	0x65E9, 0x2D, 0x01,
	0x65EA, 0x2D, 0x01,
	0x65EC, 0x3C, 0x01,
	0x65EE, 0x28, 0x01,
	0x65F0, 0x41, 0x01,
	0x65F2, 0x46, 0x01,
	0x65F3, 0x00, 0x01,
	0x65F4, 0x00, 0x01,
	0x65F5, 0x00, 0x01,
	0x65F6, 0x00, 0x01,
	0x65F7, 0x00, 0x01,
	0x65F8, 0x00, 0x01,
	0x65F9, 0x00, 0x01,
	0x65FB, 0x00, 0x01,
	0x65FD, 0x00, 0x01,
	0x65FF, 0x00, 0x01,
	0x6601, 0x00, 0x01,
	0x6E1C, 0x00, 0x01,
	0x6E1D, 0x00, 0x01,
	0x6E25, 0x00, 0x01,
	0x6E38, 0x03, 0x01,
	0x7529, 0x07, 0x01,
	0x752A, 0x08, 0x01,
	0x895C, 0x01, 0x01,
	0x895D, 0x00, 0x01,
	0x8966, 0x00, 0x01,
	0x8967, 0x4E, 0x01,
	0x896A, 0x00, 0x01,
	0x896B, 0x24, 0x01,
	0x896F, 0x34, 0x01,
	0x8976, 0x00, 0x01,
	0x8977, 0x00, 0x01,
	0x9004, 0x15, 0x01,
	0x9200, 0xB7, 0x01,
	0x9201, 0x34, 0x01,
	0x9202, 0xB7, 0x01,
	0x9203, 0x36, 0x01,
	0x9204, 0xB7, 0x01,
	0x9205, 0x37, 0x01,
	0x9206, 0xB7, 0x01,
	0x9207, 0x38, 0x01,
	0x9208, 0xB7, 0x01,
	0x9209, 0x39, 0x01,
	0x920A, 0xB7, 0x01,
	0x920B, 0x3A, 0x01,
	0x920C, 0xB7, 0x01,
	0x920D, 0x3C, 0x01,
	0x920E, 0xB7, 0x01,
	0x920F, 0x3D, 0x01,
	0x9210, 0xB7, 0x01,
	0x9211, 0x3E, 0x01,
	0x9212, 0xB7, 0x01,
	0x9213, 0x3F, 0x01,
	0x9214, 0xF6, 0x01,
	0x9215, 0x13, 0x01,
	0x9216, 0xF6, 0x01,
	0x9217, 0x34, 0x01,
	0x9218, 0xF4, 0x01,
	0x9219, 0xA7, 0x01,
	0x921A, 0xF4, 0x01,
	0x921B, 0xAA, 0x01,
	0x921C, 0xF4, 0x01,
	0x921D, 0xAD, 0x01,
	0x921E, 0xF4, 0x01,
	0x921F, 0xB0, 0x01,
	0x9220, 0xF4, 0x01,
	0x9221, 0xB3, 0x01,
	0x9222, 0x85, 0x01,
	0x9223, 0x77, 0x01,
	0x9224, 0xC4, 0x01,
	0x9225, 0x4B, 0x01,
	0x9226, 0xC4, 0x01,
	0x9227, 0x4C, 0x01,
	0x9228, 0xC4, 0x01,
	0x9229, 0x4D, 0x01,
	0x922A, 0xF5, 0x01,
	0x922B, 0x5E, 0x01,
	0x922C, 0xF5, 0x01,
	0x922D, 0x5F, 0x01,
	0x922E, 0xF5, 0x01,
	0x922F, 0x64, 0x01,
	0x9230, 0xF5, 0x01,
	0x9231, 0x65, 0x01,
	0x9232, 0xF5, 0x01,
	0x9233, 0x6A, 0x01,
	0x9234, 0xF5, 0x01,
	0x9235, 0x6B, 0x01,
	0x9236, 0xF5, 0x01,
	0x9237, 0x70, 0x01,
	0x9238, 0xF5, 0x01,
	0x9239, 0x71, 0x01,
	0x923A, 0xF5, 0x01,
	0x923B, 0x76, 0x01,
	0x923C, 0xF5, 0x01,
	0x923D, 0x77, 0x01,
	0x9360, 0x00, 0x01,
	0x9361, 0x00, 0x01,
	0x9362, 0xD8, 0x01,
	0x9363, 0x00, 0x01,
	0x9810, 0x14, 0x01,
	0x9814, 0x14, 0x01,
	0xB074, 0xF0, 0x01,
	0xBC7C, 0x11, 0x01,
	0xBC7D, 0x04, 0x01,
	0xBC7E, 0x07, 0x01,
	0xBC7F, 0xB8, 0x01,
	0xC020, 0x00, 0x01,
	0xC026, 0x00, 0x01,
	0xC027, 0x00, 0x01,
	0xC448, 0x01, 0x01,
	0xC44F, 0x01, 0x01,
	0xC450, 0x00, 0x01,
	0xC451, 0x00, 0x01,
	0xC452, 0x01, 0x01,
	0xC455, 0x00, 0x01,
	0xE206, 0x35, 0x01,
	0xE226, 0x33, 0x01,
	0xE266, 0x34, 0x01,
	0xE2A6, 0x31, 0x01,
	0xE2C6, 0x37, 0x01,
	0xE2E6, 0x32, 0x01,
	0xEC00, 0x01, 0x01,
};

const u32 sensor_imx616_setfile_A_2X2BIN_3264x2448_30FPS[] = {
	//MIPI output setting
	0x0112, 0x0A, 0x01,
	0x0113, 0x0A, 0x01,
	0x0114, 0x03, 0x01,
	//Line Length PCK Setting
	0x0342, 0x1A, 0x01,
	0x0343, 0xD4, 0x01,
	//Frame Length Lines Setting
	0x0340, 0x09, 0x01,
	0x0341, 0xBE, 0x01,
	//ROI Setting
	0x0344, 0x00, 0x01,
	0x0345, 0x00, 0x01,
	0x0346, 0x00, 0x01,
	0x0347, 0x10, 0x01,
	0x0348, 0x19, 0x01,
	0x0349, 0x9F, 0x01,
	0x034A, 0x13, 0x01,
	0x034B, 0x2F, 0x01,
	//Mode Setting
	0x0220, 0x62, 0x01,
	0x0222, 0x01, 0x01,
	0x0900, 0x01, 0x01,
	0x0901, 0x22, 0x01,
	0x0902, 0x08, 0x01,
	0x3140, 0x00, 0x01,
	0x3246, 0x81, 0x01,
	0x3247, 0x81, 0x01,
	//Digital Crop & Scaling
	0x0401, 0x00, 0x01,
	0x0404, 0x00, 0x01,
	0x0405, 0x10, 0x01,
	0x0408, 0x00, 0x01,
	0x0409, 0x08, 0x01,
	0x040A, 0x00, 0x01,
	0x040B, 0x00, 0x01,
	0x040C, 0x0C, 0x01,
	0x040D, 0xC0, 0x01,
	0x040E, 0x09, 0x01,
	0x040F, 0x90, 0x01,
	//Output Size Setting
	0x034C, 0x0C, 0x01,
	0x034D, 0xC0, 0x01,
	0x034E, 0x09, 0x01,
	0x034F, 0x90, 0x01,
	//Clock Setting
	0x0301, 0x05, 0x01,
	0x0303, 0x02, 0x01,
	0x0305, 0x04, 0x01,
	0x0306, 0x00, 0x01,
	0x0307, 0xCE, 0x01,
	0x030B, 0x02, 0x01,
	0x030D, 0x04, 0x01,
	0x030E, 0x00, 0x01,
	0x030F, 0xF6, 0x01,
	0x0310, 0x01, 0x01,
	//Other Setting
	0x3620, 0x00, 0x01,
	0x3621, 0x00, 0x01,
	0x3C12, 0x14, 0x01,
	0x3C13, 0x5A, 0x01,
	0x3C14, 0x34, 0x01,
	0x3F0C, 0x01, 0x01,
	0x3F14, 0x00, 0x01,
	0x3F80, 0x00, 0x01,
	0x3F81, 0x32, 0x01,
	0x3F8C, 0x00, 0x01,
	0x3F8D, 0x00, 0x01,
	0x3FFC, 0x01, 0x01,
	0x3FFD, 0xA4, 0x01,
	0x3FFE, 0x00, 0x01,
	0x3FFF, 0x03, 0x01,
	0xBCF1, 0x00, 0x01,
	//Integration Setting
	0x0202, 0x09, 0x01,
	0x0203, 0x8E, 0x01,
	0x0224, 0x01, 0x01,
	0x0225, 0xF4, 0x01,
	0x3FE0, 0x01, 0x01,
	0x3FE1, 0xF4, 0x01,
	//Gain Setting
	0x0204, 0x00, 0x01,
	0x0205, 0x70, 0x01,
	0x0216, 0x00, 0x01,
	0x0217, 0x70, 0x01,
	0x0218, 0x01, 0x01,
	0x0219, 0x00, 0x01,
	0x020E, 0x01, 0x01,
	0x020F, 0x00, 0x01,
	0x0210, 0x01, 0x01,
	0x0211, 0x00, 0x01,
	0x0212, 0x01, 0x01,
	0x0213, 0x00, 0x01,
	0x0214, 0x01, 0x01,
	0x0215, 0x00, 0x01,
	0x3FE2, 0x00, 0x01,
	0x3FE3, 0x70, 0x01,
	0x3FE4, 0x01, 0x01,
	0x3FE5, 0x00, 0x01,
	//LSC Setting
	0x0B00, 0x00, 0x01,
	//AE-Hist Setting
	0x323B, 0x00, 0x01,
	//AE-Hist Ave Setting
	0x323D, 0x00, 0x01,
	//Flicker Setting
	0x323C, 0x00, 0x01,
	//FACE AE-Hist Setting
	0x323E, 0x00, 0x01,
	//FACE AE-Hist Ave Setting
	0x323F, 0x00, 0x01,
	//DPC output ctrl Setting
	0x0B06, 0x00, 0x01,
	//PDAF TYPE2 Setting : Disable
	0x3E20, 0x01, 0x01,
	0x3E3B, 0x00, 0x01,
	0x4034, 0x00, 0x01,
	0x4035, 0xCC, 0x01,
};

const u32 sensor_imx616_setfile_A_REMOSAIC_6528x4896[] = {
	//MIPI output setting
	0x0112, 0x0A, 0x01,
	0x0113, 0x0A, 0x01,
	0x0114, 0x03, 0x01,
	//Line Length PCK Setting
	0x0342, 0x1C, 0x01,
	0x0343, 0x18, 0x01,
	//Frame Length Lines Setting
	0x0340, 0x13, 0x01,
	0x0341, 0x5d, 0x01,
	//ROI Setting
	0x0344, 0x00, 0x01,
	0x0345, 0x00, 0x01,
	0x0346, 0x00, 0x01,
	0x0347, 0x10, 0x01,
	0x0348, 0x19, 0x01,
	0x0349, 0x9F, 0x01,
	0x034A, 0x13, 0x01,
	0x034B, 0x2F, 0x01,
	//Mode Setting
	0x0220, 0x62, 0x01,
	0x0222, 0x01, 0x01,
	0x0900, 0x00, 0x01,
	0x0901, 0x11, 0x01,
	0x0902, 0x0A, 0x01,
	0x3140, 0x00, 0x01,
	0x3246, 0x01, 0x01,
	0x3247, 0x01, 0x01,
	//Digital Crop & Scaling
	0x0401, 0x00, 0x01,
	0x0404, 0x00, 0x01,
	0x0405, 0x10, 0x01,
	0x0408, 0x00, 0x01,
	0x0409, 0x10, 0x01,
	0x040A, 0x00, 0x01,
	0x040B, 0x00, 0x01,
	0x040C, 0x19, 0x01,
	0x040D, 0x80, 0x01,
	0x040E, 0x13, 0x01,
	0x040F, 0x20, 0x01,
	//Output Size Setting
	0x034C, 0x19, 0x01,
	0x034D, 0x80, 0x01,
	0x034E, 0x13, 0x01,
	0x034F, 0x20, 0x01,
	//Clock Setting
	0x0301, 0x05, 0x01,
	0x0303, 0x04, 0x01,
	0x0305, 0x04, 0x01,
	0x0306, 0x00, 0x01,
	0x0307, 0xFA, 0x01,
	0x030B, 0x02, 0x01,
	0x030D, 0x04, 0x01,
	0x030E, 0x00, 0x01,
	0x030F, 0xF6, 0x01,
	0x0310, 0x01, 0x01,
	//Other Setting
	0x3620, 0x01, 0x01,
	0x3621, 0x01, 0x01,
	0x3C12, 0x62, 0x01,
	0x3C13, 0x32, 0x01,
	0x3C14, 0x20, 0x01,
	0x3F0C, 0x00, 0x01,
	0x3F14, 0x01, 0x01,
	0x3F80, 0x04, 0x01,
	0x3F81, 0x58, 0x01,
	0x3F8C, 0x00, 0x01,
	0x3F8D, 0x00, 0x01,
	0x3FFC, 0x00, 0x01,
	0x3FFD, 0x1C, 0x01,
	0x3FFE, 0x00, 0x01,
	0x3FFF, 0x0A, 0x01,
	0xBCF1, 0x00, 0x01,
	//Integration Setting
	0x0202, 0x13, 0x01,
	0x0203, 0x2D, 0x01,
	0x0224, 0x01, 0x01,
	0x0225, 0xF4, 0x01,
	0x3FE0, 0x01, 0x01,
	0x3FE1, 0xF4, 0x01,
	//Gain Setting
	0x0204, 0x00, 0x01,
	0x0205, 0x70, 0x01,
	0x0216, 0x00, 0x01,
	0x0217, 0x70, 0x01,
	0x0218, 0x01, 0x01,
	0x0219, 0x00, 0x01,
	0x020E, 0x01, 0x01,
	0x020F, 0x00, 0x01,
	0x0210, 0x01, 0x01,
	0x0211, 0x00, 0x01,
	0x0212, 0x01, 0x01,
	0x0213, 0x00, 0x01,
	0x0214, 0x01, 0x01,
	0x0215, 0x00, 0x01,
	0x3FE2, 0x00, 0x01,
	0x3FE3, 0x70, 0x01,
	0x3FE4, 0x01, 0x01,
	0x3FE5, 0x00, 0x01,
	//LSC Setting
	0x0B00, 0x00, 0x01,
	//AE-Hist Setting
	0x323B, 0x00, 0x01,
	//AE-Hist Ave Setting
	0x323D, 0x00, 0x01,
	//Flicker Setting
	0x323C, 0x00, 0x01,
	//FACE AE-Hist Setting
	0x323E, 0x00, 0x01,
	//FACE AE-Hist Ave Setting
	0x323F, 0x00, 0x01,
	//DPC output ctrl Setting
	0x0B06, 0x01, 0x01,
	//PDAF TYPE2 Setting : Disable
	0x3E20, 0x01, 0x01,
	0x3E3B, 0x00, 0x01,
	0x4034, 0x00, 0x01,
	0x4035, 0xCC, 0x01,
};

const struct sensor_pll_info_compact sensor_imx616_pllinfo_A_2X2BIN_3264x2448_30FPS = {
	EXT_CLK_Mhz * 1000 * 1000,   /* ext_clk */
	1599000000ULL,               /* mipi_datarate = OPSYCK */
	81250000ULL,                 /* pclk = VTPXCK of Clock Information */
	2494,                        /* frame_length_lines */
	6868,                        /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_imx616_pllinfo_A_REMOSAIC_6528x4896 = {
	EXT_CLK_Mhz * 1000 * 1000,   /* ext_clk */
	1599000000ULL,               /* mipi_datarate = OPSYCK */
	133900000ULL,                /* pclk = VTPXCK of Clock Information */
	4957,                        /* frame_length_lines */
	7192,                        /* line_length_pck */
};


static const u32 *sensor_imx616_setfiles_A[] = {
	sensor_imx616_setfile_A_2X2BIN_3264x2448_30FPS,
	sensor_imx616_setfile_A_REMOSAIC_6528x4896,
};

static const u32 sensor_imx616_setfile_A_sizes[] = {
	ARRAY_SIZE(sensor_imx616_setfile_A_2X2BIN_3264x2448_30FPS),
	ARRAY_SIZE(sensor_imx616_setfile_A_REMOSAIC_6528x4896),
};

static const struct sensor_pll_info_compact *sensor_imx616_pllinfos_A[] = {
	&sensor_imx616_pllinfo_A_2X2BIN_3264x2448_30FPS,
	&sensor_imx616_pllinfo_A_REMOSAIC_6528x4896,
};

#endif
