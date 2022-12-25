#include "middle_str.h"
#include "easy_str.h"
long long str_to_num(string a1){
    int b = 0;
    long long a2 = 0;
    for (long long i = 0; a1[i] != '\0'; ++i){
        ch = a1[i] - 48;
        a2 = a2 * 10 + b;
    }
    return a2;
}
