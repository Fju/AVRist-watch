#ifndef FONTS_H
#define FONTS_H

#include <stdint.h>
#include <avr/pgmspace.h>

#define NUMBERS_CHAR_WIDTH 24
#define NUMBERS_CHAR_HEIGHT 33

// this array was generated using this command:
// python3 generate_font.py --width 24 --height 33 --size 40 0123456789:
static const uint8_t PROGMEM numbers_bitmap[] = {
	// memory usage: 3 * 33 * 11 = 1089 bytes
	// 0
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x03, 0xff, 0x80,  // 000000111111111110000000
	0x07, 0xff, 0xc0,  // 000001111111111111000000
	0x0f, 0x83, 0xe0,  // 000011111000001111100000
	0x0f, 0x01, 0xe0,  // 000011110000000111100000
	0x1e, 0x00, 0xf0,  // 000111100000000011110000
	0x1e, 0x00, 0xf0,  // 000111100000000011110000
	0x3c, 0x01, 0xf8,  // 001111000000000111111000
	0x3c, 0x01, 0xf8,  // 001111000000000111111000
	0x3c, 0x03, 0xf8,  // 001111000000001111111000
	0x78, 0x07, 0xfc,  // 011110000000011111111100
	0x78, 0x07, 0x3c,  // 011110000000011100111100
	0x78, 0x0f, 0x3c,  // 011110000000111100111100
	0x78, 0x1e, 0x3c,  // 011110000001111000111100
	0x78, 0x1c, 0x3c,  // 011110000001110000111100
	0x78, 0x3c, 0x3c,  // 011110000011110000111100
	0x78, 0x38, 0x3c,  // 011110000011100000111100
	0x78, 0x70, 0x3c,  // 011110000111000000111100
	0x78, 0xf0, 0x3c,  // 011110001111000000111100
	0x78, 0xe0, 0x3c,  // 011110001110000000111100
	0x79, 0xe0, 0x3c,  // 011110011110000000111100
	0x79, 0xc0, 0x7c,  // 011110011100000001111100
	0x3f, 0x80, 0x78,  // 001111111000000001111000
	0x3f, 0x80, 0x78,  // 001111111000000001111000
	0x3f, 0x00, 0x78,  // 001111110000000001111000
	0x1e, 0x00, 0xf0,  // 000111100000000011110000
	0x1e, 0x00, 0xf0,  // 000111100000000011110000
	0x0f, 0x01, 0xe0,  // 000011110000000111100000
	0x0f, 0x83, 0xe0,  // 000011111000001111100000
	0x07, 0xff, 0xc0,  // 000001111111111111000000
	0x03, 0xff, 0x80,  // 000000111111111110000000
	0x00, 0xfe, 0x00,  // 000000001111111000000000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	// 1
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x00, 0x7e, 0x00,  // 000000000111111000000000
	0x00, 0xfe, 0x00,  // 000000001111111000000000
	0x01, 0xfe, 0x00,  // 000000011111111000000000
	0x07, 0xde, 0x00,  // 000001111101111000000000
	0x0f, 0x9e, 0x00,  // 000011111001111000000000
	0x0e, 0x1e, 0x00,  // 000011100001111000000000
	0x08, 0x1e, 0x00,  // 000010000001111000000000
	0x00, 0x1e, 0x00,  // 000000000001111000000000
	0x00, 0x1e, 0x00,  // 000000000001111000000000
	0x00, 0x1e, 0x00,  // 000000000001111000000000
	0x00, 0x1e, 0x00,  // 000000000001111000000000
	0x00, 0x1e, 0x00,  // 000000000001111000000000
	0x00, 0x1e, 0x00,  // 000000000001111000000000
	0x00, 0x1e, 0x00,  // 000000000001111000000000
	0x00, 0x1e, 0x00,  // 000000000001111000000000
	0x00, 0x1e, 0x00,  // 000000000001111000000000
	0x00, 0x1e, 0x00,  // 000000000001111000000000
	0x00, 0x1e, 0x00,  // 000000000001111000000000
	0x00, 0x1e, 0x00,  // 000000000001111000000000
	0x00, 0x1e, 0x00,  // 000000000001111000000000
	0x00, 0x1e, 0x00,  // 000000000001111000000000
	0x00, 0x1e, 0x00,  // 000000000001111000000000
	0x00, 0x1e, 0x00,  // 000000000001111000000000
	0x00, 0x1e, 0x00,  // 000000000001111000000000
	0x00, 0x1e, 0x00,  // 000000000001111000000000
	0x00, 0x1e, 0x00,  // 000000000001111000000000
	0x00, 0x1e, 0x00,  // 000000000001111000000000
	0x0f, 0xff, 0xfc,  // 000011111111111111111100
	0x0f, 0xff, 0xfc,  // 000011111111111111111100
	0x0f, 0xff, 0xfc,  // 000011111111111111111100
	0x00, 0x00, 0x00,  // 000000000000000000000000
	// 2
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x0f, 0xff, 0x80,  // 000011111111111110000000
	0x1f, 0xff, 0xe0,  // 000111111111111111100000
	0x1f, 0x07, 0xe0,  // 000111110000011111100000
	0x18, 0x01, 0xf0,  // 000110000000000111110000
	0x00, 0x00, 0xf0,  // 000000000000000011110000
	0x00, 0x00, 0xf0,  // 000000000000000011110000
	0x00, 0x00, 0xf0,  // 000000000000000011110000
	0x00, 0x00, 0xf0,  // 000000000000000011110000
	0x00, 0x01, 0xf0,  // 000000000000000111110000
	0x00, 0x01, 0xe0,  // 000000000000000111100000
	0x00, 0x03, 0xe0,  // 000000000000001111100000
	0x00, 0x07, 0xc0,  // 000000000000011111000000
	0x00, 0x07, 0x80,  // 000000000000011110000000
	0x00, 0x0f, 0x00,  // 000000000000111100000000
	0x00, 0x1e, 0x00,  // 000000000001111000000000
	0x00, 0x3c, 0x00,  // 000000000011110000000000
	0x00, 0x7c, 0x00,  // 000000000111110000000000
	0x00, 0xf8, 0x00,  // 000000001111100000000000
	0x01, 0xf0, 0x00,  // 000000011111000000000000
	0x03, 0xe0, 0x00,  // 000000111110000000000000
	0x03, 0xc0, 0x00,  // 000000111100000000000000
	0x07, 0x80, 0x00,  // 000001111000000000000000
	0x0f, 0x00, 0x00,  // 000011110000000000000000
	0x1e, 0x00, 0x00,  // 000111100000000000000000
	0x1e, 0x00, 0x00,  // 000111100000000000000000
	0x3c, 0x00, 0x00,  // 001111000000000000000000
	0x3c, 0x00, 0x00,  // 001111000000000000000000
	0x3c, 0x00, 0x00,  // 001111000000000000000000
	0x3f, 0xff, 0xf8,  // 001111111111111111111000
	0x3f, 0xff, 0xf8,  // 001111111111111111111000
	0x3f, 0xff, 0xf8,  // 001111111111111111111000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	// 3
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x1f, 0xff, 0x80,  // 000111111111111110000000
	0x1f, 0xff, 0xc0,  // 000111111111111111000000
	0x1e, 0x07, 0xe0,  // 000111100000011111100000
	0x10, 0x01, 0xe0,  // 000100000000000111100000
	0x00, 0x01, 0xf0,  // 000000000000000111110000
	0x00, 0x00, 0xf0,  // 000000000000000011110000
	0x00, 0x00, 0xf0,  // 000000000000000011110000
	0x00, 0x00, 0xf0,  // 000000000000000011110000
	0x00, 0x00, 0xf0,  // 000000000000000011110000
	0x00, 0x01, 0xe0,  // 000000000000000111100000
	0x00, 0x03, 0xe0,  // 000000000000001111100000
	0x00, 0x0f, 0xc0,  // 000000000000111111000000
	0x03, 0xff, 0x00,  // 000000111111111100000000
	0x03, 0xfe, 0x00,  // 000000111111111000000000
	0x03, 0xff, 0xc0,  // 000000111111111111000000
	0x00, 0x0f, 0xe0,  // 000000000000111111100000
	0x00, 0x01, 0xf0,  // 000000000000000111110000
	0x00, 0x00, 0xf0,  // 000000000000000011110000
	0x00, 0x00, 0xf8,  // 000000000000000011111000
	0x00, 0x00, 0x78,  // 000000000000000001111000
	0x00, 0x00, 0x78,  // 000000000000000001111000
	0x00, 0x00, 0x78,  // 000000000000000001111000
	0x00, 0x00, 0x78,  // 000000000000000001111000
	0x00, 0x00, 0x78,  // 000000000000000001111000
	0x00, 0x00, 0xf0,  // 000000000000000011110000
	0x00, 0x00, 0xf0,  // 000000000000000011110000
	0x30, 0x01, 0xe0,  // 001100000000000111100000
	0x3e, 0x07, 0xe0,  // 001111100000011111100000
	0x3f, 0xff, 0x80,  // 001111111111111110000000
	0x3f, 0xff, 0x00,  // 001111111111111100000000
	0x07, 0xf8, 0x00,  // 000001111111100000000000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	// 4
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x00, 0x0f, 0x80,  // 000000000000111110000000
	0x00, 0x1f, 0x80,  // 000000000001111110000000
	0x00, 0x1f, 0x80,  // 000000000001111110000000
	0x00, 0x3f, 0x80,  // 000000000011111110000000
	0x00, 0x3f, 0x80,  // 000000000011111110000000
	0x00, 0x7f, 0x80,  // 000000000111111110000000
	0x00, 0xff, 0x80,  // 000000001111111110000000
	0x00, 0xf7, 0x80,  // 000000001111011110000000
	0x01, 0xf7, 0x80,  // 000000011111011110000000
	0x01, 0xe7, 0x80,  // 000000011110011110000000
	0x03, 0xe7, 0x80,  // 000000111110011110000000
	0x07, 0xc7, 0x80,  // 000001111100011110000000
	0x07, 0x87, 0x80,  // 000001111000011110000000
	0x0f, 0x87, 0x80,  // 000011111000011110000000
	0x0f, 0x07, 0x80,  // 000011110000011110000000
	0x1f, 0x07, 0x80,  // 000111110000011110000000
	0x3e, 0x07, 0x80,  // 001111100000011110000000
	0x3c, 0x07, 0x80,  // 001111000000011110000000
	0x7c, 0x07, 0x80,  // 011111000000011110000000
	0x7f, 0xff, 0xfe,  // 011111111111111111111110
	0x7f, 0xff, 0xfe,  // 011111111111111111111110
	0x7f, 0xff, 0xfe,  // 011111111111111111111110
	0x00, 0x07, 0x80,  // 000000000000011110000000
	0x00, 0x07, 0x80,  // 000000000000011110000000
	0x00, 0x07, 0x80,  // 000000000000011110000000
	0x00, 0x07, 0x80,  // 000000000000011110000000
	0x00, 0x07, 0x80,  // 000000000000011110000000
	0x00, 0x07, 0x80,  // 000000000000011110000000
	0x00, 0x07, 0x80,  // 000000000000011110000000
	0x00, 0x07, 0x80,  // 000000000000011110000000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	// 5
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x1f, 0xff, 0xf0,  // 000111111111111111110000
	0x1f, 0xff, 0xf0,  // 000111111111111111110000
	0x1e, 0x00, 0x00,  // 000111100000000000000000
	0x1e, 0x00, 0x00,  // 000111100000000000000000
	0x1e, 0x00, 0x00,  // 000111100000000000000000
	0x1e, 0x00, 0x00,  // 000111100000000000000000
	0x1e, 0x00, 0x00,  // 000111100000000000000000
	0x1e, 0x00, 0x00,  // 000111100000000000000000
	0x1e, 0x00, 0x00,  // 000111100000000000000000
	0x1e, 0x00, 0x00,  // 000111100000000000000000
	0x1f, 0xf8, 0x00,  // 000111111111100000000000
	0x1f, 0xff, 0x00,  // 000111111111111100000000
	0x1f, 0xff, 0x80,  // 000111111111111110000000
	0x00, 0x1f, 0xc0,  // 000000000001111111000000
	0x00, 0x03, 0xe0,  // 000000000000001111100000
	0x00, 0x01, 0xf0,  // 000000000000000111110000
	0x00, 0x00, 0xf0,  // 000000000000000011110000
	0x00, 0x00, 0xf8,  // 000000000000000011111000
	0x00, 0x00, 0x78,  // 000000000000000001111000
	0x00, 0x00, 0x78,  // 000000000000000001111000
	0x00, 0x00, 0x78,  // 000000000000000001111000
	0x00, 0x00, 0x78,  // 000000000000000001111000
	0x00, 0x00, 0x78,  // 000000000000000001111000
	0x00, 0x00, 0xf0,  // 000000000000000011110000
	0x00, 0x01, 0xf0,  // 000000000000000111110000
	0x20, 0x03, 0xe0,  // 001000000000001111100000
	0x3c, 0x0f, 0xc0,  // 001111000000111111000000
	0x3f, 0xff, 0x80,  // 001111111111111110000000
	0x3f, 0xff, 0x00,  // 001111111111111100000000
	0x07, 0xf8, 0x00,  // 000001111111100000000000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	// 6
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x00, 0xff, 0xf0,  // 000000001111111111110000
	0x01, 0xff, 0xf0,  // 000000011111111111110000
	0x03, 0xe0, 0x70,  // 000000111110000001110000
	0x07, 0xc0, 0x10,  // 000001111100000000010000
	0x0f, 0x80, 0x00,  // 000011111000000000000000
	0x0f, 0x00, 0x00,  // 000011110000000000000000
	0x1f, 0x00, 0x00,  // 000111110000000000000000
	0x1e, 0x00, 0x00,  // 000111100000000000000000
	0x1e, 0x00, 0x00,  // 000111100000000000000000
	0x1e, 0x00, 0x00,  // 000111100000000000000000
	0x3c, 0x00, 0x00,  // 001111000000000000000000
	0x3c, 0x1f, 0x00,  // 001111000001111100000000
	0x3c, 0x7f, 0xc0,  // 001111000111111111000000
	0x3c, 0xff, 0xf0,  // 001111001111111111110000
	0x3d, 0xe1, 0xf0,  // 001111011110000111110000
	0x3f, 0x80, 0xf8,  // 001111111000000011111000
	0x3f, 0x00, 0x78,  // 001111110000000001111000
	0x3f, 0x00, 0x3c,  // 001111110000000000111100
	0x3e, 0x00, 0x3c,  // 001111100000000000111100
	0x3e, 0x00, 0x3c,  // 001111100000000000111100
	0x3e, 0x00, 0x3c,  // 001111100000000000111100
	0x1e, 0x00, 0x3c,  // 000111100000000000111100
	0x1e, 0x00, 0x3c,  // 000111100000000000111100
	0x1e, 0x00, 0x3c,  // 000111100000000000111100
	0x0f, 0x00, 0x78,  // 000011110000000001111000
	0x0f, 0x00, 0x78,  // 000011110000000001111000
	0x0f, 0x80, 0xf0,  // 000011111000000011110000
	0x07, 0xc3, 0xf0,  // 000001111100001111110000
	0x03, 0xff, 0xe0,  // 000000111111111111100000
	0x01, 0xff, 0x80,  // 000000011111111110000000
	0x00, 0x7e, 0x00,  // 000000000111111000000000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	// 7
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x3f, 0xff, 0xfc,  // 001111111111111111111100
	0x3f, 0xff, 0xfc,  // 001111111111111111111100
	0x00, 0x00, 0x3c,  // 000000000000000000111100
	0x00, 0x00, 0x38,  // 000000000000000000111000
	0x00, 0x00, 0x78,  // 000000000000000001111000
	0x00, 0x00, 0xf0,  // 000000000000000011110000
	0x00, 0x01, 0xf0,  // 000000000000000111110000
	0x00, 0x01, 0xe0,  // 000000000000000111100000
	0x00, 0x03, 0xc0,  // 000000000000001111000000
	0x00, 0x07, 0xc0,  // 000000000000011111000000
	0x00, 0x0f, 0x80,  // 000000000000111110000000
	0x00, 0x0f, 0x00,  // 000000000000111100000000
	0x00, 0x1f, 0x00,  // 000000000001111100000000
	0x00, 0x3e, 0x00,  // 000000000011111000000000
	0x00, 0x3c, 0x00,  // 000000000011110000000000
	0x00, 0x7c, 0x00,  // 000000000111110000000000
	0x00, 0xf8, 0x00,  // 000000001111100000000000
	0x00, 0xf0, 0x00,  // 000000001111000000000000
	0x01, 0xe0, 0x00,  // 000000011110000000000000
	0x01, 0xe0, 0x00,  // 000000011110000000000000
	0x03, 0xc0, 0x00,  // 000000111100000000000000
	0x03, 0xc0, 0x00,  // 000000111100000000000000
	0x07, 0xc0, 0x00,  // 000001111100000000000000
	0x07, 0x80, 0x00,  // 000001111000000000000000
	0x07, 0x80, 0x00,  // 000001111000000000000000
	0x07, 0x80, 0x00,  // 000001111000000000000000
	0x07, 0x80, 0x00,  // 000001111000000000000000
	0x07, 0x80, 0x00,  // 000001111000000000000000
	0x07, 0x80, 0x00,  // 000001111000000000000000
	0x07, 0x80, 0x00,  // 000001111000000000000000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	// 8
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x03, 0xff, 0x80,  // 000000111111111110000000
	0x07, 0xff, 0xc0,  // 000001111111111111000000
	0x0f, 0x83, 0xe0,  // 000011111000001111100000
	0x0f, 0x01, 0xf0,  // 000011110000000111110000
	0x1e, 0x00, 0xf0,  // 000111100000000011110000
	0x1e, 0x00, 0xf0,  // 000111100000000011110000
	0x1e, 0x00, 0xf0,  // 000111100000000011110000
	0x1e, 0x00, 0xf0,  // 000111100000000011110000
	0x1f, 0x01, 0xe0,  // 000111110000000111100000
	0x0f, 0x81, 0xe0,  // 000011111000000111100000
	0x07, 0xc3, 0xc0,  // 000001111100001111000000
	0x07, 0xe7, 0x80,  // 000001111110011110000000
	0x03, 0xff, 0x00,  // 000000111111111100000000
	0x00, 0xfe, 0x00,  // 000000001111111000000000
	0x01, 0xfe, 0x00,  // 000000011111111000000000
	0x03, 0xff, 0x80,  // 000000111111111110000000
	0x07, 0xcf, 0xc0,  // 000001111100111111000000
	0x0f, 0x87, 0xe0,  // 000011111000011111100000
	0x1f, 0x03, 0xf0,  // 000111110000001111110000
	0x1e, 0x01, 0xf0,  // 000111100000000111110000
	0x3e, 0x00, 0xf8,  // 001111100000000011111000
	0x3c, 0x00, 0x78,  // 001111000000000001111000
	0x3c, 0x00, 0x78,  // 001111000000000001111000
	0x3c, 0x00, 0x78,  // 001111000000000001111000
	0x3c, 0x00, 0x78,  // 001111000000000001111000
	0x3e, 0x00, 0xf8,  // 001111100000000011111000
	0x1f, 0x00, 0xf0,  // 000111110000000011110000
	0x1f, 0x83, 0xf0,  // 000111111000001111110000
	0x0f, 0xff, 0xe0,  // 000011111111111111100000
	0x07, 0xff, 0xc0,  // 000001111111111111000000
	0x00, 0xfe, 0x00,  // 000000001111111000000000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	// 9
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x03, 0xff, 0x80,  // 000000111111111110000000
	0x0f, 0xff, 0xc0,  // 000011111111111111000000
	0x0f, 0x87, 0xe0,  // 000011111000011111100000
	0x1e, 0x01, 0xe0,  // 000111100000000111100000
	0x3c, 0x01, 0xf0,  // 001111000000000111110000
	0x3c, 0x00, 0xf0,  // 001111000000000011110000
	0x78, 0x00, 0xf8,  // 011110000000000011111000
	0x78, 0x00, 0x78,  // 011110000000000001111000
	0x78, 0x00, 0x78,  // 011110000000000001111000
	0x78, 0x00, 0x7c,  // 011110000000000001111100
	0x78, 0x00, 0x7c,  // 011110000000000001111100
	0x78, 0x00, 0xfc,  // 011110000000000011111100
	0x78, 0x00, 0xfc,  // 011110000000000011111100
	0x3c, 0x01, 0xfc,  // 001111000000000111111100
	0x3e, 0x03, 0xfc,  // 001111100000001111111100
	0x1f, 0x07, 0xbc,  // 000111110000011110111100
	0x0f, 0xff, 0x3c,  // 000011111111111100111100
	0x07, 0xfe, 0x3c,  // 000001111111111000111100
	0x01, 0xf8, 0x3c,  // 000000011111100000111100
	0x00, 0x00, 0x3c,  // 000000000000000000111100
	0x00, 0x00, 0x78,  // 000000000000000001111000
	0x00, 0x00, 0x78,  // 000000000000000001111000
	0x00, 0x00, 0x78,  // 000000000000000001111000
	0x00, 0x00, 0xf0,  // 000000000000000011110000
	0x00, 0x00, 0xf0,  // 000000000000000011110000
	0x00, 0x01, 0xe0,  // 000000000000000111100000
	0x00, 0x03, 0xe0,  // 000000000000001111100000
	0x0e, 0x0f, 0xc0,  // 000011100000111111000000
	0x0f, 0xff, 0x80,  // 000011111111111110000000
	0x0f, 0xff, 0x00,  // 000011111111111100000000
	0x07, 0xf8, 0x00,  // 000001111111100000000000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	// :
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x00, 0x78, 0x00,  // 000000000111100000000000
	0x00, 0xfc, 0x00,  // 000000001111110000000000
	0x00, 0xfc, 0x00,  // 000000001111110000000000
	0x00, 0xfc, 0x00,  // 000000001111110000000000
	0x00, 0xfc, 0x00,  // 000000001111110000000000
	0x00, 0x78, 0x00,  // 000000000111100000000000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x00, 0x00, 0x00,  // 000000000000000000000000
	0x00, 0x78, 0x00,  // 000000000111100000000000
	0x00, 0xfc, 0x00,  // 000000001111110000000000
	0x00, 0xfc, 0x00,  // 000000001111110000000000
	0x00, 0xfc, 0x00,  // 000000001111110000000000
	0x00, 0xfc, 0x00,  // 000000001111110000000000
	0x00, 0x78, 0x00,  // 000000000111100000000000
	0x00, 0x00, 0x00   // 000000000000000000000000
};


