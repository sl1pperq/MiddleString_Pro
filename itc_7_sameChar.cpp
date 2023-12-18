#include <iostream>
#include "middle_str.h"
#include <string>
using namespace std;

bool itc_isLetter(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '�' && ch <= '�') || (ch >= '�' && ch <= '�');
}


char itc_sameChar(string str) {
    char result;
    for (int i = 0; i < find_len(str); i++) {
        if ((str[i])) {
            for (int j = i + 1; j < find_len(str); j++) {
                if (str[i] == str[j]) {
                    result = str[i];
                }
            }
        }
    }
    return result;
}