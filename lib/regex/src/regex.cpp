#include <iostream>
#include "regex.h"
#include <regex>

using namespace std;

// WIP
string escape_string_for_regex(string str)
{
   const regex esc("[.^$|:()\\[\\]{}*+?\"\\\\]");
   const string rep("\\\\&");
   return regex_replace(str, esc, rep, regex_constants::match_default | regex_constants::format_sed);
}
