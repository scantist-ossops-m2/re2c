/* Generated by re2c */
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/select.h>
#include <assert.h>

#define YYMAXFILL 19

static const size_t SIZE = 4096;

struct input_t {
  char buf[SIZE + YYMAXFILL];
  char *lim;
  char *cur;
  char *tok;
  char *mark;
  int state;
  unsigned yyaccept;
  char yych;
  FILE *file;

  input_t(FILE * file)
    : buf()
    , lim(buf + SIZE)
    , cur(lim)
    , tok(lim)
    , mark(lim)
    , state(0)
    , yyaccept(0)
    , yych(0)
    , file(file)
  {}

  bool fill()
  {
    const size_t free = (tok - buf) + SIZE - (lim - buf);
    if (free < 1) return false;
    const size_t prefix = (tok - buf);

    memmove(buf, tok, buf - tok + SIZE);
    lim -= prefix;
    cur -= prefix;
    tok -= prefix;
    mark -= prefix;
    size_t to_read = SIZE - (lim - buf);
    printf("> Reading input, can take up to %lu bytes\n", to_read);
    size_t bytes_read = fread(lim, 1, to_read, file);
    lim += bytes_read;
    lim[0] = 0;

    // simulate the END packet (can as well send a normal packet)
    if (feof(file)) ++lim;

    // quick make a copy of buffer with newlines replaced w/ _
    char b[40];
    snprintf(b, 40, "%s", buf);
    for(int i = 0; i < 40; i++) {
      if ('\n' == b[i]) { b[i] = '_'; }
    }
    printf("> Read %lu bytes from input, current buffer: >%.40s<\n", bytes_read, b);

    return true;
  }
};

enum status_t {
  OK,
  FAIL,
  NEED_MORE_INPUT,
  WHITESPACE,
  WORD,
  THING
};
const char * STATUSES[] = {
  "OK",
  "FAIL",
  "NEED_MORE_INPUT",
  "WHITESPACE",
  "WORD",
  "THING"
};

#define YYGETSTATE()  in.state
#define YYSETSTATE(s) in.state = s
#define YYFILL() do { \
  printf("< Returning for more input\n"); \
  return NEED_MORE_INPUT; \
} while (0)

