/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a':
			yyt1 = yyt5 = YYCURSOR;
			goto yy2;
		case 'b':
			yyt1 = yyt5 = YYCURSOR;
			goto yy3;
		case 'c':
			yyt1 = yyt5 = YYCURSOR;
			goto yy5;
		case 'd':
			yyt3 = yyt5 = NULL;
			yyt1 = yyt4 = YYCURSOR;
			goto yy6;
		default:
			yyt2 = yyt3 = NULL;
			yyt1 = yyt4 = YYCURSOR;
			goto yy1;
	}
yy1:
	yynmatch = 3;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[4] = yyt4;
	yypmatch[1] = YYCURSOR;
	yypmatch[5] = YYCURSOR;
	{}
yy2:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt5 = YYCURSOR;
			goto yy2;
		case 'b':
			yyt3 = YYCURSOR;
			goto yy7;
		case 'c':
			yyt5 = YYCURSOR;
			goto yy5;
		case 'd':
			yyt3 = yyt4 = YYCURSOR;
			goto yy6;
		default:
			yyt2 = yyt5;
			yyt3 = yyt4 = YYCURSOR;
			goto yy1;
	}
yy3:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'c': goto yy8;
		default: goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		yyt2 = yyt3 = NULL;
		yyt1 = yyt4 = YYCURSOR;
		goto yy1;
	} else {
		yyt3 = yyt4 = YYCURSOR;
		goto yy1;
	}
yy5:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt5 = YYCURSOR;
			goto yy2;
		case 'b':
			yyt2 = yyt5;
			yyt5 = YYCURSOR;
			goto yy3;
		case 'c':
			yyt5 = YYCURSOR;
			goto yy5;
		case 'd':
			yyt3 = yyt4 = YYCURSOR;
			goto yy6;
		default:
			yyt2 = yyt5;
			yyt3 = yyt4 = YYCURSOR;
			goto yy1;
	}
yy6:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'd': goto yy6;
		default:
			yyt2 = yyt5;
			goto yy1;
	}
yy7:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt5 = YYCURSOR;
			goto yy2;
		case 'b':
			yyt2 = yyt5;
			yyt5 = YYCURSOR;
			goto yy3;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy9;
		case 'd':
			yyt3 = yyt4 = YYCURSOR;
			goto yy6;
		default:
			yyt2 = yyt5;
			yyt3 = yyt4 = YYCURSOR;
			goto yy1;
	}
yy8:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'd': goto yy5;
		default: goto yy4;
	}
yy9:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt5 = YYCURSOR;
			goto yy2;
		case 'b':
			yyt5 = YYCURSOR;
			goto yy3;
		case 'c':
			yyt5 = YYCURSOR;
			goto yy5;
		case 'd':
			yyt5 = yyt3;
			goto yy5;
		default:
			yyt3 = yyt4 = YYCURSOR;
			goto yy1;
	}
}

captures/posix/repetition/68.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
captures/posix/repetition/68.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
captures/posix/repetition/68.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]