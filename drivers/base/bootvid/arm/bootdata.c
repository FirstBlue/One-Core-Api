#include "precomp.h"

USHORT AT_Initialization[] =
{
    0x10 | CMD_STREAM_READ,     // Major Command = 0x10. Minor Command = 0x08.
    0x3DA,                      // Index Status 1 Register Port Address

    //
    // This Stream performs a USHORT Array Indexed Write at port 0x3C0
    //
    0x20 | 0x01,                // Major Command = 0x20. Minor Command = 0x01.
    0x3C0,                      // Attribute Controller Data Register
    0x10,                       // Loop Count = 16 (Number of Pallette Entries)
    0x0,                        // Index to select (Index = 0, palettes)
    0x00,                       // Palette 0
    0x01,                       // Palette 1
    0x02,                       // Palette 2
    0x03,                       // Palette 3
    0x04,                       // Palette 4
    0x05,                       // Palette 5
    0x06,                       // Palette 6
    0x07,                       // Palette 7
    0x08,                       // Palette 8
    0x09,                       // Palette 9
    0x0A,                       // Palette 10
    0x0B,                       // Palette 11
    0x0C,                       // Palette 12
    0x0D,                       // Palette 13
    0x0E,                       // Palette 14
    0x0F,                       // Palette 15

    //
    // This Stream performs a UCHAR READ of port 0x3DA
    //
    0x10 | CMD_STREAM_READ,     // Major Command = 0x10. Minor Command = 0x08.
    0x3DA,                      // Index Status 1 Register Port Address

    //
    // This Stream performs a UCHAR WRITE of value 0x20 at port 0x3C0
    //
    0x10 | CMD_STREAM_WRITE,    // Major Command = 0x10. Minor Command = 0x00.
    0x3C0,                      // Attribute Controller Data Register
    0x20,                       // Set Palette Address Source

    //
    // End of Stream Marker
    //
    0x0                         // End of command stream
};

