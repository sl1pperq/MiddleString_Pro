#include "middle_str.h"
#include <string>
using namespace std;

unsigned char itc_changeCase(unsigned char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    } else if (c >= 'A' && c <= 'Z') {
        return c + 32;
    } else {
        return c;
    }
}