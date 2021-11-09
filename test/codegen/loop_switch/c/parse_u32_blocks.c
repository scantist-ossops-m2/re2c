/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --loop-switch
#include <stdint.h>
#include <limits.h>
#include <assert.h>

static const uint64_t ERROR = ~0lu;
enum YYCONDTYPE {
};


template<int BASE> static void adddgt(uint64_t &u, unsigned int d)
{
    u = u * BASE + d;
    if (u > UINT32_MAX) u = ERROR;
}

static uint64_t parse_u32(const char *s)
{
    const char *YYMARKER;
    uint64_t u = 0;

    
{
	char yych;
	unsigned int yystate = 1;
	for (;;) {
		switch (yystate) {
		case 1:
			yych = *s;
			++s;
			switch (yych) {
			case '0':
				yystate = 4;
				continue;
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
				yystate = 6;
				continue;
			default:
				yystate = 2;
				continue;
			}
		case 2:
			yystate = 3;
			continue;
		case 3:
			{ return ERROR; }
		case 4:
			YYMARKER = s;
			yych = *s;
			switch (yych) {
			case 'B':
			case 'b':
				++s;
				yystate = 8;
				continue;
			case 'X':
			case 'x':
				++s;
				yystate = 10;
				continue;
			default:
				yystate = 5;
				continue;
			}
		case 5:
			{ goto oct; }
		case 6:
			yystate = 7;
			continue;
		case 7:
			s -= 1;
			{ goto dec; }
		case 8:
			yych = *s;
			switch (yych) {
			case '0':
			case '1':
				++s;
				yystate = 11;
				continue;
			default:
				yystate = 9;
				continue;
			}
		case 9:
			s = YYMARKER;
			yystate = 5;
			continue;
		case 10:
			yych = *s;
			switch (yych) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
				++s;
				yystate = 13;
				continue;
			default:
				yystate = 9;
				continue;
			}
		case 11:
			yystate = 12;
			continue;
		case 12:
			s -= 1;
			{ goto bin; }
		case 13:
			yystate = 14;
			continue;
		case 14:
			s -= 1;
			{ goto hex; }
		}
	}
}

bin:
    
{
	char yych;
	unsigned int yystate = 16;
	for (;;) {
		switch (yystate) {
		case 16:
			yych = *s;
			++s;
			switch (yych) {
			case 0x00:
				yystate = 17;
				continue;
			case '0':
			case '1':
				yystate = 21;
				continue;
			default:
				yystate = 19;
				continue;
			}
		case 17:
			yystate = 18;
			continue;
		case 18:
			{ return u; }
		case 19:
			yystate = 20;
			continue;
		case 20:
			{ return ERROR; }
		case 21:
			yystate = 22;
			continue;
		case 22:
			{ adddgt<2>(u, s[-1] - '0'); goto bin; }
		}
	}
}

oct:
    
{
	char yych;
	unsigned int yystate = 24;
	for (;;) {
		switch (yystate) {
		case 24:
			yych = *s;
			++s;
			switch (yych) {
			case 0x00:
				yystate = 25;
				continue;
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
				yystate = 29;
				continue;
			default:
				yystate = 27;
				continue;
			}
		case 25:
			yystate = 26;
			continue;
		case 26:
			{ return u; }
		case 27:
			yystate = 28;
			continue;
		case 28:
			{ return ERROR; }
		case 29:
			yystate = 30;
			continue;
		case 30:
			{ adddgt<8>(u, s[-1] - '0'); goto oct; }
		}
	}
}

dec:
    
{
	char yych;
	unsigned int yystate = 32;
	for (;;) {
		switch (yystate) {
		case 32:
			yych = *s;
			++s;
			switch (yych) {
			case 0x00:
				yystate = 33;
				continue;
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
				yystate = 37;
				continue;
			default:
				yystate = 35;
				continue;
			}
		case 33:
			yystate = 34;
			continue;
		case 34:
			{ return u; }
		case 35:
			yystate = 36;
			continue;
		case 36:
			{ return ERROR; }
		case 37:
			yystate = 38;
			continue;
		case 38:
			{ adddgt<10>(u, s[-1] - '0'); goto dec; }
		}
	}
}

hex:
    
{
	char yych;
	unsigned int yystate = 40;
	for (;;) {
		switch (yystate) {
		case 40:
			yych = *s;
			++s;
			switch (yych) {
			case 0x00:
				yystate = 41;
				continue;
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
				yystate = 45;
				continue;
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
				yystate = 47;
				continue;
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
				yystate = 49;
				continue;
			default:
				yystate = 43;
				continue;
			}
		case 41:
			yystate = 42;
			continue;
		case 42:
			{ return u; }
		case 43:
			yystate = 44;
			continue;
		case 44:
			{ return ERROR; }
		case 45:
			yystate = 46;
			continue;
		case 46:
			{ adddgt<16>(u, s[-1] - '0');      goto hex; }
		case 47:
			yystate = 48;
			continue;
		case 48:
			{ adddgt<16>(u, s[-1] - 'A' + 10); goto hex; }
		case 49:
			yystate = 50;
			continue;
		case 50:
			{ adddgt<16>(u, s[-1] - 'a' + 10); goto hex; }
		}
	}
}

}

int main()
{
    assert(parse_u32("1234567890") == 1234567890);
    assert(parse_u32("0b1101") == 13);
    assert(parse_u32("0x7Fe") == 2046);
    assert(parse_u32("0644") == 420);
    assert(parse_u32("9999999999") == ERROR);
    assert(parse_u32("") == ERROR);
    return 0;
}