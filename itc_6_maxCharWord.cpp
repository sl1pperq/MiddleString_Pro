#include "middle_str.h"
#include <string>
using namespace std;

bool isLetter(char c) {
    if (c >= '!' && c <= '@' || c >= '[' && c <= '`' || c >= '{' && c <= '~') {
        return false;
    } else {
        return true;
    }
}

string itc_maxCharWord(string str) {
    for (int i = 0; i < find_len(str); i++) {
        if (isLetter(str[i])) {
            return "";
        }
    }
}