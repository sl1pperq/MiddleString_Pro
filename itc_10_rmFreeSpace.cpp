#include "middle_str.h"
#include <string>
using namespace std;

string itc_rmFreeSpace(string str) {
    string result = "";
    bool freeSpace = false;
    for (int i = 0; i < find_len(str); i++) {
        if (str[i] == ' ' && !freeSpace) {
            result += str[i];
            freeSpace = true;
        } else if (str[i] != ' ') {
            result += str[i];
            freeSpace = false;
        }
    }
    if (result[find_len(result)] == ' ') {
        string temp = "";
        for (int i = 0; i < find_len(result) - 1; i++) {
            temp += result[i];
        }
        result = temp;
    }
    string temp1 = "";
    if (str[0] == ' ') {
        for (int i = 1; i < find_len(result) - 1; i++) {
            temp1 += result[i];
        }
        result = temp1;
    }
    return result;
}
