/* Generated by re2c */
#line 1 "encodings/unicode_group_Nd_x_encoding_policy_ignore.re"
// re2c $INPUT -o $OUTPUT -x --encoding-policy ignore
#include <stdio.h>
#include "utf16.h"
#define YYCTYPE unsigned short
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Nd:
	
#line 14 "encodings/unicode_group_Nd_x_encoding_policy_ignore.c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych <= 0x19CF) {
		if (yych <= 0x0C6F) {
			if (yych <= 0x09E5) {
				if (yych <= 0x06EF) {
					if (yych <= '9') {
						if (yych >= '0') goto yy3;
					} else {
						if (yych <= 0x065F) goto yy1;
						if (yych <= 0x0669) goto yy3;
					}
				} else {
					if (yych <= 0x07C9) {
						if (yych <= 0x06F9) goto yy3;
						if (yych >= 0x07C0) goto yy3;
					} else {
						if (yych <= 0x0965) goto yy1;
						if (yych <= 0x096F) goto yy3;
					}
				}
			} else {
				if (yych <= 0x0AEF) {
					if (yych <= 0x0A65) {
						if (yych <= 0x09EF) goto yy3;
					} else {
						if (yych <= 0x0A6F) goto yy3;
						if (yych >= 0x0AE6) goto yy3;
					}
				} else {
					if (yych <= 0x0BE5) {
						if (yych <= 0x0B65) goto yy1;
						if (yych <= 0x0B6F) goto yy3;
					} else {
						if (yych <= 0x0BEF) goto yy3;
						if (yych >= 0x0C66) goto yy3;
					}
				}
			}
		} else {
			if (yych <= 0x0F1F) {
				if (yych <= 0x0DE5) {
					if (yych <= 0x0CEF) {
						if (yych >= 0x0CE6) goto yy3;
					} else {
						if (yych <= 0x0D65) goto yy1;
						if (yych <= 0x0D6F) goto yy3;
					}
				} else {
					if (yych <= 0x0E59) {
						if (yych <= 0x0DEF) goto yy3;
						if (yych >= 0x0E50) goto yy3;
					} else {
						if (yych <= 0x0ECF) goto yy1;
						if (yych <= 0x0ED9) goto yy3;
					}
				}
			} else {
				if (yych <= 0x17DF) {
					if (yych <= 0x1049) {
						if (yych <= 0x0F29) goto yy3;
						if (yych >= 0x1040) goto yy3;
					} else {
						if (yych <= 0x108F) goto yy1;
						if (yych <= 0x1099) goto yy3;
					}
				} else {
					if (yych <= 0x1819) {
						if (yych <= 0x17E9) goto yy3;
						if (yych >= 0x1810) goto yy3;
					} else {
						if (yych <= 0x1945) goto yy1;
						if (yych <= 0x194F) goto yy3;
					}
				}
			}
		}
	} else {
		if (yych <= 0xA9F9) {
			if (yych <= 0x1C49) {
				if (yych <= 0x1A99) {
					if (yych <= 0x1A7F) {
						if (yych <= 0x19D9) goto yy3;
					} else {
						if (yych <= 0x1A89) goto yy3;
						if (yych >= 0x1A90) goto yy3;
					}
				} else {
					if (yych <= 0x1BAF) {
						if (yych <= 0x1B4F) goto yy1;
						if (yych <= 0x1B59) goto yy3;
					} else {
						if (yych <= 0x1BB9) goto yy3;
						if (yych >= 0x1C40) goto yy3;
					}
				}
			} else {
				if (yych <= 0xA8D9) {
					if (yych <= 0xA61F) {
						if (yych <= 0x1C4F) goto yy1;
						if (yych <= 0x1C59) goto yy3;
					} else {
						if (yych <= 0xA629) goto yy3;
						if (yych >= 0xA8D0) goto yy3;
					}
				} else {
					if (yych <= 0xA9CF) {
						if (yych <= 0xA8FF) goto yy1;
						if (yych <= 0xA909) goto yy3;
					} else {
						if (yych <= 0xA9D9) goto yy3;
						if (yych >= 0xA9F0) goto yy3;
					}
				}
			}
		} else {
			if (yych <= 0xD806) {
				if (yych <= 0xD800) {
					if (yych <= 0xAA59) {
						if (yych >= 0xAA50) goto yy3;
					} else {
						if (yych <= 0xABEF) goto yy1;
						if (yych <= 0xABF9) goto yy3;
					}
				} else {
					if (yych <= 0xD803) {
						if (yych <= 0xD801) goto yy4;
						if (yych >= 0xD803) goto yy5;
					} else {
						if (yych <= 0xD804) goto yy6;
						if (yych <= 0xD805) goto yy7;
						goto yy8;
					}
				}
			} else {
				if (yych <= 0xD837) {
					if (yych <= 0xD81A) {
						if (yych <= 0xD807) goto yy9;
						if (yych >= 0xD81A) goto yy10;
					} else {
						if (yych == 0xD835) goto yy11;
					}
				} else {
					if (yych <= 0xD83A) {
						if (yych <= 0xD838) goto yy12;
						if (yych >= 0xD83A) goto yy13;
					} else {
						if (yych <= 0xFF0F) goto yy1;
						if (yych <= 0xFF19) goto yy3;
					}
				}
			}
		}
	}
