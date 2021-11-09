// Code generated by re2c, DO NOT EDIT.
//go:generate re2go $INPUT -o $OUTPUT --loop-switch -i

package main                              //
                                          //
func lex(str string) {                    // Go code
    var cursor int                        //
                                          //

{
	var yych byte
	yystate := 1
	for {
		switch (yystate) {
		case 1:
			yych = str[cursor]
			cursor += 1
			if (yych <= '0') {
				yystate = 2
				continue
			}
			if (yych <= '9') {
				yystate = 4
				continue
			}
			yystate = 2
			continue
		case 2:
			yystate = 3
			continue
		case 3:
			{ panic("error!"); }
		case 4:
			yych = str[cursor]
			yystate = 5
			continue
		case 5:
			if (yych <= '/') {
				yystate = 6
				continue
			}
			if (yych <= '9') {
				cursor += 1
				yystate = 4
				continue
			}
			yystate = 6
			continue
		case 6:
			{ return }
		}
	}
}

}                                         //
                                          //
func main() {                             // Go code
    lex("1234\x00")                       //
}                                         //