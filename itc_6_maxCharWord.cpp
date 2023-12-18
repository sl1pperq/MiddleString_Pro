#include "middle_str.h"
#include <string>
using namespace std;

string itc_maxCharWord(string str) {
    int lengthMax = 0;
    string wordMax;
    string word = "";
    int count = 0;
    for (int i = 0; i < find_len(str); i++) {
        if (str[i] != ' ' && i != find_len(str) - 1) {
            word += str[i];
        } else if (i == find_len(str) - 1 && str[i] != ' ') {
            word += str[i];
            if (find_len(word) > lengthMax) {
                lengthMax = find_len(word);
                wordMax = word;
            }
        } else {
            if (find_len(word) > lengthMax) {
                lengthMax = find_len(word);
                wordMax = word;
            }
            word = "";
            count++;
        }
    }
    if (count < 1) {
        return "error";
    }
    return wordMax;
}
