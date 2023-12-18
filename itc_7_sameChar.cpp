#include <iostream>
#include "middle_str.h"
#include <string>
using namespace std;

bool isLetter(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= 'à' && ch <= 'ÿ') || (ch >= 'À' && ch <= 'ß');
}


char itc_sameChar(string str) {
    char result;
    for (int i = 0; i < find_len(str); i++) {
        if (isLetter(str[i])) {
            for (int j = i + 1; j < find_len(str); j++) {
                if (str[i] == str[j]) {
                    result = str[i];
                }
            }
        }
    }
    return result;
}
