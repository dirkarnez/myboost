#include <iostream>
#include <regex.h>

int main() {
    using namespace std;
    string escaped = escape_string_for_regex("()"); // prints "\(\)"
    cout << escaped << endl;
    cin.get();
    return 0;
}