#include "middle_str.h"
using namespace std;

long long find_len(string str) {
    long long len = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        len++;
    }
    return len;
}

bool itc_compare(string s1, string s2) {
    if (find_len(s1) != find_len(s2)) {
        return false;
    } else {
        for (int i = 0; i < find_len(s1); i++) {
            if (s1[i] != s2[i]) {
                return false;
            }
        }
        return true;
    }
}