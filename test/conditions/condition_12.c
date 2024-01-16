/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -cgif
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define	BSIZE	8192

enum ScanContition {
	EStateNormal,
	EStateComment,
	EStateSkiptoeol,
	EStateString
};


typedef struct Scanner
{
	FILE			    *fp;
	unsigned char	    *cur, *tok, *lim, *eof;
	unsigned char 	    buffer[BSIZE];
	unsigned char       yych;
	enum ScanContition  cond;
	int                 state;
} Scanner;

size_t fill(Scanner *s, size_t len)
{
	size_t got = ~0, cnt;

	if (!s->eof && s->lim - s->tok < len)
	{
		if (s->tok > s->buffer)
		{
			cnt = s->tok - s->buffer;
			memcpy(s->buffer, s->tok, s->lim - s->tok);
			s->tok -= cnt;
			s->cur -= cnt;
			s->lim -= cnt;
			cnt = &s->buffer[BSIZE] - s->lim;
		}
		else
		{
			cnt = BSIZE;
		}
		if ((got = fread(s->lim, 1, cnt, s->fp)) != cnt)
		{
			s->eof = &s->lim[got];
		}
		s->lim += got;
	}
	if (s->eof && s->cur + len > s->eof)
	{
		return ~0; /* not enough input data */
	}
	return got;
}

size_t init(Scanner *s)
{
	s->cur = s->tok = s->lim = s->buffer;
	s->eof = 0;
	s->cond = EStateNormal;
	s->state = -1;

	return fill(s, 0);
}

void fputl(const char *s, size_t len, FILE *stream)
{
	while(len-- > 0)
	{
		fputc(*s++, stream);
	}
}