static status_t lex(input_t &in)
{
switch (YYGETSTATE()) {
default: goto yy0;
case 0: goto yyFillLabel0;
case 1: goto yyFillLabel1;
case 2: goto yyFillLabel2;
case 3: goto yyFillLabel3;
case 4: goto yyFillLabel4;
case 5: goto yyFillLabel5;
case 6: goto yyFillLabel6;
case 7: goto yyFillLabel7;
case 8: goto yyFillLabel8;
case 9: goto yyFillLabel9;
case 10: goto yyFillLabel10;
case 11: goto yyFillLabel11;
case 12: goto yyFillLabel12;
case 13: goto yyFillLabel13;
case 14: goto yyFillLabel14;
case 15: goto yyFillLabel15;
case 16: goto yyFillLabel16;
case 17: goto yyFillLabel17;
case 18: goto yyFillLabel18;
case 19: goto yyFillLabel19;
case 20: goto yyFillLabel20;
}



yy0:
yyFillLabel0:
	in.yych = *in.cur;
	switch (in.yych) {
	case 0x00:
		if (in.lim <= in.cur) {
			YYSETSTATE(0);
			YYFILL ();
		}
		goto yy2;
	case '\n':
	case ' ':	goto yy6;
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy9;
	case 'T':	goto yy12;
	default:	goto yy4;
	}
yy2:
	++in.cur;
	{ printf("< EOF\n");                                return OK; }
yy4:
	++in.cur;
	{ printf("< Unexpected character >%c<\n", in.yych); return FAIL; }
yy6:
	++in.cur;
yyFillLabel1:
	in.yych = *in.cur;
	switch (in.yych) {
	case '\n':
	case ' ':	goto yy6;
	default:
		if (in.lim <= in.cur) {
			YYSETSTATE(1);
			YYFILL ();
		}
		goto yy8;
	}
yy8:
	{ printf("< whitespace\n");                         return WHITESPACE; }
yy9:
	++in.cur;
yyFillLabel2:
	in.yych = *in.cur;
yy10:
	switch (in.yych) {
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy9;
	default:
		if (in.lim <= in.cur) {
			YYSETSTATE(2);
			YYFILL ();
		}
		goto yy11;
	}
yy11:
	{ printf("< word\n");                               return WORD; }
yy12:
	++in.cur;
yyFillLabel3:
	in.yych = *in.cur;
	switch (in.yych) {
	case 0x00:
		if (in.lim <= in.cur) {
			YYSETSTATE(3);
			YYFILL ();
		}
		goto yy11;
	case 'H':	goto yy13;
	default:	goto yy10;
	}
yy13:
	++in.cur;
yyFillLabel4:
	in.yych = *in.cur;
	switch (in.yych) {
	case 0x00:
		if (in.lim <= in.cur) {
			YYSETSTATE(4);
			YYFILL ();
		}
		goto yy11;
	case 'I':	goto yy14;
	default:	goto yy10;
	}
yy14:
	++in.cur;
yyFillLabel5:
	in.yych = *in.cur;
	switch (in.yych) {
	case 0x00:
		if (in.lim <= in.cur) {
			YYSETSTATE(5);
			YYFILL ();
		}
		goto yy11;
	case 'N':	goto yy15;
	default:	goto yy10;
	}
yy15:
	++in.cur;
yyFillLabel6:
	in.yych = *in.cur;
	switch (in.yych) {
	case 0x00:
		if (in.lim <= in.cur) {
			YYSETSTATE(6);
			YYFILL ();
		}
		goto yy11;
	case 'G':	goto yy16;
	default:	goto yy10;
	}
yy16:
	in.mark = ++in.cur;
yyFillLabel7:
	in.yych = *in.cur;
	switch (in.yych) {
	case 0x00:
		if (in.lim <= in.cur) {
			YYSETSTATE(7);
			YYFILL ();
		}
		goto yy11;
	case '\n':	goto yy17;
	default:	goto yy10;
	}
yy17:
	++in.cur;
yyFillLabel8:
	in.yych = *in.cur;
	switch (in.yych) {
	case 'W':	goto yy19;
	default:
		if (in.lim <= in.cur) {
			YYSETSTATE(8);
			YYFILL ();
		}
		goto yy18;
	}
yy18:
	in.cur = in.mark;
	goto yy11;
yy19:
	++in.cur;
yyFillLabel9:
	in.yych = *in.cur;
	switch (in.yych) {
	case 'I':	goto yy20;
	default:
		if (in.lim <= in.cur) {
			YYSETSTATE(9);
			YYFILL ();
		}
		goto yy18;
	}
yy20:
	++in.cur;
yyFillLabel10:
	in.yych = *in.cur;
	switch (in.yych) {
	case 'T':	goto yy21;
	default:
		if (in.lim <= in.cur) {
			YYSETSTATE(10);
			YYFILL ();
		}
		goto yy18;
	}
yy21:
	++in.cur;
yyFillLabel11:
	in.yych = *in.cur;
	switch (in.yych) {
	case 'H':	goto yy22;
	default:
		if (in.lim <= in.cur) {
			YYSETSTATE(11);
			YYFILL ();
		}
		goto yy18;
	}
yy22:
	++in.cur;
yyFillLabel12:
	in.yych = *in.cur;
	switch (in.yych) {
	case '\n':	goto yy23;
	default:
		if (in.lim <= in.cur) {
			YYSETSTATE(12);
			YYFILL ();
		}
		goto yy18;
	}
yy23:
	++in.cur;
yyFillLabel13:
	in.yych = *in.cur;
	switch (in.yych) {
	case 'N':	goto yy24;
	default:
		if (in.lim <= in.cur) {
			YYSETSTATE(13);
			YYFILL ();
		}
		goto yy18;
	}
yy24:
	++in.cur;
yyFillLabel14:
	in.yych = *in.cur;
	switch (in.yych) {
	case 'E':	goto yy25;
	default:
		if (in.lim <= in.cur) {
			YYSETSTATE(14);
			YYFILL ();
		}
		goto yy18;
	}
yy25:
	++in.cur;
yyFillLabel15:
	in.yych = *in.cur;
	switch (in.yych) {
	case 'W':	goto yy26;
	default:
		if (in.lim <= in.cur) {
			YYSETSTATE(15);
			YYFILL ();
		}
		goto yy18;
	}
yy26:
	++in.cur;
yyFillLabel16:
	in.yych = *in.cur;
	switch (in.yych) {
	case 'L':	goto yy27;
	default:
		if (in.lim <= in.cur) {
			YYSETSTATE(16);
			YYFILL ();
		}
		goto yy18;
	}
yy27:
	++in.cur;
yyFillLabel17:
	in.yych = *in.cur;
	switch (in.yych) {
	case 'I':	goto yy28;
	default:
		if (in.lim <= in.cur) {
			YYSETSTATE(17);
			YYFILL ();
		}
		goto yy18;
	}
yy28:
	++in.cur;
yyFillLabel18:
	in.yych = *in.cur;
	switch (in.yych) {
	case 'N':	goto yy29;
	default:
		if (in.lim <= in.cur) {
			YYSETSTATE(18);
			YYFILL ();
		}
		goto yy18;
	}
yy29:
	++in.cur;
yyFillLabel19:
	in.yych = *in.cur;
	switch (in.yych) {
	case 'E':	goto yy30;
	default:
		if (in.lim <= in.cur) {
			YYSETSTATE(19);
			YYFILL ();
		}
		goto yy18;
	}
yy30:
	++in.cur;
yyFillLabel20:
	in.yych = *in.cur;
	switch (in.yych) {
	case 'S':	goto yy31;
	default:
		if (in.lim <= in.cur) {
			YYSETSTATE(20);
			YYFILL ();
		}
		goto yy18;
	}
yy31:
	++in.cur;
	{ printf("< Thing w/ newlines\n");                  return THING; }

}

