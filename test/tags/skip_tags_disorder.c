/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --eager-skip

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch (yych) {
		case 'b':
			++YYCURSOR;
			goto yy2;
		default: goto yy1;
	}
yy1:
	{}
yy2:
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'c': goto yy1;
		default: goto yy6;
	}
yy3:
	yych = *YYCURSOR;
	switch (yych) {
		case 'c':
			++YYCURSOR;
			goto yy7;
		default: goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	goto yy1;
yy5:
	YYMARKER = YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
yy6:
	++YYCURSOR;
	switch (yych) {
		case 'b': goto yy5;
		case 'c': goto yy7;
		default: goto yy3;
	}
yy7:
	{}
}

tags/skip_tags_disorder.re:4:5: warning: rule matches empty string [-Wmatch-empty-string]