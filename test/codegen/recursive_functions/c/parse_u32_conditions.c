/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -ci --recursive-functions
#include <stdint.h>
#include <stdlib.h>
#include <limits.h>
#include <assert.h>

static const uint64_t ERROR = ~0lu;
enum YYCONDTYPE {
	yycinit = 1,
	yycbin = 11,
	yycdec = 15,
	yychex = 19,
	yycoct = 25
};


struct State
{
    const char* cur;
    const char* mar;
    YYCONDTYPE cond;
    uint64_t num;
};

template<int BASE> static void adddgt(uint64_t &u, unsigned int d)
{
    u = u * BASE + d;
    if (u > UINT32_MAX) u = ERROR;
}


uint64_t yy1(State& st);
uint64_t yy2(State& st);
uint64_t yy3(State& st);
uint64_t yy4(State& st);
uint64_t yy5(State& st);
uint64_t yy6(State& st);
uint64_t yy7(State& st);
uint64_t yy8(State& st);
uint64_t yy9(State& st);
uint64_t yy10(State& st);
uint64_t yyfninit(State& st);
uint64_t yy11(State& st);
uint64_t yy12(State& st);
uint64_t yy13(State& st);
uint64_t yy14(State& st);
uint64_t yyfnbin(State& st);
uint64_t yy15(State& st);
uint64_t yy16(State& st);
uint64_t yy17(State& st);
uint64_t yy18(State& st);
uint64_t yyfndec(State& st);
uint64_t yy19(State& st);
uint64_t yy20(State& st);
uint64_t yy21(State& st);
uint64_t yy22(State& st);
uint64_t yy23(State& st);
uint64_t yy24(State& st);
uint64_t yyfnhex(State& st);
uint64_t yy25(State& st);
uint64_t yy26(State& st);
uint64_t yy27(State& st);
uint64_t yy28(State& st);
uint64_t yyfnoct(State& st);
uint64_t yy0(State& st);
uint64_t lex(State& st);

uint64_t yy1(State& st) {
	char yych = *st.cur++;
	switch (yych) {
		case '0': return yy3(st);
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': return yy5(st);
		default: return yy2(st);
	}
}

uint64_t yy2(State& st) {
	return ERROR;
}

uint64_t yy3(State& st) {
	char yych = *(st.mar = st.cur);
	switch (yych) {
		case 'B':
		case 'b':
			++st.cur;
			return yy6(st);
		case 'X':
		case 'x':
			++st.cur;
			return yy8(st);
		default: return yy4(st);
	}
}

uint64_t yy4(State& st) {
	st.cond = yycoct;
	return yyfnoct(st);
}

uint64_t yy5(State& st) {
	st.cur -= 1;
	st.cond = yycdec;
	return yyfndec(st);
}

uint64_t yy6(State& st) {
	char yych = *st.cur;
	switch (yych) {
		case '0':
		case '1':
			++st.cur;
			return yy9(st);
		default: return yy7(st);
	}
}

uint64_t yy7(State& st) {
	st.cur = st.mar;
	return yy4(st);
}

uint64_t yy8(State& st) {
	char yych = *st.cur;
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
			++st.cur;
			return yy10(st);
		default: return yy7(st);
	}
}

uint64_t yy9(State& st) {
	st.cur -= 1;
	st.cond = yycbin;
	return yyfnbin(st);
}

uint64_t yy10(State& st) {
	st.cur -= 1;
	st.cond = yychex;
	return yyfnhex(st);
}

uint64_t yyfninit(State& st) {
	return yy1(st);
}

uint64_t yy11(State& st) {
	char yych = *st.cur++;
	switch (yych) {
		case 0x00: return yy12(st);
		case '0':
		case '1': return yy14(st);
		default: return yy13(st);
	}
}

uint64_t yy12(State& st) {
	return st.num;
}

uint64_t yy13(State& st) {
	return ERROR;
}

uint64_t yy14(State& st) {
	adddgt<2> (st.num, st.cur[-1] - '0'); return yyfnbin(st);
}

uint64_t yyfnbin(State& st) {
	return yy11(st);
}

uint64_t yy15(State& st) {
	char yych = *st.cur++;
	switch (yych) {
		case 0x00: return yy16(st);
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': return yy18(st);
		default: return yy17(st);
	}
}

uint64_t yy16(State& st) {
	return st.num;
}

uint64_t yy17(State& st) {
	return ERROR;
}

uint64_t yy18(State& st) {
	adddgt<10>(st.num, st.cur[-1] - '0'); return yyfndec(st);
}

uint64_t yyfndec(State& st) {
	return yy15(st);
}

uint64_t yy19(State& st) {
	char yych = *st.cur++;
	switch (yych) {
		case 0x00: return yy20(st);
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': return yy22(st);
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F': return yy23(st);
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f': return yy24(st);
		default: return yy21(st);
	}
}

uint64_t yy20(State& st) {
	return st.num;
}

uint64_t yy21(State& st) {
	return ERROR;
}

uint64_t yy22(State& st) {
	adddgt<16>(st.num, st.cur[-1] - '0');      return lex(st);
}

uint64_t yy23(State& st) {
	adddgt<16>(st.num, st.cur[-1] - 'A' + 10); return lex(st);
}

uint64_t yy24(State& st) {
	adddgt<16>(st.num, st.cur[-1] - 'a' + 10); return lex(st);
}

uint64_t yyfnhex(State& st) {
	return yy19(st);
}

uint64_t yy25(State& st) {
	char yych = *st.cur++;
	switch (yych) {
		case 0x00: return yy26(st);
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7': return yy28(st);
		default: return yy27(st);
	}
}

uint64_t yy26(State& st) {
	return st.num;
}

uint64_t yy27(State& st) {
	return ERROR;
}

uint64_t yy28(State& st) {
	adddgt<8> (st.num, st.cur[-1] - '0'); return yyfnoct(st);
}

uint64_t yyfnoct(State& st) {
	return yy25(st);
}

uint64_t yy0(State& st) {
	switch (st.cond) {
		case yycinit: return yyfninit(st);
		case yycbin: return yyfnbin(st);
		case yycdec: return yyfndec(st);
		case yychex: return yyfnhex(st);
		case yycoct: return yyfnoct(st);
		default:
			abort();
	}
}

uint64_t lex(State& st) {
	return yy0(st);
}



static uint64_t parse_u32(const char *s)
{
    State st = {s, nullptr, yycinit, 0};
    return lex(st);
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
