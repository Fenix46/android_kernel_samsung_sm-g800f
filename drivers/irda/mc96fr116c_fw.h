/*
 * ir_remote_con_mc96_fw.h - ABOV IRDA control unit Firmware.
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
/* Total FRAME COUNT=69, Last FRAME is finishing info frame for full code
   checksum caculation */
#define FRAME_COUNT		69

/* ONE_PACKET_SIZE:(1B)+length(1B)+address(2B)+00h(1B)+code(64B)
			+checksum(1B) */
#define ONE_PACKET_SIZE		70

const u8 VALID_CODE_CHECKSUM[] = {
	0x6E, 0x93, 0x10, 0x00, 0x20, 0xFF, 0x02, 0x30,
};

const u8 INITIAL_USER_IR_MODE_DATA[8] = {
	0x00, 0x06, 0x01, 0x04, 0x01, 0x06, 0x00, 0x12,
};

const u8 IRDA_binary[] = {
	/* Module revision  : 0x0106 */
	/* Firmware version : 0x0104 */
	0x3A, 0x40, 0x10, 0x00, 0x00, 0x02, 0x1D, 0x1C, 0x02, 0x1F,
	0xB4, 0x75, 0xA8, 0x01, 0x22, 0x00, 0x02, 0x10, 0x0E, 0x00,
	0xD2, 0x19, 0x32, 0x00, 0x02, 0x10, 0x16, 0x00, 0xD2, 0x19,
	0x32, 0x00, 0x02, 0x10, 0x1E, 0x00, 0xD2, 0x19, 0x32, 0x00,
	0x02, 0x1F, 0x92, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x1F,
	0xA3, 0xE4, 0xF5, 0xAC, 0x75, 0x11, 0xFF, 0x75, 0x14, 0xFF,
	0x75, 0x17, 0xFF, 0xF5, 0x16, 0xC2, 0x18, 0xC2, 0x17, 0x3F,

	0x3A, 0x40, 0x10, 0x40, 0x00, 0x75, 0xB1, 0x01, 0x75, 0xAD,
	0xFF, 0x75, 0xAE, 0xFF, 0x75, 0xAF, 0xFF, 0xF5, 0xAC, 0x22,
	0x00, 0x00, 0x00, 0x00, 0x02, 0x17, 0x78, 0x75, 0x3D, 0x00,
	0x75, 0x3E, 0x04, 0xE4, 0xF5, 0x3F, 0xF5, 0x40, 0xF5, 0x41,
	0xF5, 0x42, 0xF5, 0x43, 0xF5, 0x44, 0xF5, 0x45, 0xF5, 0x46,
	0xF5, 0x47, 0xC2, 0x0C, 0xC2, 0x0D, 0xC2, 0x0E, 0xC2, 0x0F,
	0xC2, 0x10, 0xC2, 0x11, 0x53, 0x80, 0xDF, 0xAD, 0xE8, 0x20,

	0x3A, 0x40, 0x10, 0x80, 0x00, 0x90, 0x2F, 0x11, 0x74, 0x03,
	0xF0, 0x30, 0x00, 0x07, 0xED, 0x44, 0x0D, 0xF5, 0x40, 0x80,
	0x5C, 0x30, 0x01, 0x61, 0xED, 0x44, 0x0F, 0xF5, 0x40, 0x30,
	0x02, 0x50, 0x90, 0x00, 0x01, 0xE0, 0x54, 0xF0, 0x75, 0x3B,
	0x00, 0xF5, 0x3C, 0xE5, 0x3B, 0xC4, 0xF8, 0x54, 0xF0, 0xC8,
	0x68, 0xF5, 0x3B, 0xE5, 0x3C, 0xC4, 0x54, 0x0F, 0x48, 0xF5,
	0x3C, 0xD3, 0x94, 0x00, 0xE5, 0x3B, 0x94, 0x00, 0x40, 0xB8,

	0x3A, 0x40, 0x10, 0xC0, 0x00, 0x22, 0xE5, 0x3C, 0x24, 0x03,
	0xFF, 0xE4, 0x35, 0x3B, 0xFE, 0xD3, 0xE5, 0x1D, 0x9F, 0xE5,
	0x1C, 0x9E, 0x40, 0x10, 0xE5, 0x1D, 0x95, 0x3C, 0xF5, 0x3E,
	0xE5, 0x1C, 0x95, 0x3B, 0xF5, 0x3D, 0xD2, 0x0E, 0x80, 0x08,
	0x75, 0x3D, 0x00, 0x75, 0x3E, 0x04, 0xC2, 0x0E, 0x00, 0x75,
	0x37, 0x00, 0x75, 0x38, 0x04, 0x80, 0x0B, 0xED, 0x44, 0x0F,
	0xF5, 0x40, 0x75, 0x37, 0x00, 0x75, 0x38, 0x03, 0xE4, 0x8B,

	0x3A, 0x40, 0x11, 0x00, 0x00, 0xF5, 0xAA, 0xF5, 0xCA, 0x53,
	0xC9, 0x7F, 0x30, 0x02, 0x0C, 0x75, 0xC7, 0xB7, 0x75, 0xCF,
	0x1B, 0x75, 0xC6, 0x1B, 0x53, 0xC9, 0xBF, 0xC2, 0x0D, 0xC2,
	0x06, 0xD2, 0x07, 0xE4, 0xF5, 0x46, 0xF5, 0x47, 0xF5, 0xBE,
	0xF5, 0xE8, 0x75, 0x41, 0x01, 0x75, 0x42, 0x90, 0x85, 0x41,
	0xC2, 0x85, 0x42, 0xC3, 0x85, 0x41, 0xC4, 0x85, 0x42, 0xC5,
	0xF5, 0x44, 0xF5, 0x45, 0xF5, 0x46, 0xF5, 0x47, 0xF5, 0x95,

	0x3A, 0x40, 0x11, 0x40, 0x00, 0xBF, 0xED, 0x44, 0x0D, 0xF5,
	0xE8, 0x43, 0x80, 0x20, 0x75, 0x8D, 0xE0, 0x30, 0x0C, 0x02,
	0xD2, 0x0D, 0x30, 0x00, 0x29, 0x74, 0x00, 0x25, 0x38, 0xF5,
	0x82, 0x74, 0x00, 0x35, 0x37, 0xF5, 0x83, 0xE0, 0xFF, 0x30,
	0xE7, 0x10, 0x54, 0x7F, 0x60, 0x04, 0xD2, 0x06, 0x80, 0x1D,
	0xD2, 0x0F, 0xE5, 0x38, 0x24, 0x03, 0x80, 0x0E, 0xC2, 0x0F,
	0xE5, 0x38, 0x24, 0x01, 0x80, 0x06, 0xC2, 0x0F, 0xE5, 0x06,

	0x3A, 0x40, 0x11, 0x80, 0x00, 0x38, 0x24, 0x01, 0xF5, 0x3A,
	0xE4, 0x35, 0x37, 0xF5, 0x39, 0xC3, 0xE5, 0x3A, 0x95, 0x1D,
	0xE5, 0x39, 0x95, 0x1C, 0x40, 0x2D, 0x30, 0x02, 0x26, 0xD2,
	0x0C, 0xE5, 0xC9, 0x30, 0xE6, 0x05, 0x53, 0xC9, 0xBF, 0xD2,
	0x08, 0x30, 0x08, 0x0D, 0xC2, 0x08, 0x05, 0x3F, 0xE5, 0x3F,
	0xC3, 0x94, 0x0A, 0x40, 0x02, 0xD2, 0x06, 0x85, 0x3D, 0x37,
	0x85, 0x3E, 0x38, 0xD2, 0x07, 0x80, 0x16, 0xD2, 0x06, 0x74,

	0x3A, 0x40, 0x11, 0xC0, 0x00, 0x80, 0x12, 0x30, 0x02, 0x0F,
	0x30, 0x0E, 0x0C, 0xE5, 0x38, 0xB5, 0x3E, 0x07, 0xE5, 0x37,
	0xB5, 0x3D, 0x02, 0xD2, 0x0C, 0x30, 0x06, 0x03, 0x02, 0x13,
	0x4E, 0x20, 0x00, 0x03, 0x02, 0x13, 0x11, 0x20, 0x0F, 0x03,
	0x02, 0x12, 0xC2, 0x74, 0x01, 0x25, 0x38, 0xF5, 0x82, 0x74,
	0x00, 0x35, 0x37, 0xF5, 0x83, 0xE0, 0x60, 0x6E, 0x05, 0x38,
	0xE5, 0x38, 0x70, 0x02, 0x05, 0x37, 0x24, 0x00, 0xF5, 0x70,

	0x3A, 0x40, 0x12, 0x00, 0x00, 0x82, 0x74, 0x00, 0x35, 0x37,
	0xF5, 0x83, 0xE0, 0x78, 0x70, 0xF6, 0x05, 0x38, 0xE5, 0x38,
	0x70, 0x02, 0x05, 0x37, 0x24, 0x00, 0xF5, 0x82, 0x74, 0x00,
	0x35, 0x37, 0xF5, 0x83, 0xE0, 0x08, 0xF6, 0x05, 0x38, 0xE5,
	0x38, 0x70, 0x02, 0x05, 0x37, 0x05, 0x38, 0xE5, 0x38, 0x70,
	0x02, 0x05, 0x37, 0xD3, 0xE6, 0x94, 0x09, 0x18, 0xE6, 0x94,
	0x3D, 0x40, 0x05, 0x76, 0x3D, 0x08, 0x76, 0x09, 0x75, 0x14,

	0x3A, 0x40, 0x12, 0x40, 0x00, 0x3B, 0x01, 0x75, 0x3C, 0x00,
	0x78, 0x70, 0xE6, 0xFE, 0x08, 0xE6, 0x78, 0x02, 0xCE, 0xC3,
	0x13, 0xCE, 0x13, 0xD8, 0xF9, 0xFF, 0xC3, 0x78, 0x71, 0xE6,
	0x9F, 0xF5, 0x47, 0x18, 0xE6, 0x9E, 0xF5, 0x46, 0x80, 0x5B,
	0x05, 0x38, 0xE5, 0x38, 0x70, 0x02, 0x05, 0x37, 0x05, 0x38,
	0xE5, 0x38, 0x70, 0x02, 0x05, 0x37, 0x24, 0x00, 0xF5, 0x82,
	0x74, 0x00, 0x35, 0x37, 0xF5, 0x83, 0xE0, 0x78, 0x70, 0x0E,

	0x3A, 0x40, 0x12, 0x80, 0x00, 0xF6, 0x05, 0x38, 0xE5, 0x38,
	0x70, 0x02, 0x05, 0x37, 0x24, 0x00, 0xF5, 0x82, 0x74, 0x00,
	0x35, 0x37, 0xF5, 0x83, 0xE0, 0x08, 0xF6, 0x05, 0x38, 0xE5,
	0x38, 0x70, 0x02, 0x05, 0x37, 0x18, 0xE6, 0xFE, 0x08, 0xE6,
	0x78, 0x02, 0xCE, 0xC3, 0x13, 0xCE, 0x13, 0xD8, 0xF9, 0xFF,
	0xC3, 0x78, 0x71, 0xE6, 0x9F, 0xF5, 0x3C, 0x18, 0xE6, 0x9E,
	0xF5, 0x3B, 0xE4, 0xF5, 0x46, 0xF5, 0x47, 0x00, 0x02, 0x13,

	0x3A, 0x40, 0x12, 0xC0, 0x00, 0x13, 0x46, 0x74, 0x00, 0x25,
	0x38, 0xF5, 0x82, 0x74, 0x00, 0x35, 0x37, 0xF5, 0x83, 0xE0,
	0x78, 0x70, 0xF6, 0x05, 0x38, 0xE5, 0x38, 0x70, 0x02, 0x05,
	0x37, 0x24, 0x00, 0xF5, 0x82, 0x74, 0x00, 0x35, 0x37, 0xF5,
	0x83, 0xE0, 0x08, 0xF6, 0x05, 0x38, 0xE5, 0x38, 0x70, 0x02,
	0x05, 0x37, 0x18, 0xE6, 0xFE, 0x08, 0xE6, 0x78, 0x02, 0xCE,
	0xC3, 0x13, 0xCE, 0x13, 0xD8, 0xF9, 0xFF, 0xC3, 0x78, 0x62,

	0x3A, 0x40, 0x13, 0x00, 0x00, 0x71, 0xE6, 0x9F, 0xF5, 0x3C,
	0x18, 0xE6, 0x9E, 0xF5, 0x3B, 0xE4, 0xF5, 0x46, 0xF5, 0x47,
	0x80, 0x35, 0x74, 0x00, 0x25, 0x38, 0xF5, 0x82, 0x74, 0x00,
	0x35, 0x37, 0xF5, 0x83, 0xE0, 0x75, 0x3B, 0x00, 0xF5, 0x3C,
	0x75, 0x3C, 0x00, 0xF5, 0x3B, 0x05, 0x38, 0xE5, 0x38, 0x70,
	0x02, 0x05, 0x37, 0x24, 0x00, 0xF5, 0x82, 0x74, 0x00, 0x35,
	0x37, 0xF5, 0x83, 0xE0, 0x42, 0x3C, 0x05, 0x38, 0xE5, 0xED,

	0x3A, 0x40, 0x13, 0x40, 0x00, 0x38, 0x70, 0x02, 0x05, 0x37,
	0x00, 0xE5, 0x3C, 0x45, 0x3B, 0x70, 0x02, 0xD2, 0x06, 0x30,
	0x06, 0x09, 0x74, 0xFF, 0xF5, 0x3B, 0xF5, 0x3C, 0xC2, 0x07,
	0x00, 0xE5, 0x3C, 0x64, 0x01, 0x45, 0x3B, 0x70, 0x17, 0x30,
	0x00, 0x09, 0xF5, 0x41, 0x75, 0x42, 0x0A, 0xF5, 0x1B, 0x80,
	0x15, 0x75, 0x41, 0xFF, 0x75, 0x42, 0xFF, 0x85, 0x1A, 0x1B,
	0x80, 0x0A, 0xE5, 0x3B, 0xF5, 0x41, 0x85, 0x3C, 0x42, 0x56,

	0x3A, 0x40, 0x13, 0x80, 0x00, 0xE4, 0xF5, 0x1B, 0xE5, 0xCA,
	0x60, 0x7C, 0x53, 0x80, 0xDF, 0xE5, 0xC9, 0x30, 0xE7, 0xFB,
	0x43, 0x80, 0x20, 0xE4, 0xF5, 0xBE, 0x53, 0xC9, 0x7F, 0x53,
	0x80, 0xDF, 0xE5, 0xC9, 0x30, 0xE7, 0xFB, 0xE4, 0xF5, 0xCA,
 	0x43, 0x80, 0x20, 0xF5, 0xBE, 0x53, 0xC9, 0x7F, 0xE5, 0x1B,
 	0x70, 0x46, 0xF5, 0xE8, 0x78, 0x70, 0xA6, 0x41, 0x08, 0xA6,
 	0x42, 0x18, 0xE6, 0xFE, 0x08, 0xE6, 0xFF, 0xE4, 0xFC, 0xC6,
 
 	0x3A, 0x40, 0x13, 0xC0, 0x00, 0xFD, 0x7B, 0xFF, 0x7A, 0xFF,
 	0xF9, 0xF8, 0xD3, 0x12, 0x1A, 0xE5, 0x40, 0x08, 0x78, 0x71,
 	0x06, 0xE6, 0x18, 0x70, 0x01, 0x06, 0x78, 0x71, 0xE6, 0xF5,
 	0xC3, 0xE6, 0xF5, 0xC5, 0x18, 0xE6, 0xF5, 0xC2, 0xE6, 0xF5,
 	0xC4, 0xA2, 0x07, 0xE4, 0x33, 0xF5, 0xBF, 0x85, 0x46, 0x44,
 	0x85, 0x47, 0x45, 0x85, 0x40, 0xE8, 0xF5, 0xBE, 0x30, 0x05,
 	0x08, 0x20, 0x0C, 0x03, 0x30, 0x0D, 0x02, 0xD2, 0x06, 0x8A,
 
 	0x3A, 0x40, 0x14, 0x00, 0x00, 0x00, 0x80, 0x6B, 0xC3, 0xE5,
 	0x45, 0x94, 0x01, 0xE5, 0x44, 0x94, 0x00, 0x40, 0x0C, 0xE5,
 	0x45, 0x15, 0x45, 0x70, 0x02, 0x15, 0x44, 0xD2, 0x10, 0x80,
 	0x2A, 0xC2, 0x10, 0x85, 0x41, 0xC2, 0x85, 0x42, 0xC3, 0xA2,
 	0x07, 0xE4, 0x33, 0xF5, 0xBF, 0x85, 0x46, 0x44, 0x85, 0x47,
 	0x45, 0x80, 0x14, 0xE5, 0xE8, 0x20, 0xE7, 0x14, 0xD2, 0x11,
 	0x30, 0x05, 0xF6, 0x20, 0x0C, 0x03, 0x30, 0x0D, 0xF0, 0xFD,
 
 	0x3A, 0x40, 0x14, 0x40, 0x00, 0xD2, 0x06, 0xC2, 0x10, 0x53,
 	0x80, 0xDF, 0x80, 0xE7, 0x30, 0x11, 0x07, 0xC2, 0x11, 0x85,
 	0x40, 0xE8, 0x80, 0x13, 0xE4, 0xF5, 0xE8, 0xF5, 0xBE, 0x85,
 	0x41, 0xC4, 0x85, 0x42, 0xC5, 0x85, 0x40, 0xE8, 0xA2, 0x07,
 	0x33, 0xF5, 0xBE, 0xC2, 0x0B, 0x43, 0x80, 0x20, 0x20, 0x10,
 	0x95, 0x30, 0x06, 0x03, 0x00, 0x80, 0x19, 0xE5, 0x1B, 0x60,
 	0x0D, 0xE4, 0xF5, 0xE8, 0x85, 0x1B, 0xCA, 0xA2, 0x07, 0x00,
 
 	0x3A, 0x40, 0x14, 0x80, 0x00, 0x33, 0xF5, 0xBE, 0x80, 0x03,
 	0xE4, 0xF5, 0xCA, 0xB2, 0x07, 0x02, 0x11, 0x49, 0x53, 0x80,
 	0xDF, 0xE4, 0xF5, 0xBE, 0xF5, 0xBF, 0xF5, 0xE8, 0xF5, 0xCA,
 	0xF5, 0xC6, 0x22, 0xE4, 0xF5, 0xBE, 0xF5, 0xE8, 0xF5, 0x39,
 	0xF5, 0x3A, 0x75, 0x3B, 0xFF, 0x74, 0xFF, 0xF5, 0x37, 0xF5,
 	0x38, 0xC2, 0x00, 0xC2, 0x01, 0x90, 0x00, 0x00, 0xE0, 0xFF,
 	0x30, 0xE6, 0x04, 0xD2, 0x00, 0x80, 0x06, 0xEF, 0x30, 0xC4,
 
 	0x3A, 0x40, 0x14, 0xC0, 0x00, 0xE7, 0x02, 0xD2, 0x01, 0x20,
 	0x01, 0x03, 0x30, 0x00, 0x5F, 0x30, 0x00, 0x32, 0x90, 0x00,
 	0x01, 0xE0, 0xFF, 0xE4, 0xFC, 0xFD, 0xFE, 0x78, 0x64, 0x12,
 	0x1B, 0x38, 0x78, 0x64, 0x12, 0x1B, 0x1F, 0x78, 0x08, 0x12,
 	0x1B, 0x0C, 0x78, 0x64, 0x12, 0x1B, 0x38, 0x78, 0x64, 0x12,
 	0x1B, 0x2B, 0x90, 0x00, 0x02, 0xE0, 0xFF, 0xEB, 0x4F, 0xFF,
 	0xEA, 0xFE, 0xE9, 0xFD, 0xE8, 0xFC, 0x80, 0x0C, 0x30, 0x21,
 
 	0x3A, 0x40, 0x15, 0x00, 0x00, 0x01, 0x0E, 0x90, 0x00, 0x02,
 	0xE0, 0xFF, 0xE4, 0xFC, 0xFD, 0xFE, 0x78, 0x64, 0x12, 0x1B,
 	0x38, 0x78, 0x64, 0x12, 0x1B, 0x1F, 0x78, 0x08, 0x12, 0x1B,
 	0x0C, 0x78, 0x64, 0x12, 0x1B, 0x38, 0x78, 0x64, 0x12, 0x1B,
 	0x2B, 0x90, 0x00, 0x03, 0x80, 0x51, 0x90, 0x00, 0x00, 0xE0,
 	0xFF, 0xE4, 0xFC, 0xFD, 0xFE, 0xEF, 0x54, 0x0F, 0xFF, 0xE4,
 	0x78, 0x64, 0x12, 0x1B, 0x38, 0x78, 0x64, 0x12, 0x1B, 0x8C,
 
 	0x3A, 0x40, 0x15, 0x40, 0x00, 0x1F, 0x78, 0x08, 0x12, 0x1B,
 	0x0C, 0x78, 0x64, 0x12, 0x1B, 0x38, 0x78, 0x64, 0x12, 0x1B,
 	0x2B, 0x90, 0x00, 0x01, 0xE0, 0xFF, 0xEB, 0x4F, 0xFF, 0xEA,
 	0xFE, 0xE9, 0xFD, 0xE8, 0xFC, 0x78, 0x64, 0x12, 0x1B, 0x38,
 	0x78, 0x64, 0x12, 0x1B, 0x1F, 0x78, 0x08, 0x12, 0x1B, 0x0C,
 	0x78, 0x64, 0x12, 0x1B, 0x38, 0x78, 0x64, 0x12, 0x1B, 0x2B,
 	0x90, 0x00, 0x02, 0xE0, 0xFF, 0xEB, 0x4F, 0xFF, 0xEA, 0x98,
 
 	0x3A, 0x40, 0x15, 0x80, 0x00, 0xFE, 0xE9, 0xFD, 0xE8, 0xFC,
 	0x78, 0x64, 0x12, 0x1B, 0x38, 0xE4, 0xF5, 0x3C, 0xE5, 0x3C,
 	0x14, 0x60, 0x0C, 0x14, 0x60, 0x0E, 0x24, 0x02, 0x70, 0x0D,
 	0x75, 0x3D, 0x01, 0x80, 0x08, 0x75, 0x3D, 0x02, 0x80, 0x03,
 	0x75, 0x3D, 0x04, 0xAF, 0x3D, 0xAB, 0x07, 0xE4, 0xFA, 0xF9,
 	0xF8, 0xFF, 0x7E, 0x1B, 0x7D, 0xB7, 0xFC, 0x12, 0x1E, 0x7B,
 	0x78, 0x60, 0x12, 0x1B, 0x38, 0x78, 0x64, 0x12, 0x1B, 0xF9,
 
 	0x3A, 0x40, 0x15, 0xC0, 0x00, 0x2B, 0xC0, 0x00, 0x78, 0x60,
 	0x12, 0x1B, 0x1F, 0xD0, 0x00, 0x12, 0x1A, 0x53, 0x78, 0x68,
 	0x12, 0x1B, 0x38, 0x78, 0x64, 0x12, 0x1B, 0x2B, 0xC0, 0x00,
 	0x78, 0x60, 0x12, 0x1B, 0x1F, 0xD0, 0x00, 0x12, 0x1A, 0x53,
 	0xAC, 0x00, 0xAD, 0x01, 0xAE, 0x02, 0xAF, 0x03, 0x78, 0x6C,
 	0x12, 0x1B, 0x38, 0xE4, 0x7B, 0x02, 0xFA, 0xF9, 0xF8, 0xC0,
 	0x00, 0x78, 0x64, 0x12, 0x1B, 0x1F, 0xD0, 0x00, 0x12, 0xC6,
 
 	0x3A, 0x40, 0x16, 0x00, 0x00, 0x1A, 0x53, 0x78, 0x6C, 0x12,
 	0x1B, 0x2B, 0xC3, 0x12, 0x1A, 0xFB, 0x40, 0x17, 0x78, 0x68,
 	0x12, 0x1B, 0x1F, 0xEF, 0x24, 0x01, 0xFF, 0xE4, 0x3E, 0xFE,
 	0xE4, 0x3D, 0xFD, 0xE4, 0x3C, 0xFC, 0x78, 0x68, 0x12, 0x1B,
 	0x38, 0x78, 0x68, 0x12, 0x1B, 0x1F, 0xEC, 0x4D, 0x4E, 0x4F,
 	0x60, 0x76, 0xE4, 0xFF, 0xFE, 0x7D, 0x01, 0xFC, 0x78, 0x68,
 	0x12, 0x1B, 0x2B, 0xC3, 0x12, 0x1A, 0xFB, 0x50, 0x65, 0xD8,
 
 	0x3A, 0x40, 0x16, 0x40, 0x00, 0xE5, 0x3A, 0x45, 0x39, 0x70,
 	0x3F, 0x78, 0x68, 0x12, 0x1B, 0x1F, 0x8E, 0x39, 0x8F, 0x3A,
 	0xE5, 0x39, 0xC3, 0x13, 0xF5, 0x39, 0xE5, 0x3A, 0x13, 0xF5,
 	0x3A, 0x15, 0x3A, 0x70, 0x02, 0x15, 0x39, 0xAD, 0x3D, 0xE5,
 	0x39, 0xF5, 0xCE, 0x85, 0x3A, 0xCD, 0xAF, 0x05, 0xEF, 0x24,
 	0xFE, 0x60, 0x0D, 0x24, 0xFE, 0x60, 0x0E, 0x24, 0x03, 0x70,
 	0x0D, 0x75, 0x1A, 0x03, 0x80, 0x08, 0x75, 0x1A, 0x07, 0x63,
 
 	0x3A, 0x40, 0x16, 0x80, 0x00, 0x80, 0x03, 0x75, 0x1A, 0x0B,
 	0xE4, 0x7F, 0x68, 0x7E, 0x01, 0xFD, 0xFC, 0x78, 0x68, 0x12,
 	0x1B, 0x2B, 0xD3, 0x12, 0x1A, 0xFB, 0x50, 0x0E, 0x85, 0x3D,
 	0x3B, 0x78, 0x68, 0x12, 0x1B, 0x1F, 0x8E, 0x37, 0x8F, 0x38,
 	0x80, 0x0B, 0x05, 0x3C, 0xE5, 0x3C, 0x64, 0x03, 0x60, 0x03,
 	0x02, 0x15, 0x8D, 0xE5, 0x3B, 0x24, 0xFE, 0x60, 0x0D, 0x24,
 	0xFE, 0x60, 0x0E, 0x24, 0x03, 0x70, 0x0F, 0x75, 0xE8, 0xE8,
 
 	0x3A, 0x40, 0x16, 0xC0, 0x00, 0x40, 0x80, 0x12, 0x75, 0xE8,
 	0x50, 0x80, 0x0D, 0x75, 0xE8, 0x70, 0x80, 0x08, 0x7F, 0x05,
 	0x12, 0x1F, 0x69, 0x7F, 0x00, 0x22, 0xAE, 0x37, 0xAF, 0x38,
 	0x7C, 0x00, 0x7D, 0x03, 0x12, 0x19, 0xC2, 0x8F, 0xBB, 0xC3,
 	0xE5, 0x38, 0x9F, 0xF5, 0xBC, 0xC2, 0x02, 0xC2, 0x05, 0x30,
 	0x00, 0x02, 0x80, 0x7E, 0x30, 0x01, 0x7B, 0x90, 0x00, 0x01,
 	0xE0, 0xFD, 0x54, 0xF0, 0xFC, 0xFF, 0xC3, 0xE5, 0x5B, 0x84,
 
 	0x3A, 0x40, 0x17, 0x00, 0x00, 0x9F, 0xF5, 0x38, 0xE5, 0x5A,
 	0x94, 0x00, 0xF5, 0x37, 0x63, 0x38, 0x42, 0x63, 0x37, 0x42,
 	0x74, 0xFE, 0x25, 0x5B, 0xF5, 0x82, 0x74, 0xFF, 0x35, 0x5A,
 	0xF5, 0x83, 0xE0, 0x75, 0x39, 0x00, 0xF5, 0x3A, 0x75, 0x3A,
 	0x00, 0xF5, 0x39, 0x74, 0xFF, 0x25, 0x5B, 0xF5, 0x82, 0x74,
 	0xFF, 0x35, 0x5A, 0xF5, 0x83, 0xE0, 0x42, 0x3A, 0xE5, 0x38,
 	0x65, 0x3A, 0x70, 0x04, 0xE5, 0x37, 0x65, 0x39, 0x60, 0x1E,
 
 	0x3A, 0x40, 0x17, 0x40, 0x00, 0x01, 0x00, 0xED, 0x54, 0x03,
 	0xFF, 0xBF, 0x01, 0x0E, 0xD2, 0x02, 0xEC, 0xC4, 0x54, 0x0F,
 	0x75, 0x1E, 0x00, 0xF5, 0x1F, 0x00, 0x80, 0x0A, 0xEF, 0x70,
 	0x03, 0x00, 0x80, 0x04, 0x00, 0x7F, 0x00, 0x22, 0xE5, 0x5B,
 	0x24, 0xFE, 0xF5, 0x1D, 0xE5, 0x5A, 0x34, 0xFF, 0xF5, 0x1C,
 	0x80, 0x06, 0x85, 0x5A, 0x1C, 0x85, 0x5B, 0x1D, 0x7F, 0x01,
 	0x22, 0xC0, 0xE0, 0xC0, 0x83, 0xC0, 0x82, 0xC0, 0xD0, 0xEC,
 
 	0x3A, 0x40, 0x17, 0x80, 0x00, 0x75, 0xD0, 0x08, 0x43, 0x80,
 	0x20, 0x85, 0x9D, 0x48, 0xE5, 0x9D, 0x30, 0xE5, 0x02, 0x80,
 	0x0D, 0xE5, 0x9D, 0x70, 0x13, 0x00, 0x53, 0x80, 0xDF, 0x00,
 	0x43, 0x80, 0x20, 0x00, 0x53, 0x80, 0xDF, 0x00, 0x43, 0x80,
 	0x20, 0x02, 0x19, 0x86, 0xE5, 0x9C, 0x30, 0xE2, 0x03, 0x02,
 	0x19, 0x86, 0x75, 0x24, 0x00, 0xE5, 0x48, 0x30, 0xE4, 0x5B,
 	0x30, 0x02, 0x02, 0xD2, 0x05, 0xE5, 0x48, 0x30, 0xE1, 0xE4,
 
 	0x3A, 0x40, 0x17, 0xC0, 0x00, 0x38, 0x75, 0x5C, 0x00, 0x75,
 	0x5D, 0x00, 0x75, 0x54, 0x00, 0x75, 0x55, 0x08, 0xAB, 0x4B,
 	0xAA, 0x4C, 0xA9, 0x4D, 0x85, 0x5D, 0x82, 0x85, 0x5C, 0x83,
 	0x12, 0x19, 0x95, 0xFF, 0xF5, 0xA5, 0x74, 0x00, 0x25, 0x5D,
 	0xF5, 0x82, 0x74, 0x00, 0x35, 0x5C, 0xF5, 0x83, 0xEF, 0xF0,
 	0x05, 0x5D, 0xE5, 0x5D, 0x70, 0x02, 0x05, 0x5C, 0xF5, 0x82,
 	0x80, 0x62, 0x75, 0x5C, 0x00, 0x75, 0x5D, 0x00, 0x85, 0xAF,
 
 	0x3A, 0x40, 0x18, 0x00, 0x00, 0xA5, 0x5E, 0xAF, 0x9D, 0x75,
 	0x49, 0x00, 0x8F, 0x4A, 0x75, 0x52, 0x08, 0x75, 0x53, 0x04,
 	0x02, 0x19, 0x86, 0xE5, 0x48, 0x20, 0xE1, 0x03, 0x02, 0x18,
 	0x9B, 0xC3, 0xE5, 0x5D, 0x95, 0x55, 0xE5, 0x5C, 0x95, 0x54,
 	0x50, 0x6E, 0x85, 0x5F, 0xA5, 0x74, 0x00, 0x25, 0x5D, 0xF5,
 	0x82, 0x74, 0x00, 0x35, 0x5C, 0xF5, 0x83, 0xE5, 0x5F, 0xF0,
 	0x05, 0x5D, 0xE5, 0x5D, 0x70, 0x02, 0x05, 0x5C, 0xE5, 0xC6,
 
 	0x3A, 0x40, 0x18, 0x40, 0x00, 0x55, 0x24, 0xFE, 0xFF, 0xE5,
 	0x54, 0x34, 0xFF, 0xFE, 0xC3, 0xE5, 0x5D, 0x9F, 0xE5, 0x5C,
 	0x9E, 0x50, 0x14, 0xAB, 0x4B, 0xAA, 0x4C, 0xA9, 0x4D, 0x85,
 	0x5D, 0x82, 0x85, 0x5C, 0x83, 0x12, 0x19, 0x95, 0xF5, 0x5F,
 	0x02, 0x19, 0x86, 0xEF, 0xB5, 0x5D, 0x0B, 0xEE, 0xB5, 0x5C,
 	0x07, 0xE5, 0x50, 0xF5, 0x5F, 0x02, 0x19, 0x86, 0xE5, 0x55,
 	0x24, 0xFF, 0xFF, 0xE5, 0x54, 0x34, 0xFF, 0xFE, 0xEF, 0x51,
 
 	0x3A, 0x40, 0x18, 0x80, 0x00, 0x65, 0x5D, 0x70, 0x03, 0xEE,
 	0x65, 0x5C, 0x60, 0x03, 0x02, 0x19, 0x86, 0xE5, 0x51, 0xF5,
 	0x5F, 0x02, 0x19, 0x86, 0x75, 0x5F, 0x00, 0xD2, 0x16, 0x02,
 	0x19, 0x86, 0xAD, 0xA5, 0xC3, 0xE5, 0x5D, 0x95, 0x53, 0xE5,
 	0x5C, 0x95, 0x52, 0x40, 0x03, 0x02, 0x19, 0x7F, 0xE5, 0x5D,
 	0x45, 0x5C, 0x70, 0x19, 0xED, 0xFB, 0x7A, 0x00, 0x8A, 0x56,
 	0xF5, 0x57, 0x75, 0x57, 0x00, 0xF5, 0x56, 0x75, 0x4E, 0xA0,
 
 	0x3A, 0x40, 0x18, 0xC0, 0x00, 0x00, 0x75, 0x4F, 0x00, 0x8A,
 	0x58, 0x8B, 0x59, 0x80, 0x23, 0xE5, 0x5D, 0x64, 0x01, 0x45,
 	0x5C, 0x70, 0x24, 0xED, 0xFF, 0x7E, 0x00, 0x42, 0x57, 0xE5,
 	0x57, 0x24, 0x02, 0xF5, 0x53, 0xE4, 0x35, 0x56, 0xF5, 0x52,
 	0xEF, 0x25, 0x59, 0xF5, 0x59, 0xEE, 0x35, 0x58, 0xF5, 0x58,
 	0x75, 0x5A, 0x00, 0x75, 0x5B, 0x00, 0x02, 0x19, 0x75, 0xE5,
 	0x53, 0x24, 0xFE, 0xFF, 0xE5, 0x52, 0x34, 0xFF, 0xFE, 0x09,
 
 	0x3A, 0x40, 0x19, 0x00, 0x00, 0xC3, 0xE5, 0x5D, 0x9F, 0xE5,
 	0x5C, 0x9E, 0x50, 0x3E, 0xED, 0x25, 0x59, 0xF5, 0x59, 0xE4,
 	0x35, 0x58, 0xF5, 0x58, 0xC3, 0xE5, 0x5A, 0x94, 0x08, 0x50,
 	0x16, 0x05, 0x5B, 0xE5, 0x5B, 0xAA, 0x5A, 0x70, 0x02, 0x05,
 	0x5A, 0x14, 0x24, 0x00, 0xF5, 0x82, 0x74, 0x00, 0x3A, 0xF5,
 	0x83, 0xED, 0xF0, 0xC3, 0xE5, 0x5A, 0x94, 0x08, 0x50, 0x3E,
 	0x74, 0x00, 0x25, 0x5B, 0xF5, 0x82, 0x74, 0x00, 0x35, 0xB4,
 
 	0x3A, 0x40, 0x19, 0x40, 0x00, 0x5A, 0xF5, 0x83, 0xE4, 0xF0,
 	0x80, 0x2E, 0xEF, 0xB5, 0x5D, 0x11, 0xEE, 0xB5, 0x5C, 0x0D,
 	0xED, 0x75, 0x4E, 0x00, 0xF5, 0x4F, 0x75, 0x4F, 0x00, 0xF5,
 	0x4E, 0x80, 0x19, 0xE5, 0x53, 0x24, 0xFF, 0xFF, 0xE5, 0x52,
 	0x34, 0xFF, 0xFE, 0xEF, 0xB5, 0x5D, 0x0B, 0xEE, 0xB5, 0x5C,
 	0x07, 0xAF, 0x0D, 0xED, 0x42, 0x4F, 0xD2, 0x14, 0x05, 0x5D,
 	0xE5, 0x5D, 0x70, 0x0B, 0x05, 0x5C, 0x80, 0x07, 0xAF, 0xB7,
 
 	0x3A, 0x40, 0x19, 0x80, 0x00, 0x9D, 0x75, 0x49, 0x00, 0x8F,
 	0x4A, 0x75, 0x9D, 0xFF, 0x53, 0x80, 0xDF, 0xD0, 0xD0, 0xD0,
 	0x82, 0xD0, 0x83, 0xD0, 0xE0, 0x32, 0xBB, 0x01, 0x0C, 0xE5,
 	0x82, 0x29, 0xF5, 0x82, 0xE5, 0x83, 0x3A, 0xF5, 0x83, 0xE0,
 	0x22, 0x50, 0x06, 0xE9, 0x25, 0x82, 0xF8, 0xE6, 0x22, 0xBB,
 	0xFE, 0x06, 0xE9, 0x25, 0x82, 0xF8, 0xE2, 0x22, 0xE5, 0x82,
 	0x29, 0xF5, 0x82, 0xE5, 0x83, 0x3A, 0xF5, 0x83, 0xE4, 0xE8,
 
 	0x3A, 0x40, 0x19, 0xC0, 0x00, 0x93, 0x22, 0xBC, 0x00, 0x0B,
 	0xBE, 0x00, 0x29, 0xEF, 0x8D, 0xF0, 0x84, 0xFF, 0xAD, 0xF0,
 	0x22, 0xE4, 0xCC, 0xF8, 0x75, 0xF0, 0x08, 0xEF, 0x2F, 0xFF,
 	0xEE, 0x33, 0xFE, 0xEC, 0x33, 0xFC, 0xEE, 0x9D, 0xEC, 0x98,
 	0x40, 0x05, 0xFC, 0xEE, 0x9D, 0xFE, 0x0F, 0xD5, 0xF0, 0xE9,
 	0xE4, 0xCE, 0xFD, 0x22, 0xED, 0xF8, 0xF5, 0xF0, 0xEE, 0x84,
 	0x20, 0xD2, 0x1C, 0xFE, 0xAD, 0xF0, 0x75, 0xF0, 0x08, 0xB1,
 
 	0x3A, 0x40, 0x1A, 0x00, 0x00, 0xEF, 0x2F, 0xFF, 0xED, 0x33,
 	0xFD, 0x40, 0x07, 0x98, 0x50, 0x06, 0xD5, 0xF0, 0xF2, 0x22,
 	0xC3, 0x98, 0xFD, 0x0F, 0xD5, 0xF0, 0xEA, 0x22, 0x75, 0xF0,
 	0x08, 0x75, 0x82, 0x00, 0xEF, 0x2F, 0xFF, 0xEE, 0x33, 0xFE,
 	0xCD, 0x33, 0xCD, 0xCC, 0x33, 0xCC, 0xC5, 0x82, 0x33, 0xC5,
 	0x82, 0x9B, 0xED, 0x9A, 0xEC, 0x99, 0xE5, 0x82, 0x98, 0x40,
 	0x0C, 0xF5, 0x82, 0xEE, 0x9B, 0xFE, 0xED, 0x9A, 0xFD, 0xB9,
 
 	0x3A, 0x40, 0x1A, 0x40, 0x00, 0xEC, 0x99, 0xFC, 0x0F, 0xD5,
 	0xF0, 0xD6, 0xE4, 0xCE, 0xFB, 0xE4, 0xCD, 0xFA, 0xE4, 0xCC,
 	0xF9, 0xA8, 0x82, 0x22, 0xB8, 0x00, 0xC1, 0xB9, 0x00, 0x59,
 	0xBA, 0x00, 0x2D, 0xEC, 0x8B, 0xF0, 0x84, 0xCF, 0xCE, 0xCD,
 	0xFC, 0xE5, 0xF0, 0xCB, 0xF9, 0x78, 0x18, 0xEF, 0x2F, 0xFF,
 	0xEE, 0x33, 0xFE, 0xED, 0x33, 0xFD, 0xEC, 0x33, 0xFC, 0xEB,
 	0x33, 0xFB, 0x10, 0xD7, 0x03, 0x99, 0x40, 0x04, 0xEB, 0xC3,
 
 	0x3A, 0x40, 0x1A, 0x80, 0x00, 0x99, 0xFB, 0x0F, 0xD8, 0xE5,
 	0xE4, 0xF9, 0xFA, 0x22, 0x78, 0x18, 0xEF, 0x2F, 0xFF, 0xEE,
 	0x33, 0xFE, 0xED, 0x33, 0xFD, 0xEC, 0x33, 0xFC, 0xC9, 0x33,
 	0xC9, 0x10, 0xD7, 0x05, 0x9B, 0xE9, 0x9A, 0x40, 0x07, 0xEC,
 	0x9B, 0xFC, 0xE9, 0x9A, 0xF9, 0x0F, 0xD8, 0xE0, 0xE4, 0xC9,
 	0xFA, 0xE4, 0xCC, 0xFB, 0x22, 0x75, 0xF0, 0x10, 0xEF, 0x2F,
 	0xFF, 0xEE, 0x33, 0xFE, 0xED, 0x33, 0xFD, 0xCC, 0x33, 0xAC,
 
 	0x3A, 0x40, 0x1A, 0xC0, 0x00, 0xCC, 0xC8, 0x33, 0xC8, 0x10,
 	0xD7, 0x07, 0x9B, 0xEC, 0x9A, 0xE8, 0x99, 0x40, 0x0A, 0xED,
 	0x9B, 0xFD, 0xEC, 0x9A, 0xFC, 0xE8, 0x99, 0xF8, 0x0F, 0xD5,
 	0xF0, 0xDA, 0xE4, 0xCD, 0xFB, 0xE4, 0xCC, 0xFA, 0xE4, 0xC8,
 	0xF9, 0x22, 0xEB, 0x9F, 0xF5, 0xF0, 0xEA, 0x9E, 0x42, 0xF0,
 	0xE9, 0x9D, 0x42, 0xF0, 0xEC, 0x64, 0x80, 0xC8, 0x64, 0x80,
 	0x98, 0x45, 0xF0, 0x22, 0xEB, 0x9F, 0xF5, 0xF0, 0xEA, 0x8D,
 
 	0x3A, 0x40, 0x1B, 0x00, 0x00, 0x9E, 0x42, 0xF0, 0xE9, 0x9D,
 	0x42, 0xF0, 0xE8, 0x9C, 0x45, 0xF0, 0x22, 0xE8, 0x60, 0x0F,
 	0xEF, 0xC3, 0x33, 0xFF, 0xEE, 0x33, 0xFE, 0xED, 0x33, 0xFD,
 	0xEC, 0x33, 0xFC, 0xD8, 0xF1, 0x22, 0xE6, 0xFC, 0x08, 0xE6,
 	0xFD, 0x08, 0xE6, 0xFE, 0x08, 0xE6, 0xFF, 0x22, 0xE6, 0xFB,
 	0x08, 0xE6, 0xF9, 0x08, 0xE6, 0xFA, 0x08, 0xE6, 0xCB, 0xF8,
 	0x22, 0xEC, 0xF6, 0x08, 0xED, 0xF6, 0x08, 0xEE, 0xF6, 0xC1,
 
 	0x3A, 0x40, 0x1B, 0x40, 0x00, 0x08, 0xEF, 0xF6, 0x22, 0xE4,
 	0xF5, 0x30, 0xF5, 0x31, 0xF5, 0x32, 0xF5, 0x33, 0xF5, 0x34,
 	0xC2, 0xAF, 0x75, 0x8D, 0xE0, 0x75, 0x8E, 0xCD, 0x75, 0x2F,
 	0x55, 0x12, 0x1E, 0xFF, 0x43, 0x80, 0x20, 0x12, 0x1F, 0xC3,
 	0x12, 0x1F, 0x80, 0xE4, 0xF5, 0x24, 0xC2, 0x14, 0xC2, 0x12,
 	0xC2, 0x15, 0xC2, 0x16, 0xC2, 0x13, 0x12, 0x1E, 0x17, 0xD2,
 	0xAF, 0x53, 0x80, 0xDF, 0x43, 0x80, 0x02, 0xE5, 0x2F, 0x5E,
 
 	0x3A, 0x40, 0x1B, 0x80, 0x00, 0x64, 0x55, 0x60, 0x0B, 0x75,
 	0x8D, 0xE0, 0x75, 0x8E, 0x16, 0x63, 0x80, 0x20, 0x80, 0xFB,
 	0x75, 0x8D, 0xE0, 0xE5, 0x8B, 0x30, 0xE7, 0x0F, 0x63, 0x80,
 	0x10, 0x75, 0x8B, 0x77, 0xE5, 0x24, 0xC3, 0x94, 0xFF, 0x50,
 	0x02, 0x05, 0x24, 0x12, 0x1C, 0x50, 0x30, 0x17, 0x04, 0xC2,
 	0x17, 0x80, 0xCE, 0x20, 0x18, 0x03, 0x02, 0x1C, 0x37, 0xC2,
 	0x18, 0xE4, 0xF5, 0x13, 0xE5, 0x24, 0xD3, 0x94, 0x0A, 0x0C,
 
 	0x3A, 0x40, 0x1B, 0xC0, 0x00, 0x40, 0xBC, 0xE4, 0xF5, 0x24,
 	0x12, 0x1F, 0xDF, 0xE4, 0xF5, 0x54, 0xF5, 0x55, 0xF5, 0x52,
 	0xF5, 0x53, 0x75, 0x8B, 0x5F, 0x43, 0x80, 0x10, 0x53, 0x80,
 	0xFD, 0x53, 0x80, 0xDF, 0x12, 0x10, 0x2E, 0xC2, 0xAF, 0x12,
 	0x1F, 0xC3, 0x12, 0x10, 0x06, 0xD2, 0xAF, 0x75, 0x87, 0x03,
 	0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x8B, 0x7F, 0xE4, 0xF5,
 	0x24, 0x75, 0x8D, 0xE0, 0x75, 0x8A, 0x04, 0x00, 0x53, 0x11,
 
 	0x3A, 0x40, 0x1C, 0x00, 0x00, 0x80, 0xEF, 0x43, 0x88, 0x02,
 	0x43, 0x80, 0x20, 0x12, 0x1F, 0xC3, 0x12, 0x1F, 0x80, 0xC2,
 	0x14, 0xC2, 0x12, 0xC2, 0x15, 0xC2, 0x16, 0xC2, 0x13, 0xE4,
 	0xF5, 0x30, 0x05, 0x30, 0xE5, 0x30, 0xB4, 0x64, 0xF9, 0x53,
 	0x88, 0xFD, 0x53, 0x80, 0xDF, 0x12, 0x1E, 0xFF, 0x12, 0x1E,
 	0x17, 0xD2, 0xAF, 0x43, 0x80, 0x02, 0x00, 0x02, 0x1B, 0x7E,
 	0xE5, 0x55, 0x45, 0x54, 0x60, 0x03, 0x02, 0x1B, 0x7E, 0x9C,
 
 	0x3A, 0x40, 0x1C, 0x40, 0x00, 0xE5, 0x53, 0x45, 0x52, 0x60,
 	0x03, 0x02, 0x1B, 0x7E, 0xC2, 0x17, 0xD2, 0x18, 0x02, 0x1B,
 	0x7E, 0xE5, 0x55, 0x45, 0x54, 0x70, 0x06, 0xE5, 0x53, 0x45,
 	0x52, 0x60, 0x09, 0xE5, 0x24, 0xC3, 0x94, 0x05, 0x40, 0x02,
 	0xC2, 0x13, 0x20, 0x13, 0x0F, 0x20, 0x14, 0x0C, 0x20, 0x12,
 	0x09, 0x20, 0x15, 0x06, 0x20, 0x16, 0x03, 0x02, 0x1D, 0x1B,
 	0x43, 0x80, 0x20, 0x12, 0x1F, 0xDF, 0x53, 0x80, 0xDF, 0x2C,
 
 	0x3A, 0x40, 0x1C, 0x80, 0x00, 0x30, 0x13, 0x04, 0x7F, 0x02,
 	0x80, 0x7D, 0x43, 0x80, 0x20, 0x12, 0x1D, 0xA8, 0x75, 0x35,
 	0x00, 0x8F, 0x36, 0x53, 0x80, 0xDF, 0xE5, 0x36, 0x45, 0x35,
 	0x60, 0x67, 0x53, 0x80, 0xFD, 0x20, 0x14, 0x03, 0x30, 0x15,
 	0x3E, 0xD3, 0xE5, 0x5B, 0x94, 0x03, 0xE5, 0x5A, 0x94, 0x00,
 	0x40, 0x2C, 0x12, 0x14, 0x9C, 0xEF, 0x60, 0x48, 0x30, 0x02,
 	0x15, 0x12, 0x10, 0x2E, 0x12, 0x10, 0x06, 0xC2, 0x14, 0xC7,
 
 	0x3A, 0x40, 0x1C, 0xC0, 0x00, 0xC2, 0x12, 0xC2, 0x15, 0xC2,
 	0x16, 0xC2, 0x13, 0x12, 0x1E, 0x17, 0xD2, 0xAF, 0x12, 0x10,
 	0x56, 0x30, 0x02, 0x2A, 0x75, 0xA8, 0x80, 0x12, 0x1F, 0x80,
 	0x80, 0x22, 0x7F, 0x07, 0x12, 0x1F, 0x69, 0x80, 0x1B, 0x43,
 	0x80, 0x20, 0xE4, 0xF5, 0x35, 0xF5, 0x36, 0x05, 0x36, 0xE5,
 	0x36, 0x70, 0x02, 0x05, 0x35, 0xB4, 0xE8, 0xF5, 0xE5, 0x35,
 	0xB4, 0x03, 0xF0, 0x53, 0x80, 0xDF, 0x43, 0x80, 0x02, 0x5E,
 
 	0x3A, 0x40, 0x1D, 0x00, 0x00, 0x80, 0x05, 0x7F, 0x06, 0x12,
 	0x1F, 0x69, 0x20, 0x02, 0x0D, 0xC2, 0x14, 0xC2, 0x12, 0xC2,
 	0x15, 0xC2, 0x16, 0xC2, 0x13, 0x02, 0x1E, 0x17, 0xC2, 0x02,
 	0xC2, 0x05, 0x22, 0x78, 0xFF, 0xE4, 0xF6, 0xD8, 0xFD, 0x75,
 	0x81, 0x71, 0x02, 0x1D, 0x63, 0x02, 0x1B, 0x44, 0xE4, 0x93,
 	0xA3, 0xF8, 0xE4, 0x93, 0xA3, 0x40, 0x03, 0xF6, 0x80, 0x01,
 	0xF2, 0x08, 0xDF, 0xF4, 0x80, 0x29, 0xE4, 0x93, 0xA3, 0xD8,
 
 	0x3A, 0x40, 0x1D, 0x40, 0x00, 0xF8, 0x54, 0x07, 0x24, 0x0C,
 	0xC8, 0xC3, 0x33, 0xC4, 0x54, 0x0F, 0x44, 0x20, 0xC8, 0x83,
 	0x40, 0x04, 0xF4, 0x56, 0x80, 0x01, 0x46, 0xF6, 0xDF, 0xE4,
 	0x80, 0x0B, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80,
 	0x90, 0x1F, 0x36, 0xE4, 0x7E, 0x01, 0x93, 0x60, 0xBC, 0xA3,
 	0xFF, 0x54, 0x3F, 0x30, 0xE5, 0x09, 0x54, 0x1F, 0xFE, 0xE4,
 	0x93, 0xA3, 0x60, 0x01, 0x0E, 0xCF, 0x54, 0xC0, 0x25, 0x68,
 
 	0x3A, 0x40, 0x1D, 0x80, 0x00, 0xE0, 0x60, 0xA8, 0x40, 0xB8,
 	0xE4, 0x93, 0xA3, 0xFA, 0xE4, 0x93, 0xA3, 0xF8, 0xE4, 0x93,
 	0xA3, 0xC8, 0xC5, 0x82, 0xC8, 0xCA, 0xC5, 0x83, 0xCA, 0xF0,
 	0xA3, 0xC8, 0xC5, 0x82, 0xC8, 0xCA, 0xC5, 0x83, 0xCA, 0xDF,
 	0xE9, 0xDE, 0xE7, 0x80, 0xBE, 0x20, 0x14, 0x03, 0x30, 0x15,
 	0x12, 0xE5, 0x59, 0x65, 0x4F, 0x70, 0x04, 0xE5, 0x58, 0x65,
 	0x4E, 0x60, 0x03, 0x7F, 0x00, 0x22, 0x7F, 0x01, 0x22, 0xB5,
 
 	0x3A, 0x40, 0x1D, 0xC0, 0x00, 0x20, 0x12, 0x03, 0x30, 0x16,
 	0x50, 0xE4, 0xFD, 0xF5, 0x58, 0xF5, 0x59, 0xFF, 0xFE, 0x74,
 	0x00, 0x2F, 0xF5, 0x82, 0x74, 0x00, 0x3E, 0xF5, 0x83, 0xE0,
 	0x25, 0x59, 0xF5, 0x59, 0xE4, 0x35, 0x58, 0xF5, 0x58, 0x45,
 	0x59, 0x60, 0x02, 0x7D, 0x01, 0x0F, 0xBF, 0x00, 0x01, 0x0E,
 	0xEF, 0x64, 0x06, 0x4E, 0x70, 0xDB, 0x90, 0x00, 0x06, 0xE0,
 	0x7F, 0x00, 0xFE, 0xA3, 0xE0, 0x2F, 0xFF, 0xE4, 0x3E, 0xDE,
 
 	0x3A, 0x40, 0x1E, 0x00, 0x00, 0xFE, 0xE5, 0x59, 0x6F, 0x70,
 	0x03, 0xE5, 0x58, 0x6E, 0x60, 0x03, 0x7F, 0x00, 0x22, 0xED,
 	0x60, 0x03, 0x7F, 0x01, 0x22, 0x7F, 0x00, 0x22, 0x75, 0x4B,
 	0xFF, 0x75, 0x4C, 0x20, 0x75, 0x4D, 0xF0, 0xE4, 0xF5, 0x50,
 	0xF5, 0x51, 0xFF, 0xFE, 0xAB, 0x4B, 0xAA, 0x4C, 0xA9, 0x4D,
 	0x8F, 0x82, 0x8E, 0x83, 0x12, 0x19, 0x95, 0x25, 0x51, 0xF5,
 	0x51, 0xE4, 0x35, 0x50, 0xF5, 0x50, 0x0F, 0xBF, 0x00, 0x88,
 
 	0x3A, 0x40, 0x1E, 0x40, 0x00, 0x01, 0x0E, 0xEF, 0x64, 0x06,
 	0x4E, 0x70, 0xDF, 0xE4, 0xF5, 0x5C, 0xF5, 0x5D, 0xF5, 0x5C,
 	0xF5, 0x5D, 0xF5, 0x52, 0xF5, 0x53, 0xF5, 0x54, 0xF5, 0x55,
 	0x75, 0xA9, 0x10, 0x43, 0xB8, 0x10, 0x43, 0xF8, 0x10, 0x75,
 	0x9C, 0x20, 0x75, 0x9C, 0x40, 0x75, 0x9C, 0x50, 0x75, 0x9E,
 	0x05, 0x75, 0x9F, 0x05, 0x75, 0xA3, 0x02, 0x75, 0xA6, 0xA0,
 	0x75, 0x9C, 0x58, 0x22, 0xC2, 0xD5, 0xE8, 0x30, 0xE7, 0x83,
 
 	0x3A, 0x40, 0x1E, 0x80, 0x00, 0x0F, 0xB2, 0xD5, 0xE4, 0xC3,
 	0x9B, 0xFB, 0xE4, 0x9A, 0xFA, 0xE4, 0x99, 0xF9, 0xE4, 0x98,
 	0xF8, 0xEC, 0x30, 0xE7, 0x17, 0xB2, 0xD5, 0x12, 0x1E, 0xB1,
 	0x12, 0x1A, 0x53, 0xE4, 0xC3, 0x9B, 0xFB, 0xE4, 0x9A, 0xFA,
 	0xE4, 0x99, 0xF9, 0xE4, 0x98, 0xF8, 0x80, 0x03, 0x12, 0x1A,
 	0x53, 0x30, 0xD5, 0x0D, 0xE4, 0xC3, 0x9F, 0xFF, 0xE4, 0x9E,
 	0xFE, 0xE4, 0x9D, 0xFD, 0xE4, 0x9C, 0xFC, 0x22, 0x75, 0xE3,
 
 	0x3A, 0x40, 0x1E, 0xC0, 0x00, 0x8A, 0x04, 0x00, 0x12, 0x1E,
 	0xFF, 0x43, 0x88, 0x02, 0x43, 0x80, 0x20, 0xE4, 0xF5, 0x10,
 	0xE5, 0x80, 0x54, 0x01, 0xF5, 0x12, 0xB5, 0x11, 0x0B, 0x05,
 	0x10, 0xE5, 0x10, 0xD3, 0x94, 0x14, 0x40, 0xEE, 0x80, 0x08,
 	0xE4, 0xF5, 0x10, 0x85, 0x12, 0x11, 0x80, 0xE4, 0xE5, 0x12,
 	0x30, 0xE0, 0x05, 0x75, 0x2F, 0x55, 0x80, 0x03, 0x75, 0x2F,
 	0x66, 0x53, 0x88, 0xFD, 0x53, 0x80, 0xDF, 0x22, 0x90, 0xFC,
 
 	0x3A, 0x40, 0x1F, 0x00, 0x00, 0x2F, 0x11, 0x74, 0x03, 0xF0,
 	0x75, 0x80, 0x0C, 0x90, 0x2F, 0x08, 0x74, 0x0E, 0xF0, 0x75,
 	0x98, 0x32, 0xE5, 0x98, 0xF4, 0x90, 0x2F, 0x00, 0xF0, 0x90,
 	0x2F, 0x50, 0x74, 0xFF, 0xF0, 0xE4, 0xF5, 0x88, 0x90, 0x2F,
 	0x09, 0xF0, 0x75, 0xA0, 0x1A, 0xE5, 0xA0, 0xF4, 0x90, 0x2F,
 	0x01, 0xF0, 0x90, 0x2F, 0x51, 0x74, 0xFF, 0xF0, 0x22, 0x01,
 	0x24, 0x00, 0xC1, 0x1A, 0x03, 0x4B, 0x00, 0x00, 0x00, 0x9B,
 
 	0x3A, 0x40, 0x1F, 0x40, 0x00, 0x02, 0x5A, 0x00, 0x00, 0xC1,
 	0x13, 0xC1, 0x16, 0xC1, 0x12, 0xC1, 0x14, 0xC1, 0x15, 0xC1,
 	0x19, 0xC1, 0x01, 0xC1, 0x00, 0xC1, 0x08, 0xC1, 0x0B, 0xC1,
 	0x09, 0xC1, 0x02, 0xC1, 0x05, 0xC1, 0x06, 0xC1, 0x03, 0xC1,
 	0x0A, 0x02, 0x1E, 0x00, 0x00, 0x00, 0xE4, 0xFE, 0xEE, 0xC3,
 	0x9F, 0x50, 0x0C, 0xE4, 0xFD, 0x63, 0x80, 0x20, 0x0D, 0xBD,
 	0x64, 0xF9, 0x0E, 0x80, 0xEF, 0x53, 0x80, 0xDF, 0x22, 0x37,
 
 	0x3A, 0x40, 0x1F, 0x80, 0x00, 0xE4, 0xF5, 0xB1, 0xF5, 0xAD,
 	0xF5, 0xAE, 0xF5, 0xAF, 0xF5, 0xAC, 0xF5, 0x16, 0xC2, 0x18,
 	0xC2, 0x17, 0x22, 0x43, 0x80, 0x20, 0x00, 0x30, 0x02, 0x04,
 	0xD2, 0x05, 0xD2, 0x03, 0xD2, 0x19, 0x53, 0x80, 0xDF, 0x32,
 	0x43, 0x80, 0x20, 0x00, 0x30, 0x02, 0x04, 0xD2, 0x05, 0xD2,
 	0x03, 0xD2, 0x19, 0x53, 0x80, 0xDF, 0x32, 0x43, 0x80, 0x20,
 	0x00, 0x30, 0x02, 0x02, 0xD2, 0x05, 0xD2, 0x19, 0x53, 0xD9,
 
 	0x3A, 0x40, 0x1F, 0xC0, 0x00, 0x80, 0xDF, 0x32, 0xE4, 0xF5,
 	0xA8, 0xF5, 0xA9, 0xF5, 0xAA, 0xF5, 0xAB, 0x22, 0x75, 0xA9,
 	0x10, 0x43, 0xB8, 0x10, 0x43, 0xF8, 0x10, 0x22, 0x01, 0x02,
 	0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0xE4, 0xF5, 0x9C, 0x53,
 	0xA9, 0xEF, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA9,
 
 	0x3A, 0x40, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA0,

	0x3A, 0x40, 0x20, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60,

	0x3A, 0x40, 0x20, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20,

	0x3A, 0x40, 0x20, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x06, 0x01, 0x04, 0x01, 0x06, 0x00,
	0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xBC,

	0x3A, 0x00, 0x00, 0x00, 0x01, 0xFF
};
