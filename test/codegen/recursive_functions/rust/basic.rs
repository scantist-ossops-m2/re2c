/* Generated by re2c */
// re2rust $INPUT -o $OUTPUT --recursive-functions -i


fn yy0(_str: &[u8], mut _cur: usize) {
	let yych = unsafe {*_str.get_unchecked(_cur)};
	_cur += 1;
	match yych {
		0x41 ..= 0x5A |
		0x61 ..= 0x7A => yy2(_str, _cur),
		_ => yy1(_str, _cur),
	}
}

fn yy1(_str: &[u8], mut _cur: usize) {
	panic!("garbage!");
}

fn yy2(_str: &[u8], mut _cur: usize) {
	let yych = unsafe {*_str.get_unchecked(_cur)};
	match yych {
		0x30 ..= 0x39 |
		0x41 ..= 0x5A |
		0x61 ..= 0x7A => {
			_cur += 1;
			yy2(_str, _cur)
		}
		_ => yy3(_str, _cur),
	}
}

fn yy3(_str: &[u8], mut _cur: usize) {
	return;
}

fn lex(_str: &[u8], mut _cur: usize) {
	yy0(_str, _cur)
}



fn main() {
    lex(b"qwerty42\0", 0);
}
