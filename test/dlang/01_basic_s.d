/* Generated by re2c */
#line 1 "dlang/01_basic_s.re"
// re2d $INPUT -o $OUTPUT -s
module main;

bool lex(const char *s) {
    size_t cursor;
    
#line 10 "dlang/01_basic_s.d"
{
	char yych;
	yych = s[cursor];
	if (yych <= '0') goto yy1;
	if (yych <= '9') goto yy2;
yy1:
	++cursor;
#line 14 "dlang/01_basic_s.re"
	{ return false; }
#line 20 "dlang/01_basic_s.d"
yy2:
	++cursor;
	yych = s[cursor];
	if (yych <= '/') goto yy3;
	if (yych <= '9') goto yy2;
yy3:
#line 13 "dlang/01_basic_s.re"
	{ return true; }
#line 29 "dlang/01_basic_s.d"
}
#line 15 "dlang/01_basic_s.re"

}

void main() {
    assert(lex("1234"));
}