int main()
{
  int fds[2];
  pipe(fds);
  fcntl(fds[0], F_SETFL, fcntl(fds[0], F_GETFL) | O_NONBLOCK);
  FILE * write = fdopen(fds[1], "w");
  FILE * read = fdopen(fds[0], "r");
  input_t in(read);

  const char * packets[] = {
    "THING\n",
    "WITH\n",
    "NEWLINES\n",
    "H", "E", "L", "O", "\n",
    "HELO\n",
    "THING\nWITH\n",
    "NEWLINES"
  };
  size_t num_packets = sizeof(packets) / sizeof(char *);
  size_t current_packet = 0;

  enum status_t result = NEED_MORE_INPUT;

  while (OK != result) {
    switch (result) {
      case NEED_MORE_INPUT:
        if (current_packet == num_packets) {
          printf("Not enough input\n");
          goto end;
        }

        fwrite(packets[current_packet], strlen(packets[current_packet]), 1, write);
        fflush(write);
        current_packet++;
        printf("Packet %lu / %lu written\n", current_packet, num_packets);

        if (current_packet == num_packets) {
          printf("%lu / %lu packets sent, Closing down communication channel\n",
            current_packet, num_packets);
          fclose(write);
          write = NULL;
        }

        in.fill();
        break;

      case FAIL:
        goto end;

      default:
        // careful, need to reset state (re2c forgets to do it)
        YYSETSTATE(0);
        break;
    }

    result = lex(in);
    printf("Received response from lexer: %s\n", STATUSES[result]);
  }

end:

  // cleanup
  fclose(read);
  if (write) {
    fclose(write);
  }

  return result == OK ? 0 : 1;
}

#undef YYGETSTATE
#undef YYSETSTATE
#undef YYFILL
