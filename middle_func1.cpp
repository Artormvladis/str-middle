#include "easy_str.h"
#include "middle_str.h"
bool itc_isDigit(unsigned char a1)
{
	return((a1>=48) && (a1<=57));
}
unsigned char itc_toUpper(unsigned char a1){
    if(a1>=97 && a1<=122) return a1-32;
    return a1;
}
unsigned char itc_changeCase(unsigned char a1){
    if (a1<='z' && a1>='a')
        return c - ' ';
    else if(a1<='Z' && a1>= 'A')
        return a1+' ';
    else
        return a1;
}
bool itc_compare(string a1, string a2){
    for (long long i=0; i<=itc_len(a1); i++) {
        if (a1[i]!=a2[i])
            return false;
            break;
    }
    return true;
}
int itc_countWords(string str)
{
    int a1=0;
    bool b1=true;
    for (long long i=0; str[i]!='\0'; ++i)
    {
        if ((str[i]<65 || (str[i]>90 && str[i]<97) || str[i]>122) && str[i]!=' ')
            b1=false;
        if (str[i]==' ' && b1==true)
            a1+=1;
        if (str[i]==' ' && b1==false)
            b1=true;
    }
    if (b1==false)
        return a1;

    return a1+1;
}