yy1:
	++YYCURSOR;
yy2:
#line 14 "encodings/unicode_group_Nd_x_encoding_policy_ignore.re"
	{ return YYCURSOR == limit; }
#line 175 "encodings/unicode_group_Nd_x_encoding_policy_ignore.c"
yy3:
	++YYCURSOR;
#line 13 "encodings/unicode_group_Nd_x_encoding_policy_ignore.re"
	{ goto Nd; }
#line 180 "encodings/unicode_group_Nd_x_encoding_policy_ignore.c"
yy4:
	yych = *++YYCURSOR;
	if (yych <= 0xDC9F) goto yy2;
	if (yych <= 0xDCA9) goto yy3;
	goto yy2;
yy5:
	yych = *++YYCURSOR;
	if (yych <= 0xDD2F) goto yy2;
	if (yych <= 0xDD39) goto yy3;
	goto yy2;
yy6:
	yych = *++YYCURSOR;
	if (yych <= 0xDD35) {
		if (yych <= 0xDC6F) {
			if (yych <= 0xDC65) goto yy2;
			goto yy3;
		} else {
			if (yych <= 0xDCEF) goto yy2;
			if (yych <= 0xDCF9) goto yy3;
			goto yy2;
		}
	} else {
		if (yych <= 0xDDD9) {
			if (yych <= 0xDD3F) goto yy3;
			if (yych <= 0xDDCF) goto yy2;
			goto yy3;
		} else {
			if (yych <= 0xDEEF) goto yy2;
			if (yych <= 0xDEF9) goto yy3;
			goto yy2;
		}
	}
yy7:
	yych = *++YYCURSOR;
	if (yych <= 0xDE4F) {
		if (yych <= 0xDC59) {
			if (yych <= 0xDC4F) goto yy2;
			goto yy3;
		} else {
			if (yych <= 0xDCCF) goto yy2;
			if (yych <= 0xDCD9) goto yy3;
			goto yy2;
		}
	} else {
		if (yych <= 0xDEC9) {
			if (yych <= 0xDE59) goto yy3;
			if (yych <= 0xDEBF) goto yy2;
			goto yy3;
		} else {
			if (yych <= 0xDF2F) goto yy2;
			if (yych <= 0xDF39) goto yy3;
			goto yy2;
		}
	}
yy8:
	yych = *++YYCURSOR;
	if (yych <= 0xDCDF) goto yy2;
	if (yych <= 0xDCE9) goto yy3;
	goto yy2;
yy9:
	yych = *++YYCURSOR;
	if (yych <= 0xDD4F) {
		if (yych <= 0xDC4F) goto yy2;
		if (yych <= 0xDC59) goto yy3;
		goto yy2;
	} else {
		if (yych <= 0xDD59) goto yy3;
		if (yych <= 0xDD9F) goto yy2;
		if (yych <= 0xDDA9) goto yy3;
		goto yy2;
	}
