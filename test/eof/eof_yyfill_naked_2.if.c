/* Generated by re2c */




	switch (YYGETSTATE()) {
	default: goto yy0;
	case 0: 
		if (YYLIMIT <= YYCURSOR) goto yyeof0;
		goto yyFillLabel0;
	case 1: 
		if (YYLIMIT <= YYCURSOR) goto yyeof1;
		goto yyFillLabel1;
	case 2: 
		if (YYLIMIT <= YYCURSOR) goto yyeof2;
		goto yyFillLabel2;
	case 3: 
		if (YYLIMIT <= YYCURSOR) goto yyeof3;
		goto yyFillLabel3;
	}
yy0:
yyFillLabel0:
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy4;
	default:
		if (YYLIMIT <= YYCURSOR) {
			YYSETSTATE(0);
			fill();
yyeof0:
			goto yyeofrule2;
		}
		goto yy2;
	}
yy2:
	++YYCURSOR;
	{ return FAIL; }
yy4:
	++YYCURSOR;
	{ return OK; }
yyeofrule2:
	{ return EOF; }




yyFillLabel1:
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy10;
	default:
		if (YYLIMIT <= YYCURSOR) {
			YYSETSTATE(1);
			fill();
yyeof1:
			goto yyeofrule3;
		}
		goto yy8;
	}
yy8:
	++YYCURSOR;
	{ return FAIL; }
yy10:
	++YYCURSOR;
	{ return OK; }
yyeofrule3:
	{ return EOF; }




yyFillLabel2:
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy16;
	default:
		if (YYLIMIT <= YYCURSOR) {
			YYSETSTATE(2);
			fill();
yyeof2:
			goto yyeofrule4;
		}
		goto yy14;
	}
yy14:
	++YYCURSOR;
	{ return FAIL; }
yy16:
	++YYCURSOR;
	{ return OK; }
yyeofrule4:
	{ return EOF; }




yyFillLabel3:
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy22;
	default:
		if (YYLIMIT <= YYCURSOR) {
			YYSETSTATE(3);
			fill();
yyeof3:
			goto yyeofrule5;
		}
		goto yy20;
	}
yy20:
	++YYCURSOR;
	{ return FAIL; }
yy22:
	++YYCURSOR;
	{ return OK; }
yyeofrule5:
	{ return EOF; }

