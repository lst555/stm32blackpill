#include "resources.h"

namespace lst {

const uint16_t sine[] {
    0x7ff, 0x86a, 0x8d5, 0x93f, 0x9a9, 0xa11, 0xa78, 0xadd, 0xb40, 0xba1,
    0xbff, 0xc5a, 0xcb2, 0xd08, 0xd59, 0xda7, 0xdf1, 0xe36, 0xe77, 0xeb4,
    0xeec, 0xf1f, 0xf4d, 0xf77, 0xf9a, 0xfb9, 0xfd2, 0xfe5, 0xff3, 0xffc,
    0xfff, 0xffc, 0xff3, 0xfe5, 0xfd2, 0xfb9, 0xf9a, 0xf77, 0xf4d, 0xf1f,
    0xeec, 0xeb4, 0xe77, 0xe36, 0xdf1, 0xda7, 0xd59, 0xd08, 0xcb2, 0xc5a,
    0xbff, 0xba1, 0xb40, 0xadd, 0xa78, 0xa11, 0x9a9, 0x93f, 0x8d5, 0x86a,
    0x7ff, 0x794, 0x729, 0x6bf, 0x655, 0x5ed, 0x586, 0x521, 0x4be, 0x45d,
    0x3ff, 0x3a4, 0x34c, 0x2f6, 0x2a5, 0x257, 0x20d, 0x1c8, 0x187, 0x14a,
    0x112, 0x0df, 0x0b1, 0x087, 0x064, 0x045, 0x02c, 0x019, 0x00b, 0x002,
    0x000, 0x002, 0x00b, 0x019, 0x02c, 0x045, 0x064, 0x087, 0x0b1, 0x0df,
    0x112, 0x14a, 0x187, 0x1c8, 0x20d, 0x257, 0x2a5, 0x2f6, 0x34c, 0x3a4,
    0x3ff, 0x45d, 0x4be, 0x521, 0x586, 0x5ed, 0x655, 0x6bf, 0x729, 0x794
};

const uint8_t sinebuffer[] = {128, 131, 134, 137, 140, 143, 146, 149, 152, 155, 158, 161, 164, 167, 170, 173, 176, 179, 182, 185, 187, 190, 193, 195, 198, 201, 203, 206, 208, 211, 213, 215, 217, 220, 222, 224, 226, 228, 230, 231, 233, 235, 237, 238, 240, 241, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 252, 253, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 254, 254, 254, 253, 253, 252, 251, 251, 250, 249, 248, 247, 246, 244, 243, 242, 240, 239, 237, 236, 234, 232, 231, 229, 227, 225, 223, 221, 218, 216, 214, 212, 209, 207, 204, 202, 199, 197, 194, 191, 189, 186, 183, 180, 178, 175, 172, 169, 166, 163, 160, 157, 154, 151, 148, 145, 141, 138, 135, 132, 129, 126, 123, 120, 117, 114, 110, 107, 104, 101, 98, 95, 92, 89, 86, 83, 80, 77, 75, 72, 69, 66, 64, 61, 58, 56, 53, 51, 48, 46, 43, 41, 39, 37, 34, 32, 30, 28, 26, 24, 23, 21, 19, 18, 16, 15, 13, 12, 11, 9, 8, 7, 6, 5, 4, 4, 3, 2, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 3, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 14, 15, 17, 18, 20, 22, 24, 25, 27, 29, 31, 33, 35, 38, 40, 42, 44, 47, 49, 52, 54, 57, 60, 62, 65, 68, 70, 73, 76, 79, 82, 85, 88, 91, 94, 97, 100, 103, 106, 109, 112, 115, 118, 121, 124};
const uint8_t sawubuffer[] = {128, 224, 44, 0, 80, 173, 255, 163, 29, 126, 222, 14, 1, 79, 171, 255, 100, 27, 124, 220, 0, 3, 77, 170, 255, 36, 26, 123, 219, 0, 5, 75, 168, 255, 0, 24, 121, 217, 6, 7, 74, 166, 255, 30, 22, 120, 215, 20, 11, 72, 165, 255, 149, 20, 118, 213, 37, 15, 70, 163, 255, 255, 19, 116, 211, 57, 19, 69, 161, 255, 128, 17, 115, 210, 77, 25, 67, 160, 255, 29, 15, 113, 208, 96, 31, 65, 158, 254, 210, 13, 112, 206, 115, 38, 63, 156, 253, 255, 12, 110, 204, 132, 46, 62, 155, 252, 2, 10, 108, 202, 149, 56, 60, 153, 251, 245, 9, 107, 201, 163, 66, 58, 151, 249, 96, 7, 105, 199, 177, 78, 56, 150, 248, 159, 6, 104, 197, 189, 92, 54, 148, 246, 10, 4, 102, 195, 199, 106, 53, 147, 245, 253, 3, 100, 193, 209, 123, 51, 145, 243, 0, 2, 99, 192, 217, 140, 49, 143, 242, 45, 1, 97, 190, 224, 159, 47, 142, 240, 226, 0, 95, 188, 230, 178, 45, 140, 238, 127, 0, 94, 186, 236, 198, 44, 139, 236, 0, 0, 92, 185, 240, 218, 42, 137, 235, 106, 0, 90, 183, 244, 235, 40, 135, 233, 225, 0, 89, 181, 248, 249, 38, 134, 231, 255, 0, 87, 180, 250, 255, 36, 132, 229, 219, 0, 85, 178, 252, 255, 35, 131, 228, 155, 0, 84, 176, 254, 241, 33, 129, 226, 92, 0, 82, 175, 255, 211, 31, 128};
const uint8_t trianglebuffer[] = {128, 220, 255, 212, 117, 29, 1, 49, 144, 229, 254, 205, 112, 29, 0, 42, 129, 215, 255, 229, 154, 66, 9, 6, 58, 139, 214, 253, 243, 189, 115, 46, 6, 4, 40, 100, 166, 220, 250, 252, 228, 185, 132, 81, 39, 12, 0, 4, 21, 47, 78, 111, 142, 170, 195, 214, 229, 239, 246, 251, 253, 254, 255, 255, 255, 255, 255, 255, 254, 252, 249, 243, 234, 222, 205, 183, 157, 127, 94, 62, 33, 11, 1, 4, 24, 59, 106, 159, 208, 243, 255, 239, 195, 133, 68, 18, 0, 21, 78, 153, 220, 254, 239, 179, 97, 26, 0, 32, 109, 196, 250, 243, 176, 83, 13, 6, 66, 161, 238, 251, 191, 94, 16, 5, 68, 168, 243, 247, 178, 77, 8, 12, 87, 187, 250, 239, 161, 64, 4, 17, 94, 189, 249, 242, 172, 79, 12, 5, 59, 146, 223, 255, 229, 158, 76, 16, 1, 35, 102, 177, 234, 255, 237, 187, 122, 60, 16, 0, 12, 47, 96, 149, 196, 231, 251, 254, 244, 222, 193, 161, 128, 98, 72, 50, 33, 21, 12, 6, 3, 1, 0, 0, 0, 0, 0, 0, 1, 2, 4, 9, 16, 26, 41, 60, 85, 113, 144, 177, 208, 234, 251, 255, 243, 216, 174, 123, 70, 27, 3, 5, 35, 89, 155, 215, 251, 249, 209, 140, 66, 12, 2, 41, 116, 197, 249, 246, 189, 101, 26, 0, 40, 126, 213, 255, 226, 143, 50, 1, 26, 111, 206, 254, 226, 138, 43, 0, 35, 128};
const uint8_t squarebuffer[] = {128, 130, 132, 134, 136, 138, 140, 142, 144, 146, 148, 151, 153, 155, 157, 159, 162, 164, 166, 168, 171, 173, 175, 178, 180, 182, 185, 187, 189, 192, 194, 196, 199, 201, 203, 205, 207, 209, 210, 211, 212, 212, 212, 211, 209, 206, 201, 195, 186, 174, 160, 141, 119, 94, 69, 48, 44, 73, 145, 212, 114, 127, 73, 209, 148, 204, 211, 63, 212, 64, 68, 151, 202, 212, 198, 174, 148, 124, 104, 88, 74, 64, 57, 51, 47, 45, 43, 43, 43, 43, 44, 45, 47, 49, 51, 53, 55, 57, 60, 62, 64, 67, 69, 72, 74, 76, 79, 81, 83, 86, 88, 90, 92, 95, 97, 99, 101, 103, 105, 108, 110, 112, 114, 116, 118, 120, 122, 124, 126, 129, 131, 133, 135, 137, 139, 141, 143, 145, 147, 150, 152, 154, 156, 158, 160, 163, 165, 167, 169, 172, 174, 176, 179, 181, 183, 186, 188, 191, 193, 195, 198, 200, 202, 204, 206, 208, 210, 211, 212, 212, 212, 212, 210, 208, 204, 198, 191, 181, 167, 151, 131, 107, 81, 57, 43, 53, 104, 187, 191, 43, 192, 44, 51, 107, 46, 182, 128, 141, 43, 110, 182, 211, 207, 186, 161, 136, 114, 95, 81, 69, 60, 54, 49, 46, 44, 43, 43, 43, 44, 45, 46, 48, 50, 52, 54, 56, 59, 61, 63, 66, 68, 70, 73, 75, 77, 80, 82, 84, 87, 89, 91, 93, 96, 98, 100, 102, 104, 107, 109, 111, 113, 115, 117, 119, 121, 123, 125, 128};
const uint32_t osc_inc[] = {594573365, 598881888, 603221633, 607592826, 611995694, 616430467, 620897376, 625396655, 629928537, 634493259, 639091058, 643722176, 648386852, 653085330, 657817856, 662584675, 667386037, 672222191, 677093390, 681999888, 686941940, 691919805, 696933741, 701984010, 707070876, 712194603, 717355458, 722553712, 727789634, 733063497, 738375578, 743726152, 749115498, 754543898, 760011634, 765518991, 771066257, 776653721, 782281674, 787950410, 793660223, 799411413, 805204277, 811039119, 816916243, 822835955, 828798563, 834804379, 840853716, 846946889, 853084215, 859266015, 865492611, 871764327, 878081491, 884444431, 890853480, 897308972, 903811242, 910360631, 916957479, 923602131, 930294933, 937036234, 943826385, 950665740, 957554655, 964493491, 971482609, 978522372, 985613149, 992755308, 999949222, 1007195266, 1014493818, 1021845259, 1029249971, 1036708340, 1044220756, 1051787610, 1059409297, 1067086213, 1074818760, 1082607340, 1090452359, 1098354226, 1106313354, 1114330156, 1122405052, 1130538462, 1138730809, 1146982522, 1155294030, 1163665767, 1172098169, 1180591675, 1189146729};

}
