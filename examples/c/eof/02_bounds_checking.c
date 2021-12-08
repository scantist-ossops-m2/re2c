/* Generated by re2c */
#line 1 "c/eof/02_bounds_checking.re"
// re2c $INPUT -o $OUTPUT
#include <assert.h>
#include <stdlib.h>
#include <string.h>

#line 9 "c/eof/02_bounds_checking.c"
#define YYMAXFILL 1
#line 6 "c/eof/02_bounds_checking.re"


static int lex(const char *str, unsigned int len) {
    // Make a copy of the string with YYMAXFILL zeroes at the end.
    char *buf = (char*) malloc(len + YYMAXFILL);
    memcpy(buf, str, len);
    memset(buf + len, 0, YYMAXFILL);

    const char *YYCURSOR = buf, *YYLIMIT = buf + len + YYMAXFILL;
    int count = 0;

    for (;;) {
#line 24 "c/eof/02_bounds_checking.c"
{
	char yych;
	if (YYLIMIT <= YYCURSOR) return -1;
	yych = *YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy2;
	case ' ':	goto yy6;
	case '\'':	goto yy9;
	default:	goto yy4;
	}
yy2:
	++YYCURSOR;
#line 23 "c/eof/02_bounds_checking.re"
	{ if (YYCURSOR + YYMAXFILL - 1 != YYLIMIT) count = -1; break; }
#line 39 "c/eof/02_bounds_checking.c"
yy4:
	++YYCURSOR;
#line 22 "c/eof/02_bounds_checking.re"
	{ count = -1; break; }
#line 44 "c/eof/02_bounds_checking.c"
yy6:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) return -1;
	yych = *YYCURSOR;
	switch (yych) {
	case ' ':	goto yy6;
	default:	goto yy8;
	}
yy8:
#line 25 "c/eof/02_bounds_checking.re"
	{ continue; }
#line 56 "c/eof/02_bounds_checking.c"
yy9:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) return -1;
	yych = *YYCURSOR;
	switch (yych) {
	case '\'':	goto yy11;
	case '\\':	goto yy13;
	default:	goto yy9;
	}
yy11:
	++YYCURSOR;
#line 24 "c/eof/02_bounds_checking.re"
	{ ++count; continue; }
#line 70 "c/eof/02_bounds_checking.c"
yy13:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) return -1;
	yych = *YYCURSOR;
	goto yy9;
}
#line 26 "c/eof/02_bounds_checking.re"
}

    free(buf);
    return count;
}

#define TEST(s, r) assert(lex(s, sizeof(s) - 1) == r)
int main() {
    TEST("", 0);
    TEST("'qu\0tes' 'are' 'fine: \\'' ", 3);
    TEST("'unterminated\\'", -1);
    return 0;
}