void scan(Scanner *s)
{
	s->tok = s->cur;

	switch (s->state) {
		case 0: goto yyFillLabel0;
		case 1: goto yyFillLabel1;
		case 2: goto yyFillLabel2;
		case 3: goto yyFillLabel3;
		default: goto yy0;
	}

	for(;;)
	{
		s->tok = s->cur;

		{
			static const void* yyctable[4] = {
				&&yyc_Normal,
				&&yyc_Comment,
				&&yyc_Skiptoeol,
				&&yyc_String
			};
yy0:
			goto *yyctable[s->cond];
/* *********************************** */
yyc_Normal:
			if ((s->lim - s->cur) < 4) {
				s->state = 0;(0);
				if(fill(s, 4) == ~0) break;
			}
yyFillLabel0:
			s->yych = *s->cur;
			{
				static const void* yytarget[256] = {
					&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
					&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
					&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
					&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
					&&yy2, &&yy2, &&yy4, &&yy2, &&yy2, &&yy2, &&yy2, &&yy5,
					&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy6,
					&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
					&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy7,
					&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
					&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
					&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
					&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
					&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
					&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
					&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
					&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
					&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
					&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
					&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
					&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
					&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
					&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
					&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
					&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
					&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
					&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
					&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
					&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
					&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
					&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
					&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
					&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2
				};
				goto *yytarget[s->yych];
			}
yy2:
			++s->cur;
yy3:
			s->state = -1;(-1);
			fputc(s->cur[-1], stdout);
			continue;
yy4:
			++s->cur;
			s->state = -1;(-1);
			s->cond = EStateString;(EStateString);
			fputc(s->cur[-1], stdout);
			continue;
yy5:
			s->yych = *(s->tok = ++s->cur);
			if (s->yych == '"') goto yy8;
			if (s->yych == '\\') goto yy10;
			goto yy3;
yy6:
			s->yych = *++s->cur;
			if (s->yych == '*') goto yy11;
			if (s->yych == '/') goto yy12;
			goto yy3;
yy7:
			s->yych = *(s->tok = ++s->cur);
			if (s->yych == '?') goto yy13;
			goto yy3;
yy8:
			s->yych = *++s->cur;
			if (s->yych == '\'') goto yy14;
yy9:
			s->cur = s->tok;
			goto yy3;
yy10:
			s->yych = *++s->cur;
			if (s->yych == '"') goto yy8;
			goto yy9;
yy11:
			++s->cur;
			s->state = -1;(-1);
			s->cond = EStateComment;(EStateComment);
			goto yyc_Comment;
yy12:
			++s->cur;
			s->state = -1;(-1);
			s->cond = EStateSkiptoeol;(EStateSkiptoeol);
			goto yyc_Skiptoeol;
yy13:
			s->yych = *++s->cur;
			{
				static const void* yytarget[256] = {
					 &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,
					 &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,
					 &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,
					 &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,
					 &&yy9, &&yy15,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9, &&yy16,
					&&yy17, &&yy18,  &&yy9,  &&yy9,  &&yy9, &&yy19,  &&yy9, &&yy20,
					 &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,
					 &&yy9,  &&yy9,  &&yy9,  &&yy9, &&yy21, &&yy22, &&yy23,  &&yy9,
					 &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,
					 &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,
					 &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,
					 &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,
					 &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,
					 &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,
					 &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,
					 &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,
					 &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,
					 &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,
					 &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,
					 &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,
					 &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,
					 &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,
					 &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,
					 &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,
					 &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,
					 &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,
					 &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,
					 &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,
					 &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,
					 &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,
					 &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,
					 &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9,  &&yy9
				};
				goto *yytarget[s->yych];
			}
yy14:
			++s->cur;
			s->state = -1;(-1);
			fputl("'\"'", 3, stdout);
			continue;
yy15:
			++s->cur;
			s->state = -1;(-1);
			fputc('|', stdout);
			continue;
yy16:
			++s->cur;
			s->state = -1;(-1);
			fputc('^', stdout);
			continue;
yy17:
			++s->cur;
			s->state = -1;(-1);
			fputc('[', stdout);
			continue;
yy18:
			++s->cur;
			s->state = -1;(-1);
			fputc(']', stdout);
			continue;
yy19:
			++s->cur;
			s->state = -1;(-1);
			fputc('~', stdout);
			continue;
yy20:
			++s->cur;
			s->state = -1;(-1);
			fputc('\\', stdout);
			continue;
yy21:
			++s->cur;
			s->state = -1;(-1);
			fputc('{', stdout);
			continue;
yy22:
			++s->cur;
			s->state = -1;(-1);
			fputc('#', stdout);
			continue;
yy23:
			++s->cur;
			s->state = -1;(-1);
			fputc('}', stdout);
			continue;
/* *********************************** */
yyc_Comment:
			if ((s->lim - s->cur) < 2) {
				s->state = 1;(1);
				if(fill(s, 2) == ~0) break;
			}
yyFillLabel1:
			s->yych = *s->cur;
			if (s->yych == '*') goto yy26;
			++s->cur;
yy25:
			s->state = -1;(-1);
			goto yyc_Comment;
yy26:
			s->yych = *++s->cur;
			if (s->yych != '/') goto yy25;
			++s->cur;
			s->state = -1;(-1);
			s->cond = EStateNormal;(EStateNormal);
			goto yyc_Normal;
/* *********************************** */
yyc_Skiptoeol:
			if ((s->lim - s->cur) < 5) {
				s->state = 2;(2);
				if(fill(s, 5) == ~0) break;
			}
yyFillLabel2:
			s->yych = *s->cur;
			{
				static const void* yytarget[256] = {
					&&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28,
					&&yy28, &&yy28, &&yy30, &&yy28, &&yy28, &&yy31, &&yy28, &&yy28,
					&&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28,
					&&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28,
					&&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28,
					&&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28,
					&&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28,
					&&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy32,
					&&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28,
					&&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28,
					&&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28,
					&&yy28, &&yy28, &&yy28, &&yy28, &&yy33, &&yy28, &&yy28, &&yy28,
					&&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28,
					&&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28,
					&&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28,
					&&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28,
					&&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28,
					&&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28,
					&&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28,
					&&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28,
					&&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28,
					&&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28,
					&&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28,
					&&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28,
					&&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28,
					&&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28,
					&&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28,
					&&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28,
					&&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28,
					&&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28,
					&&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28,
					&&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28, &&yy28
				};
				goto *yytarget[s->yych];
			}
yy28:
			++s->cur;
yy29:
			s->state = -1;(-1);
			goto yyc_Skiptoeol;
yy30:
			++s->cur;
			s->state = -1;(-1);
			s->cond = EStateNormal;(EStateNormal);
			fputc('\n', stdout);
			continue;
yy31:
			s->yych = *++s->cur;
			if (s->yych == '\n') goto yy34;
			goto yy29;
yy32:
			s->yych = *(s->tok = ++s->cur);
			if (s->yych == '?') goto yy35;
			goto yy29;
yy33:
			s->yych = *(s->tok = ++s->cur);
			if (s->yych == '\n') goto yy37;
			if (s->yych == '\r') goto yy38;
			goto yy29;
yy34:
			++s->cur;
			s->state = -1;(-1);
			s->cond = EStateNormal;(EStateNormal);
			fputc('\r', stdout);
			fputc('\n', stdout);
			continue;
yy35:
			s->yych = *++s->cur;
			if (s->yych == '/') goto yy39;
yy36:
			s->cur = s->tok;
			goto yy29;
yy37:
			++s->cur;
			s->state = -1;(-1);
			goto yyc_Skiptoeol;
yy38:
			s->yych = *++s->cur;
			if (s->yych == '\n') goto yy37;
			goto yy36;
yy39:
			s->yych = *++s->cur;
			if (s->yych == '\n') goto yy40;
			if (s->yych == '\r') goto yy41;
			goto yy36;
yy40:
			++s->cur;
			s->state = -1;(-1);
			goto yyc_Skiptoeol;
yy41:
			s->yych = *++s->cur;
			if (s->yych == '\n') goto yy40;
			goto yy36;
/* *********************************** */
yyc_String:
			if ((s->lim - s->cur) < 2) {
				s->state = 3;(3);
				if(fill(s, 2) == ~0) break;
			}
yyFillLabel3:
			s->yych = *s->cur;
			if (s->yych == '"') goto yy44;
			if (s->yych == '\\') goto yy45;
			++s->cur;
yy43:
			s->state = -1;(-1);
			fputc(s->cur[-1], stdout);
			continue;
yy44:
			++s->cur;
			s->state = -1;(-1);
			s->cond = EStateNormal;(EStateNormal);
			fputc(s->cur[-1], stdout);
			continue;
yy45:
			s->yych = *++s->cur;
			if (s->yych == '\n') goto yy43;
			++s->cur;
			s->state = -1;(-1);
			fputl((const char*)s->cur-2, 2, stdout);
			continue;
		}

	}
}

int main(int argc, char **argv)
{
	Scanner in;

	if (argc != 2)
	{
		fprintf(stderr, "%s <file>\n", argv[0]);
		return 1;;
	}

	memset((char*) &in, 0, sizeof(in));

	if (!strcmp(argv[1], "-"))
	{
		in.fp = stdin;
	}
	else if ((in.fp = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "Cannot open file '%s'\n", argv[1]);
		return 1;
	}

	if (init(&in) > 0)
	{
 		scan(&in);
 	}

	if (in.fp != stdin)
	{
		fclose(in.fp);
	}
	return 0;
}