yy10:
	yych = *++YYCURSOR;
	if (yych <= 0xDE5F) goto yy2;
	if (yych <= 0xDE69) goto yy3;
	if (yych <= 0xDF4F) goto yy2;
	if (yych <= 0xDF59) goto yy3;
	goto yy2;
yy11:
	yych = *++YYCURSOR;
	if (yych <= 0xDFCD) goto yy2;
	if (yych <= 0xDFFF) goto yy3;
	goto yy2;
yy12:
	yych = *++YYCURSOR;
	if (yych <= 0xDD3F) goto yy2;
	if (yych <= 0xDD49) goto yy3;
	if (yych <= 0xDEEF) goto yy2;
	if (yych <= 0xDEF9) goto yy3;
	goto yy2;
yy13:
	yych = *++YYCURSOR;
	if (yych <= 0xDD4F) goto yy2;
	if (yych <= 0xDD59) goto yy3;
	goto yy2;
}
#line 15 "encodings/unicode_group_Nd_x_encoding_policy_ignore.re"

}
static const unsigned int chars_Nd [] = {0x30,0x39,  0x660,0x669,  0x6f0,0x6f9,  0x7c0,0x7c9,  0x966,0x96f,  0x9e6,0x9ef,  0xa66,0xa6f,  0xae6,0xaef,  0xb66,0xb6f,  0xbe6,0xbef,  0xc66,0xc6f,  0xce6,0xcef,  0xd66,0xd6f,  0xde6,0xdef,  0xe50,0xe59,  0xed0,0xed9,  0xf20,0xf29,  0x1040,0x1049,  0x1090,0x1099,  0x17e0,0x17e9,  0x1810,0x1819,  0x1946,0x194f,  0x19d0,0x19d9,  0x1a80,0x1a89,  0x1a90,0x1a99,  0x1b50,0x1b59,  0x1bb0,0x1bb9,  0x1c40,0x1c49,  0x1c50,0x1c59,  0xa620,0xa629,  0xa8d0,0xa8d9,  0xa900,0xa909,  0xa9d0,0xa9d9,  0xa9f0,0xa9f9,  0xaa50,0xaa59,  0xabf0,0xabf9,  0xff10,0xff19,  0x104a0,0x104a9,  0x10d30,0x10d39,  0x11066,0x1106f,  0x110f0,0x110f9,  0x11136,0x1113f,  0x111d0,0x111d9,  0x112f0,0x112f9,  0x11450,0x11459,  0x114d0,0x114d9,  0x11650,0x11659,  0x116c0,0x116c9,  0x11730,0x11739,  0x118e0,0x118e9,  0x11c50,0x11c59,  0x11d50,0x11d59,  0x11da0,0x11da9,  0x16a60,0x16a69,  0x16b50,0x16b59,  0x1d7ce,0x1d7ff,  0x1e140,0x1e149,  0x1e2f0,0x1e2f9,  0x1e950,0x1e959,  0x0,0x0};
static unsigned int encode_utf16 (const unsigned int * ranges, unsigned int ranges_count, unsigned int * s)
{
	unsigned int * const s_start = s;
	for (unsigned int i = 0; i < ranges_count; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
		{
			if (j <= re2c::utf16::MAX_1WORD_RUNE)
				*s++ = j;
			else
			{
				*s++ = re2c::utf16::lead_surr(j);
				*s++ = re2c::utf16::trail_surr(j);
			}
		}
	return s - s_start;
}

int main ()
{
	unsigned int * buffer_Nd = new unsigned int [1262];
	YYCTYPE * s = (YYCTYPE *) buffer_Nd;
	unsigned int buffer_len = encode_utf16 (chars_Nd, sizeof (chars_Nd) / sizeof (unsigned int), buffer_Nd);
	/* convert 32-bit code units to YYCTYPE; reuse the same buffer */
	for (unsigned int i = 0; i < buffer_len; ++i) s[i] = buffer_Nd[i];
	if (!scan (s, s + buffer_len))
		printf("test 'Nd' failed\n");
	delete [] buffer_Nd;
	return 0;
}