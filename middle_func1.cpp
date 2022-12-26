#include "easy_str.h"
#include "middle_str.h"
unsigned char itc_changeCase(unsigned char a1){
    if (a1<='z' && a1>='a')
        return a1-' ';
    else if(a1<='Z' && a1>='A')
        return a1+' ';
    else
        return a1;
}
bool itc_compare(string a1, string a2){
    for (long long i=0; i<=itc_len(a1); i++) {
        if (a1[i]!=a2[i])
            return false;
    }
    return true;
}