#define TEXT_CHAR_WIDTH 16
#define TEXT_CHAR_HEIGHT 22

// this array was generated using this command:
// python3 generate_font.py --width 16 --height 22 --size 26 YDMmh:
static const uint8_t PROGMEM character_bitmap[] = {
	// memory usage: 2 * 22 * 6 = 264 bytes
	// Y
	0x00, 0x00,  // 0000000000000000
	0x60, 0x06,  // 0110000000000110
	0x70, 0x0e,  // 0111000000001110
	0x30, 0x0c,  // 0011000000001100
	0x18, 0x18,  // 0001100000011000
	0x18, 0x18,  // 0001100000011000
	0x0c, 0x30,  // 0000110000110000
	0x0e, 0x70,  // 0000111001110000
	0x06, 0x60,  // 0000011001100000
	0x03, 0xc0,  // 0000001111000000
	0x03, 0xc0,  // 0000001111000000
	0x01, 0x80,  // 0000000110000000
	0x01, 0x80,  // 0000000110000000
	0x01, 0x80,  // 0000000110000000
	0x01, 0x80,  // 0000000110000000
	0x01, 0x80,  // 0000000110000000
	0x01, 0x80,  // 0000000110000000
	0x01, 0x80,  // 0000000110000000
	0x01, 0x80,  // 0000000110000000
	0x01, 0x80,  // 0000000110000000
	0x01, 0x80,  // 0000000110000000
	0x00, 0x00,  // 0000000000000000
	// D
	0x00, 0x00,  // 0000000000000000
	0x3f, 0xc0,  // 0011111111000000
	0x3f, 0xf0,  // 0011111111110000
	0x30, 0x38,  // 0011000000111000
	0x30, 0x1c,  // 0011000000011100
	0x30, 0x0c,  // 0011000000001100
	0x30, 0x0c,  // 0011000000001100
	0x30, 0x06,  // 0011000000000110
	0x30, 0x06,  // 0011000000000110
	0x30, 0x06,  // 0011000000000110
	0x30, 0x06,  // 0011000000000110
	0x30, 0x06,  // 0011000000000110
	0x30, 0x06,  // 0011000000000110
	0x30, 0x06,  // 0011000000000110
	0x30, 0x06,  // 0011000000000110
	0x30, 0x0c,  // 0011000000001100
	0x30, 0x0c,  // 0011000000001100
	0x30, 0x1c,  // 0011000000011100
	0x30, 0x38,  // 0011000000111000
	0x3f, 0xf0,  // 0011111111110000
	0x3f, 0xc0,  // 0011111111000000
	0x00, 0x00,  // 0000000000000000
	// M
	0x00, 0x00,  // 0000000000000000
	0x70, 0x1c,  // 0111000000011100
	0x70, 0x1c,  // 0111000000011100
	0x70, 0x1c,  // 0111000000011100
	0x78, 0x3c,  // 0111100000111100
	0x78, 0x3c,  // 0111100000111100
	0x78, 0x3c,  // 0111100000111100
	0x6c, 0x2c,  // 0110110000101100
	0x6c, 0x6c,  // 0110110001101100
	0x6c, 0x6c,  // 0110110001101100
	0x6c, 0x4c,  // 0110110001001100
	0x66, 0xcc,  // 0110011011001100
	0x66, 0xcc,  // 0110011011001100
	0x66, 0xcc,  // 0110011011001100
	0x63, 0x8c,  // 0110001110001100
	0x63, 0x8c,  // 0110001110001100
	0x63, 0x8c,  // 0110001110001100
	0x60, 0x0c,  // 0110000000001100
	0x60, 0x0c,  // 0110000000001100
	0x60, 0x0c,  // 0110000000001100
	0x60, 0x0c,  // 0110000000001100
	0x00, 0x00,  // 0000000000000000
	// m
	0x00, 0x00,  // 0000000000000000
	0x00, 0x00,  // 0000000000000000
	0x00, 0x00,  // 0000000000000000
	0x00, 0x00,  // 0000000000000000
	0x00, 0x00,  // 0000000000000000
	0x00, 0x00,  // 0000000000000000
	0x00, 0x00,  // 0000000000000000
	0x6f, 0xbe,  // 0110111110111110
	0x79, 0xe6,  // 0111100111100110
	0x71, 0xc6,  // 0111000111000110
	0x71, 0xc6,  // 0111000111000110
	0x61, 0x86,  // 0110000110000110
	0x61, 0x86,  // 0110000110000110
	0x61, 0x86,  // 0110000110000110
	0x61, 0x86,  // 0110000110000110
	0x61, 0x86,  // 0110000110000110
	0x61, 0x86,  // 0110000110000110
	0x61, 0x86,  // 0110000110000110
	0x61, 0x86,  // 0110000110000110
	0x61, 0x86,  // 0110000110000110
	0x61, 0x86,  // 0110000110000110
	0x00, 0x00,  // 0000000000000000
	// h
	0x00, 0x00,  // 0000000000000000
	0x30, 0x00,  // 0011000000000000
	0x30, 0x00,  // 0011000000000000
	0x30, 0x00,  // 0011000000000000
	0x30, 0x00,  // 0011000000000000
	0x30, 0x00,  // 0011000000000000
	0x31, 0xf0,  // 0011000111110000
	0x33, 0xf8,  // 0011001111111000
	0x37, 0x1c,  // 0011011100011100
	0x3c, 0x0c,  // 0011110000001100
	0x38, 0x0c,  // 0011100000001100
	0x38, 0x0c,  // 0011100000001100
	0x30, 0x0c,  // 0011000000001100
	0x30, 0x0c,  // 0011000000001100
	0x30, 0x0c,  // 0011000000001100
	0x30, 0x0c,  // 0011000000001100
	0x30, 0x0c,  // 0011000000001100
	0x30, 0x0c,  // 0011000000001100
	0x30, 0x0c,  // 0011000000001100
	0x30, 0x0c,  // 0011000000001100
	0x30, 0x0c,  // 0011000000001100
	0x00, 0x00,  // 0000000000000000
	// :
	0x00, 0x00,  // 0000000000000000
	0x00, 0x00,  // 0000000000000000
	0x00, 0x00,  // 0000000000000000
	0x00, 0x00,  // 0000000000000000
	0x00, 0x00,  // 0000000000000000
	0x00, 0x00,  // 0000000000000000
	0x00, 0x00,  // 0000000000000000
	0x07, 0x80,  // 0000011110000000
	0x07, 0x80,  // 0000011110000000
	0x03, 0x00,  // 0000001100000000
	0x00, 0x00,  // 0000000000000000
	0x00, 0x00,  // 0000000000000000
	0x00, 0x00,  // 0000000000000000
	0x00, 0x00,  // 0000000000000000
	0x00, 0x00,  // 0000000000000000
	0x00, 0x00,  // 0000000000000000
	0x00, 0x00,  // 0000000000000000
	0x03, 0x00,  // 0000001100000000
	0x07, 0x80,  // 0000011110000000
	0x07, 0x80,  // 0000011110000000
	0x03, 0x00,  // 0000001100000000
	0x00, 0x00   // 0000000000000000
};


#endif // DISPLAY_H