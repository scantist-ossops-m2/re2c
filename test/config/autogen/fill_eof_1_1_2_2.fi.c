/* Generated by re2c */
// re2c:eof = 0;
// re2c:define:YYFILL = "fill(@@)";
// re2c:define:YYFILL@len = need;
// re2c:yyfill:check = 1;


	switch (YYGETSTATE()) {
	default: goto yy0;
	case 0: 
		if (YYLIMIT <= YYCURSOR) goto yyeof0;
		goto yyFillLabel0;
	}
yy0:
yyFillLabel0:
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy4;
	default:
		if (YYLIMIT <= YYCURSOR) {
			YYSETSTATE(0);
			fill(@@)();
yyeof0:
			goto yyeofrule1;
		}
		goto yy2;
	}
yy2:
	++YYCURSOR;
	{ x }
yy4:
	++YYCURSOR;
	{ a }
yyeofrule1:
	{ eof }

