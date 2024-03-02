(* Generated by re2c *)
(* re2ocaml $INPUT -o $OUTPUT --header lexer/state.ml -i *)

open State




let rec yy0 (st : State.state) : int =
	let yych = st.str.[st.cur] in
	match yych with
		| 'a' ->
			st.cur <- st.cur + 1;
			(yy0 [@tailcall]) st
		| 'b' ->
			st.yyt1 <- st.cur;
			st.cur <- st.cur + 1;
			(yy2 [@tailcall]) st
		| _ ->
			st.yyt1 <- st.cur;
			(yy1 [@tailcall]) st

and yy1 (st : State.state) : int =
	st.tag <- st.yyt1;
	st.tag

and yy2 (st : State.state) : int =
	let yych = st.str.[st.cur] in
	match yych with
		| 'b' ->
			st.cur <- st.cur + 1;
			(yy2 [@tailcall]) st
		| _ -> (yy1 [@tailcall]) st

and lex (st : State.state) : int =
	(yy0 [@tailcall]) st



let main () =
    let st = {
        str = "ab\x00";
        cur = 0;
        tag = 0;
        
	yyt1 = 0;
    }
    in if not (lex st = 1) then raise (Failure "error")

let _ = main ()
(* Generated by re2c *)

type state = {
    str: string;
    mutable cur: int;
    mutable tag: int;
    mutable yyt1: int;
}
ocaml/headers/header.re:25:19: warning: rule matches empty string [-Wmatch-empty-string]
