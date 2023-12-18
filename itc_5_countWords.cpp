#include "middle_str.h"
#include <string>
#include <iostream>
using namespace std;

int itc_countWords(string str) {
    int counter = 1;
    for (int i = 0; i < find_len(str); i++) {
        if (str[i] == ' ' && str[i + 1] != ' ') {
            counter++;
        } else if (str[i] >= '!' && str[i] <= '@' || str[i] >= '[' && str[i] <= '`' || str[i] >= '{' && str[i] <= '~') {
            counter--;
        }
    }
    return counter;
}