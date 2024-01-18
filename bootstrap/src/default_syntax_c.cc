const char* DEFAULT_SYNTAX_C =
    "api = [default, generic];\n"
    "api_style = [functions, freeform];\n"
    "code_model = [goto_label, loop_switch, recursive_functions];\n"
    "target = [code, dot, skeleton];\n"
    "\n"
    "computed_goto = optional;\n"
    "case_ranges = optional;\n"
    "constants = snake_case;\n"
    "yyctype_literals = char;\n"
    "semicolons = yes;\n"
    "abort_in_default_case = no; // `abort()` requires include\n"
    "implicit_bool_conversion = yes;\n"
    "backtick_quoted_strings = no;\n"
    "standalone_single_quotes = no;\n"
    "\n"
    "code:var = topindent type \" \" name (have_init? \" = \" init) \";\" nl;\n"
    "\n"
    "code:const = topindent \"#define \" name \" \" init nl;\n"
    "\n"
    "code:array =\n"
    "    topindent type \" \" name \"[\" size \"] = {\" nl indent\n"
    "        [row{0:-2}: topindent [elem{0:-2}: elem \", \"] [elem{-1}: elem \",\"] nl]\n"
    "        [row{-1}:   topindent [elem{0:-2}: elem \", \"] [elem{-1}: elem]     nl]\n"
    "    dedent topindent \"};\" nl;\n"
    "\n"
    "code:type_int = \"int\";\n"
    "code:type_uint = \"unsigned int\";\n"
    "// code:type_cond_enum\n"
    "code:type_yybm = \"static const unsigned char\";\n"
    "code:type_yytarget = \"static const void*\";\n"
    "\n"
    "code:if_then_else =\n"
    "    [branch{0}: topindent \"if (\" cond \") {\" nl\n"
    "        indent [stmt: stmt] dedent]\n"
    "    [branch{1:-1}: topindent \"} else \" (have_cond? \"if (\" cond \") \") \"{\" nl\n"
    "        indent [stmt: stmt] dedent]\n"
    "    topindent \"}\" nl;\n"
    "\n"
    "code:if_then_else_oneline =\n"
    "    [branch{0}:    topindent \"if (\" cond \") \" [stmt: stmt]]\n"
    "    [branch{1:-1}: topindent \"else \" (have_cond? \"if (\" cond \") \") [stmt: stmt]];\n"
    "\n"
    "code:switch =\n"
    "    topindent \"switch (\" expr \") {\" nl\n"
    "        indent [case: case] dedent\n"
    "    topindent \"}\" nl;\n"
    "\n"
    "code:switch_cases =\n"
    "    [case: case nl]\n"
    "        indent [stmt: stmt] dedent;\n"
    "\n"
    "code:switch_cases_oneline =\n"
    "    [case{0:-2}: case nl]\n"
    "    [case{-1}:   case \" \" [stmt: stmt]];\n"
    "\n"
    "code:switch_case_range = (case_ranges\n"
    "    ? topindent \"case \" [val{0}: val] (multival ? \" ... \" [val{-1}: val]) \":\"\n"
    "    : [val{0:-2}: topindent \"case \" val \":\" nl]\n"
    "      [val{-1}:   topindent \"case \" val \":\"]);\n"
    "\n"
    "code:switch_case_default =\n"
    "    topindent \"default:\";\n"
    "\n"
    "code:loop =\n"
    "    topindent \"for (;;) {\" nl\n"
    "        indent [stmt: stmt] dedent\n"
    "    topindent \"}\" nl;\n"
    "\n"
    "code:enum =\n"
    "    \"enum \" name \" {\" nl indent\n"
    "        [elem{0:-2}: topindent elem (have_init? \" = \" init) \",\" nl]\n"
    "        [elem{-1}:   topindent elem (have_init? \" = \" init) nl]\n"
    "    dedent \"};\" nl;\n"
    "\n"
    "code:enum_elem = name;\n"
    "\n"
    "code:fndecl =\n"
    "    topindent type \" \" name \"(\"\n"
    "        [arg{0:-2}: argtype \" \" argname \", \"]\n"
    "        [arg{-1}:   argtype \" \" argname]\n"
    "    \");\" nl;\n"
    "\n"
    "code:fndef =\n"
    "    topindent type \" \" name \"(\"\n"
    "        [arg{0:-2}: argtype \" \" argname \", \"]\n"
    "        [arg{-1}:   argtype \" \" argname]\n"
    "    \") {\" nl\n"
    "        indent [stmt: stmt] dedent\n"
    "    \"}\" nl;\n"
    "\n"
    "code:fncall = name \"(\" [arg{0:-2}: arg \", \"] [arg{-1}: arg] \")\";\n"
    "\n"
    "code:tailcall = topindent \"return \" name \"(\" [arg{0:-2}: arg \", \"] [arg{-1}: arg] \");\" nl;\n"
    "\n"
    "code:recursive_functions =\n"
    "    [fn: fndecl] nl\n"
    "    [fn: fndef nl];\n"
    "\n"
    "code:fingerprint =\n"
    "    \"/* Generated by re2c\" (have_version? \" \" version) (have_date? \" on \" date) \" */\" nl;\n"
    "\n"
    "code:line_info = \"#line \" line \" \\\"\" file \"\\\"\" nl;\n"
    "\n"
    "code:abort = topindent \"abort();\" nl;\n"
    "\n"
    "code:yydebug = topindent yydebug \"(\" state \", \" char \");\" nl;\n"
    "\n"
    "code:yypeek =\n"
    "    topindent var \" = \" (api.generic\n"
    "        ? yypeek (api_style.functions ? \"()\")\n"
    "        : typecast \"*\" cursor\n"
    "    ) \";\" nl;\n"
    ;
