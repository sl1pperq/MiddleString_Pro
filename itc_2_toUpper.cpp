#include "middle_str.h"

unsigned char itc_toUpper(unsigned char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    } else {
        return c;
    }
}

unsigned char itc_toLower(unsigned char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    } else {
        return c;
    }
}