//
// The character generator is in natural order, top of char is first element.
//
UCHAR FontData[256 * BOOTCHAR_HEIGHT] =
{
    0x00, 0x00, 0x3C, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x3C, 0x00, 0x00, 0x00, // 0
    0x00, 0x00, 0x3C, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x3C, 0x00, 0x00, 0x00, // 13
    0x00, 0x00, 0x3C, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x3C, 0x00, 0x00, 0x00, // 26
    0x18, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 39
    0x14, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 52
    0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 65
    0x24, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 78
    0x10, 0x28, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 91
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, // 104
    0x14, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 117
    0x28, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 130
    0x10, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 143
    0x10, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 156
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, // 169
    0x00, 0x00, 0x3C, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x3C, 0x00, 0x00, 0x00, // 182
    0x00, 0x00, 0x3C, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x3C, 0x00, 0x00, 0x00, // 195
    0x00, 0x00, 0x3C, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x3C, 0x00, 0x00, 0x00, // 208
    0x00, 0x00, 0x3C, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x3C, 0x00, 0x00, 0x00, // 221
    0x00, 0x00, 0x3C, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x3C, 0x00, 0x00, 0x00, // 234
    0x00, 0x00, 0x3C, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x3C, 0x00, 0x00, 0x00, // 247
    0x00, 0x00, 0x3C, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x3C, 0x00, 0x00, 0x00, // 260
    0x00, 0x00, 0x3C, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x3C, 0x00, 0x00, 0x00, // 273
    0x00, 0x00, 0x3C, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x3C, 0x00, 0x00, 0x00, // 286
    0x00, 0x00, 0x3C, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x3C, 0x00, 0x00, 0x00, // 299
    0x00, 0x00, 0x3C, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x3C, 0x00, 0x00, 0x00, // 312
    0x00, 0x00, 0x3C, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x3C, 0x00, 0x00, 0x00, // 325
    0x00, 0x00, 0x3C, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x3C, 0x00, 0x00, 0x00, // 338
    0x00, 0x00, 0x3C, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x3C, 0x00, 0x00, 0x00, // 351
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 364
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 377
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 390
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 403
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 416
    0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, // 429
    0x24, 0x24, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 442
    0x00, 0x14, 0x14, 0x14, 0x7F, 0x28, 0xFE, 0x50, 0x50, 0x50, 0x00, 0x00, 0x00, // 455
    0x10, 0x3C, 0x50, 0x50, 0x70, 0x38, 0x1C, 0x14, 0x14, 0x78, 0x10, 0x00, 0x00, // 468
    0x00, 0x61, 0x92, 0x94, 0x68, 0x18, 0x16, 0x29, 0x49, 0x86, 0x00, 0x00, 0x00, // 481
    0x00, 0x18, 0x24, 0x24, 0x38, 0x71, 0x89, 0x8E, 0xC6, 0x7E, 0x00, 0x00, 0x00, // 494
    0x10, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 507
    0x06, 0x08, 0x10, 0x30, 0x20, 0x20, 0x20, 0x20, 0x30, 0x10, 0x08, 0x06, 0x00, // 520
    0x60, 0x10, 0x08, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x08, 0x10, 0x60, 0x00, // 533
    0x00, 0x10, 0x52, 0x24, 0x3C, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 546
    0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0xFE, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, // 559
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x10, 0x20, 0x00, // 572
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 585
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x00, 0x00, 0x00, // 598
    0x01, 0x02, 0x02, 0x04, 0x08, 0x08, 0x10, 0x10, 0x20, 0x40, 0x40, 0x80, 0x00, // 611
    0x00, 0x18, 0x24, 0x42, 0x42, 0x42, 0x42, 0x42, 0x24, 0x3C, 0x00, 0x00, 0x00, // 624
    0x00, 0x30, 0xD0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xFE, 0x00, 0x00, 0x00, // 637
    0x00, 0x78, 0x04, 0x04, 0x04, 0x08, 0x10, 0x20, 0x40, 0x7C, 0x00, 0x00, 0x00, // 650
    0x00, 0x78, 0x04, 0x04, 0x08, 0x30, 0x0C, 0x04, 0x04, 0x78, 0x00, 0x00, 0x00, // 663
    0x00, 0x08, 0x18, 0x28, 0x28, 0x48, 0x88, 0xFC, 0x08, 0x08, 0x00, 0x00, 0x00, // 676
    0x00, 0x3C, 0x20, 0x20, 0x38, 0x04, 0x04, 0x04, 0x04, 0x38, 0x00, 0x00, 0x00, // 689
    0x00, 0x1C, 0x20, 0x40, 0x5C, 0x62, 0x42, 0x42, 0x22, 0x1C, 0x00, 0x00, 0x00, // 702
    0x00, 0x7E, 0x02, 0x04, 0x08, 0x08, 0x10, 0x10, 0x20, 0x20, 0x00, 0x00, 0x00, // 715
    0x00, 0x3C, 0x42, 0x42, 0x24, 0x3C, 0x46, 0x42, 0x42, 0x3C, 0x00, 0x00, 0x00, // 728
    0x00, 0x38, 0x44, 0x42, 0x42, 0x46, 0x3A, 0x02, 0x04, 0x38, 0x00, 0x00, 0x00, // 741
    0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, // 754
    0x00, 0x00, 0x00, 0x30, 0x30, 0x00, 0x00, 0x00, 0x30, 0x30, 0x10, 0x20, 0x00, // 767
    0x00, 0x00, 0x00, 0x02, 0x0C, 0x10, 0x60, 0x10, 0x0C, 0x02, 0x00, 0x00, 0x00, // 780
    0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, // 793
    0x00, 0x00, 0x00, 0x40, 0x30, 0x08, 0x06, 0x08, 0x30, 0x40, 0x00, 0x00, 0x00, // 806
    0x00, 0x7C, 0x42, 0x02, 0x04, 0x08, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, // 819
    0x00, 0x3C, 0x62, 0xDE, 0xB2, 0xA2, 0xA6, 0x9B, 0x44, 0x3C, 0x00, 0x00, 0x00, // 832
    0x00, 0x00, 0x18, 0x18, 0x24, 0x24, 0x24, 0x7E, 0x42, 0x81, 0x00, 0x00, 0x00, // 845
    0x00, 0x00, 0x7C, 0x42, 0x42, 0x7C, 0x42, 0x42, 0x42, 0x7C, 0x00, 0x00, 0x00, // 858
    0x00, 0x00, 0x3E, 0x40, 0x80, 0x80, 0x80, 0x80, 0x40, 0x3E, 0x00, 0x00, 0x00, // 871
    0x00, 0x00, 0x78, 0x44, 0x42, 0x42, 0x42, 0x42, 0x44, 0x78, 0x00, 0x00, 0x00, // 884
    0x00, 0x00, 0x7E, 0x40, 0x40, 0x40, 0x7C, 0x40, 0x40, 0x7E, 0x00, 0x00, 0x00, // 897
    0x00, 0x00, 0x7E, 0x40, 0x40, 0x40, 0x7C, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, // 910
    0x00, 0x00, 0x3E, 0x40, 0x80, 0x80, 0x8E, 0x82, 0x42, 0x3E, 0x00, 0x00, 0x00, // 923
    0x00, 0x00, 0x42, 0x42, 0x42, 0x7E, 0x42, 0x42, 0x42, 0x42, 0x00, 0x00, 0x00, // 936
    0x00, 0x00, 0x7C, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x7C, 0x00, 0x00, 0x00, // 949
    0x00, 0x00, 0x3C, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x78, 0x00, 0x00, 0x00, // 962
    0x00, 0x00, 0x42, 0x44, 0x48, 0x70, 0x50, 0x48, 0x44, 0x42, 0x00, 0x00, 0x00, // 975
    0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7E, 0x00, 0x00, 0x00, // 988
    0x00, 0x00, 0xC6, 0xC6, 0xAA, 0xAA, 0xAA, 0x92, 0x82, 0x82, 0x00, 0x00, 0x00, // 1001
    0x00, 0x00, 0x42, 0x62, 0x52, 0x52, 0x4A, 0x4A, 0x46, 0x42, 0x00, 0x00, 0x00, // 1014
    0x00, 0x00, 0x38, 0x44, 0x82, 0x82, 0x82, 0x82, 0x44, 0x38, 0x00, 0x00, 0x00, // 1027
    0x00, 0x00, 0x7C, 0x42, 0x42, 0x42, 0x7C, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, // 1040
    0x00, 0x00, 0x38, 0x44, 0x82, 0x82, 0x82, 0x82, 0x44, 0x38, 0x06, 0x03, 0x00, // 1053
    0x00, 0x00, 0x78, 0x44, 0x44, 0x44, 0x78, 0x48, 0x44, 0x42, 0x00, 0x00, 0x00, // 1066
    0x00, 0x00, 0x3E, 0x40, 0x40, 0x38, 0x04, 0x02, 0x02, 0x7C, 0x00, 0x00, 0x00, // 1079
    0x00, 0x00, 0xFE, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, // 1092
    0x00, 0x00, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3C, 0x00, 0x00, 0x00, // 1105
    0x00, 0x00, 0x81, 0x42, 0x42, 0x44, 0x24, 0x28, 0x38, 0x10, 0x00, 0x00, 0x00, // 1118
    0x00, 0x00, 0x81, 0x81, 0x92, 0x5A, 0x5A, 0x6A, 0x66, 0x24, 0x00, 0x00, 0x00, // 1131
    0x00, 0x00, 0x81, 0x42, 0x24, 0x18, 0x18, 0x24, 0x42, 0x81, 0x00, 0x00, 0x00, // 1144
    0x00, 0x00, 0x82, 0x44, 0x28, 0x28, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, // 1157
    0x00, 0x00, 0xFE, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0xFE, 0x00, 0x00, 0x00, // 1170
    0x1E, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1E, 0x00, // 1183
    0x80, 0x40, 0x40, 0x20, 0x10, 0x10, 0x08, 0x08, 0x04, 0x02, 0x02, 0x01, 0x00, // 1196
    0x78, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x78, 0x00, // 1209
    0x00, 0x08, 0x08, 0x18, 0x14, 0x24, 0x24, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, // 1222
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, // 1235
    0x10, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 1248
    0x00, 0x00, 0x00, 0x38, 0x04, 0x04, 0x3C, 0x44, 0x44, 0x3E, 0x00, 0x00, 0x00, // 1261
    0x40, 0x40, 0x40, 0x5C, 0x62, 0x42, 0x42, 0x42, 0x62, 0x5C, 0x00, 0x00, 0x00, // 1274
    0x00, 0x00, 0x00, 0x1E, 0x20, 0x40, 0x40, 0x40, 0x20, 0x1E, 0x00, 0x00, 0x00, // 1287
    0x02, 0x02, 0x02, 0x3A, 0x46, 0x42, 0x42, 0x42, 0x46, 0x3A, 0x00, 0x00, 0x00, // 1300
    0x00, 0x00, 0x00, 0x3C, 0x22, 0x42, 0x7E, 0x40, 0x40, 0x3E, 0x00, 0x00, 0x00, // 1313
    0x1E, 0x20, 0x20, 0xFE, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, // 1326
    0x00, 0x00, 0x00, 0x3A, 0x46, 0x42, 0x42, 0x42, 0x46, 0x3A, 0x02, 0x02, 0x3C, // 1339
    0x40, 0x40, 0x40, 0x5C, 0x62, 0x42, 0x42, 0x42, 0x42, 0x42, 0x00, 0x00, 0x00, // 1352
    0x18, 0x18, 0x00, 0x78, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, // 1365
    0x18, 0x18, 0x00, 0x78, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x70, // 1378
    0x40, 0x40, 0x40, 0x44, 0x48, 0x50, 0x60, 0x50, 0x48, 0x44, 0x00, 0x00, 0x00, // 1391
    0x78, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, // 1404
    0x00, 0x00, 0x00, 0xB6, 0xDA, 0x92, 0x92, 0x92, 0x92, 0x92, 0x00, 0x00, 0x00, // 1417
    0x00, 0x00, 0x00, 0x5C, 0x62, 0x42, 0x42, 0x42, 0x42, 0x42, 0x00, 0x00, 0x00, // 1430
    0x00, 0x00, 0x00, 0x3C, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3C, 0x00, 0x00, 0x00, // 1443
    0x00, 0x00, 0x00, 0x5C, 0x62, 0x42, 0x42, 0x42, 0x62, 0x5C, 0x40, 0x40, 0x40, // 1456
    0x00, 0x00, 0x00, 0x3A, 0x46, 0x42, 0x42, 0x42, 0x46, 0x3A, 0x02, 0x02, 0x02, // 1469
    0x00, 0x00, 0x00, 0x5C, 0x64, 0x40, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, // 1482
    0x00, 0x00, 0x00, 0x3C, 0x40, 0x60, 0x18, 0x04, 0x04, 0x78, 0x00, 0x00, 0x00, // 1495
    0x00, 0x00, 0x20, 0xFC, 0x20, 0x20, 0x20, 0x20, 0x20, 0x1C, 0x00, 0x00, 0x00, // 1508
    0x00, 0x00, 0x00, 0x42, 0x42, 0x42, 0x42, 0x42, 0x46, 0x3A, 0x00, 0x00, 0x00, // 1521
    0x00, 0x00, 0x00, 0x82, 0x44, 0x44, 0x44, 0x28, 0x28, 0x10, 0x00, 0x00, 0x00, // 1534
    0x00, 0x00, 0x00, 0x81, 0x91, 0x5A, 0x5A, 0x6A, 0x24, 0x24, 0x00, 0x00, 0x00, // 1547
    0x00, 0x00, 0x00, 0x42, 0x24, 0x18, 0x18, 0x18, 0x24, 0x42, 0x00, 0x00, 0x00, // 1560
    0x00, 0x00, 0x00, 0x81, 0x42, 0x42, 0x24, 0x24, 0x18, 0x18, 0x10, 0x30, 0xE0, // 1573
    0x00, 0x00, 0x00, 0x7E, 0x02, 0x04, 0x08, 0x10, 0x20, 0x7E, 0x00, 0x00, 0x00, // 1586
    0x1C, 0x10, 0x10, 0x10, 0x10, 0x60, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0C, 0x00, // 1599
    0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, // 1612
    0x30, 0x08, 0x08, 0x08, 0x08, 0x06, 0x08, 0x08, 0x08, 0x08, 0x08, 0x30, 0x00, // 1625
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x71, 0x8E, 0x00, 0x00, 0x00, 0x00, 0x00, // 1638
    0x00, 0x00, 0x3C, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x3C, 0x00, 0x00, 0x00, // 1651
    0x00, 0x00, 0x3E, 0x40, 0x80, 0x80, 0x80, 0x80, 0x40, 0x3E, 0x04, 0x02, 0x06, // 1664
    0x00, 0x24, 0x00, 0x42, 0x42, 0x42, 0x42, 0x42, 0x46, 0x3A, 0x00, 0x00, 0x00, // 1677
    0x08, 0x10, 0x00, 0x3C, 0x22, 0x42, 0x7E, 0x40, 0x40, 0x3E, 0x00, 0x00, 0x00, // 1690
    0x18, 0x24, 0x00, 0x38, 0x04, 0x04, 0x3C, 0x44, 0x44, 0x3E, 0x00, 0x00, 0x00, // 1703
    0x00, 0x24, 0x00, 0x38, 0x04, 0x04, 0x3C, 0x44, 0x44, 0x3E, 0x00, 0x00, 0x00, // 1716
    0x10, 0x08, 0x00, 0x38, 0x04, 0x04, 0x3C, 0x44, 0x44, 0x3E, 0x00, 0x00, 0x00, // 1729
    0x10, 0x28, 0x10, 0x38, 0x04, 0x04, 0x3C, 0x44, 0x44, 0x3E, 0x00, 0x00, 0x00, // 1742
    0x00, 0x00, 0x00, 0x1E, 0x20, 0x40, 0x40, 0x40, 0x20, 0x1E, 0x08, 0x04, 0x0C, // 1755
    0x18, 0x24, 0x00, 0x3C, 0x22, 0x42, 0x7E, 0x40, 0x40, 0x3E, 0x00, 0x00, 0x00, // 1768
    0x00, 0x12, 0x00, 0x3C, 0x22, 0x42, 0x7E, 0x40, 0x40, 0x3E, 0x00, 0x00, 0x00, // 1781
    0x10, 0x08, 0x00, 0x3C, 0x22, 0x42, 0x7E, 0x40, 0x40, 0x3E, 0x00, 0x00, 0x00, // 1794
    0x00, 0x24, 0x00, 0x78, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, // 1807
    0x18, 0x24, 0x00, 0x78, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, // 1820
    0x10, 0x08, 0x00, 0x78, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, // 1833
    0x24, 0x00, 0x18, 0x18, 0x24, 0x24, 0x24, 0x7E, 0x42, 0x81, 0x00, 0x00, 0x00, // 1846
    0x10, 0x28, 0x10, 0x28, 0x28, 0x24, 0x44, 0x7E, 0x42, 0x81, 0x00, 0x00, 0x00, // 1859
    0x08, 0x10, 0x7E, 0x40, 0x40, 0x40, 0x7C, 0x40, 0x40, 0x7E, 0x00, 0x00, 0x00, // 1872
    0x00, 0x00, 0x00, 0xFC, 0x12, 0x12, 0x7E, 0x90, 0x90, 0x6E, 0x00, 0x00, 0x00, // 1885
    0x00, 0x00, 0x0F, 0x18, 0x18, 0x28, 0x2E, 0x78, 0x48, 0x8F, 0x00, 0x00, 0x00, // 1898
    0x18, 0x24, 0x00, 0x3C, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3C, 0x00, 0x00, 0x00, // 1911
    0x00, 0x24, 0x00, 0x3C, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3C, 0x00, 0x00, 0x00, // 1924
    0x20, 0x10, 0x00, 0x3C, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3C, 0x00, 0x00, 0x00, // 1937
    0x18, 0x24, 0x00, 0x42, 0x42, 0x42, 0x42, 0x42, 0x46, 0x3A, 0x00, 0x00, 0x00, // 1950
    0x20, 0x10, 0x00, 0x42, 0x42, 0x42, 0x42, 0x42, 0x46, 0x3A, 0x00, 0x00, 0x00, // 1963
    0x00, 0x24, 0x00, 0x81, 0x42, 0x42, 0x24, 0x24, 0x18, 0x18, 0x10, 0x30, 0xE0, // 1976
    0x24, 0x00, 0x38, 0x44, 0x82, 0x82, 0x82, 0x82, 0x44, 0x38, 0x00, 0x00, 0x00, // 1989
    0x24, 0x00, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3C, 0x00, 0x00, 0x00, // 2002
    0x00, 0x08, 0x1C, 0x28, 0x48, 0x48, 0x48, 0x68, 0x1C, 0x08, 0x00, 0x00, 0x00, // 2015
    0x00, 0x0E, 0x10, 0x10, 0x10, 0x38, 0x10, 0x10, 0x20, 0x3E, 0x00, 0x00, 0x00, // 2028
    0x00, 0x81, 0x42, 0x24, 0x18, 0x7C, 0x10, 0x7C, 0x10, 0x10, 0x00, 0x00, 0x00, // 2041
    0x00, 0xE0, 0x90, 0x90, 0xE0, 0x96, 0xBC, 0x94, 0x92, 0x9E, 0x00, 0x00, 0x00, // 2054
    0x0E, 0x10, 0x10, 0x3C, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xE0, // 2067
    0x08, 0x10, 0x00, 0x38, 0x04, 0x04, 0x3C, 0x44, 0x44, 0x3E, 0x00, 0x00, 0x00, // 2080
    0x08, 0x10, 0x00, 0x78, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, // 2093
    0x08, 0x10, 0x00, 0x3C, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3C, 0x00, 0x00, 0x00, // 2106
    0x08, 0x10, 0x00, 0x42, 0x42, 0x42, 0x42, 0x42, 0x46, 0x3A, 0x00, 0x00, 0x00, // 2119
    0x14, 0x28, 0x00, 0x5C, 0x62, 0x42, 0x42, 0x42, 0x42, 0x42, 0x00, 0x00, 0x00, // 2132
    0x14, 0x28, 0x42, 0x62, 0x52, 0x52, 0x4A, 0x4A, 0x46, 0x42, 0x00, 0x00, 0x00, // 2145
    0x00, 0x78, 0x08, 0x38, 0x48, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 2158
    0x00, 0x38, 0x44, 0x44, 0x44, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 2171
    0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x08, 0x10, 0x20, 0x40, 0x42, 0x3E, 0x00, // 2184
    0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, // 2197
    0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, // 2210
    0x00, 0xC4, 0x48, 0x48, 0x50, 0x37, 0x21, 0x43, 0x44, 0x87, 0x00, 0x00, 0x00, // 2223
    0x00, 0xC4, 0x48, 0x48, 0x50, 0x22, 0x26, 0x4A, 0x4F, 0x82, 0x00, 0x00, 0x00, // 2236
    0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, // 2249
    0x00, 0x00, 0x00, 0x00, 0x12, 0x24, 0x48, 0x24, 0x12, 0x00, 0x00, 0x00, 0x00, // 2262
    0x00, 0x00, 0x00, 0x00, 0x48, 0x24, 0x12, 0x24, 0x48, 0x00, 0x00, 0x00, 0x00, // 2275
    0x94, 0x00, 0x00, 0x94, 0x00, 0x94, 0x00, 0x00, 0x94, 0x00, 0x94, 0x00, 0x00, // 2288
    0x49, 0x94, 0x00, 0x49, 0x94, 0x49, 0x00, 0x94, 0x49, 0x94, 0x49, 0x00, 0x94, // 2301
    0xFF, 0x94, 0x94, 0xFF, 0x94, 0xFF, 0x94, 0x94, 0xFF, 0x94, 0xFF, 0x94, 0x94, // 2314
    0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, // 2327
    0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xF0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, // 2340
    0x10, 0x10, 0x10, 0x10, 0x10, 0xF0, 0x10, 0xF0, 0x10, 0x10, 0x10, 0x10, 0x10, // 2353
    0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0xF4, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, // 2366
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, // 2379
    0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x10, 0xF0, 0x10, 0x10, 0x10, 0x10, 0x10, // 2392
    0x14, 0x14, 0x14, 0x14, 0x14, 0xF4, 0x04, 0xF4, 0x14, 0x14, 0x14, 0x14, 0x14, // 2405
    0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, // 2418
    0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x04, 0xF4, 0x14, 0x14, 0x14, 0x14, 0x14, // 2431
    0x14, 0x14, 0x14, 0x14, 0x14, 0xF4, 0x04, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, // 2444
    0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 2457
    0x10, 0x10, 0x10, 0x10, 0x10, 0xF0, 0x10, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, // 2470
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, // 2483
    0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 2496
    0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 2509
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, // 2522
    0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, // 2535
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 2548
    0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xFF, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, // 2561
    0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x10, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, // 2574
    0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x17, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, // 2587
    0x14, 0x14, 0x14, 0x14, 0x14, 0x17, 0x10, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, // 2600
    0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x10, 0x17, 0x14, 0x14, 0x14, 0x14, 0x14, // 2613
    0x14, 0x14, 0x14, 0x14, 0x14, 0xF7, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, // 2626
    0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xF7, 0x14, 0x14, 0x14, 0x14, 0x14, // 2639
    0x14, 0x14, 0x14, 0x14, 0x14, 0x17, 0x10, 0x17, 0x14, 0x14, 0x14, 0x14, 0x14, // 2652
    0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, // 2665
    0x14, 0x14, 0x14, 0x14, 0x14, 0xF7, 0x00, 0xF7, 0x14, 0x14, 0x14, 0x14, 0x14, // 2678
    0x10, 0x10, 0x10, 0x10, 0x10, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, // 2691
    0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 2704
    0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x10, 0x10, 0x10, 0x10, 0x10, // 2717
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, // 2730
    0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 2743
    0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x10, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, // 2756
    0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x10, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, // 2769
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, // 2782
    0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0xFF, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, // 2795
    0x10, 0x10, 0x10, 0x10, 0x10, 0xFF, 0x10, 0xFF, 0x10, 0x10, 0x10, 0x10, 0x10, // 2808
    0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 2821
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, // 2834
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // 2847
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // 2860
    0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, // 2873
    0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, // 2886
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 2899
    0x00, 0x00, 0x00, 0x31, 0x49, 0x86, 0x84, 0x84, 0x8A, 0x71, 0x00, 0x00, 0x00, // 2912
    0x38, 0x48, 0x48, 0x50, 0x50, 0x58, 0x44, 0x42, 0x42, 0x5C, 0x00, 0x00, 0x00, // 2925
    0x00, 0x00, 0x3F, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, // 2938
    0x00, 0x00, 0x00, 0x7F, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x00, 0x00, 0x00, // 2951
    0x00, 0x00, 0xFF, 0x40, 0x20, 0x10, 0x10, 0x20, 0x40, 0xFF, 0x00, 0x00, 0x00, // 2964
    0x00, 0x00, 0x00, 0x7F, 0x84, 0x84, 0x84, 0x84, 0x84, 0x78, 0x00, 0x00, 0x00, // 2977
    0x00, 0x00, 0x00, 0x42, 0x42, 0x42, 0x42, 0x42, 0x66, 0x5A, 0x40, 0x40, 0x40, // 2990
    0x00, 0x00, 0x00, 0xFE, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, // 3003
    0x00, 0x00, 0x10, 0x7C, 0x92, 0x92, 0x92, 0x92, 0x7C, 0x10, 0x00, 0x00, 0x00, // 3016
    0x00, 0x00, 0x38, 0x44, 0x82, 0xBA, 0x82, 0x82, 0x44, 0x38, 0x00, 0x00, 0x00, // 3029
    0x00, 0x00, 0x7C, 0xC6, 0x82, 0x82, 0x82, 0x84, 0x44, 0xEE, 0x00, 0x00, 0x00, // 3042
    0x38, 0x40, 0x60, 0x18, 0x24, 0x42, 0x42, 0x42, 0x42, 0x3C, 0x00, 0x00, 0x00, // 3055
    0x00, 0x00, 0x00, 0x00, 0x66, 0x99, 0x99, 0x99, 0x66, 0x00, 0x00, 0x00, 0x00, // 3068
    0x10, 0x10, 0x10, 0x7C, 0x92, 0x91, 0x91, 0x91, 0x92, 0x7C, 0x10, 0x10, 0x10, // 3081
    0x00, 0x00, 0x00, 0x1E, 0x20, 0x40, 0x7C, 0x40, 0x60, 0x1E, 0x00, 0x00, 0x00, // 3094
    0x00, 0x00, 0x00, 0x38, 0x44, 0x82, 0x82, 0x82, 0x82, 0x82, 0x00, 0x00, 0x00, // 3107
    0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x7E, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, // 3120
    0x00, 0x00, 0x00, 0x10, 0x10, 0xFE, 0x10, 0x10, 0x00, 0xFE, 0x00, 0x00, 0x00, // 3133
    0x00, 0x00, 0x40, 0x30, 0x08, 0x06, 0x08, 0x30, 0x40, 0x00, 0x7E, 0x00, 0x00, // 3146
    0x00, 0x00, 0x02, 0x0C, 0x10, 0x60, 0x10, 0x0C, 0x02, 0x00, 0x7E, 0x00, 0x00, // 3159
    0x0C, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, // 3172
    0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x60, // 3185
    0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, // 3198
    0x00, 0x00, 0x00, 0x00, 0x72, 0x4E, 0x00, 0x72, 0x4E, 0x00, 0x00, 0x00, 0x00, // 3211
    0x00, 0x10, 0x28, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 3224
    0x00, 0x00, 0x00, 0x00, 0x18, 0x3C, 0x3C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, // 3237
    0x00, 0x00, 0x00, 0x00, 0x18, 0x3C, 0x3C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, // 3250
    0x01, 0x01, 0x02, 0x02, 0x02, 0x04, 0x04, 0xC4, 0x28, 0x28, 0x18, 0x10, 0x00, // 3263
    0x00, 0x3C, 0x24, 0x24, 0x24, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 3276
    0x00, 0x3C, 0x04, 0x18, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 3289
    0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, // 3302
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00  // 3315
};