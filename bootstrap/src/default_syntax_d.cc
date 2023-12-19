const char* DEFAULT_SYNTAX_D =
    "api = [generic];\n"
    "api_style = [freeform, functions];\n"
    "jump_model = [goto_label, loop_switch];\n"
    "target = [code, dot];\n"
    "\n"
    "computed_goto = unsupported;\n"
    "case_ranges = optional;\n"
    "constants = snake_case;\n"
    "char_literals = symbolic;\n"
    "semicolons = yes;\n"
    "abort_in_default_case = yes;\n"
    "implicit_bool_conversion = no;\n"
    "backtick_quoted_strings = no;\n"
    "standalone_single_quotes = no;\n"
    "\n"
    "code:var = topindent type \" \" name (have_init? \" = \" init) \";\" nl;\n"
    "\n"
    "code:const = topindent \"enum \" name \" = \" init \";\" nl;\n"
    "\n"
    "code:array =\n"
    "    topindent type \"[\" size \"] \" name \" = [\" nl indent\n"
    "        [row{0:-2}: topindent [elem{0:-2}: elem \", \"] [elem{-1}: elem \",\"] nl]\n"
    "        [row{-1}:   topindent [elem{0:-2}: elem \", \"] [elem{-1}: elem]     nl]\n"
    "    dedent topindent \"];\" nl;\n"
    "\n"
    "code:type_int = \"int\";\n"
    "code:type_uint = \"uint\";\n"
    "// code:type_cond_enum\n"
    "code:type_yybm = \"immutable char\";\n"
    "// code:type_yytarget\n"
    "\n"
    "code:if_then_else =\n"
    "    topindent \"if (\" then_cond \") {\" nl\n"
    "        indent [then_stmt: then_stmt] dedent\n"
    "    (have_else_part? topindent \"} else \" (have_else_cond? \"if (\" else_cond \") \") \"{\" nl\n"
    "        indent [else_stmt: else_stmt] dedent)\n"
    "    topindent \"}\" nl;\n"
    "\n"
    "code:if_then_oneline = topindent \"if (\" then_cond \") \" [then_stmt: then_stmt];\n"
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
    "code:switch_case_range =\n"
    "    topindent \"case \" [val{0}: val] (multival ? \": .. case \" [val{-1}: val]) \":\";\n"
    "\n"
    "code:switch_case_default =\n"
    "    topindent \"default:\";\n"
    "\n"
    "code:loop =\n"
    "    topindent \"while (true) {\" nl\n"
    "        indent [stmt: stmt] dedent\n"
    "    topindent \"}\" nl;\n"
    "\n"
    "code:enum =\n"
    "    \"enum \" name \" {\" nl indent\n"
    "        [elem{0:-2}: topindent elem (have_init? \" = \" init) \",\" nl]\n"
    "        [elem{-1}:   topindent elem (have_init? \" = \" init) nl]\n"
    "    dedent \"};\" nl;\n"
    "\n"
    "code:enum_elem = type \".\" name;\n"
    "\n"
    "code:fingerprint =\n"
    "    \"/* Generated by re2c\" (have_version? \" \" version) (have_date? \" on \" date) \" */\" nl;\n"
    "\n"
    "code:line_info = \"#line \" line \" \\\"\" file \"\\\"\" nl;\n"
    "\n"
    "code:abort = topindent \"assert(false);\" nl;\n"
    "\n"
    "code:yypeek_expr = (api.generic\n"
    "    ? peek (api_style.functions ? \"()\")\n"
    "    : typecast \"*\" cursor );\n"
    ;
