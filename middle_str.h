#ifndef MIDDLE_STR_H_INCLUDED
#define MIDDLE_STR_H_INCLUDED
#include <iostream>
#include <string.h>
using namespace std;
bool itc_isDigit(unsigned char a);
unsigned char itc_toUpper(unsigned char a);
unsigned char itc_changeCase(unsigned char a);
bool itc_compare(string a1, string a2);
int itc_countWords(string str);
string itc_maxCharWord(string str);
char itc_sameChar(string str);
bool itc_isFirstInSecond(string a1, string a2);
string itc_Cezar(string str, int a1d);
string itc_rmFreeSpace(string str);
bool itc_isIp(string str);
string itc_DecToBin(string str);
string itc_decToBase(int a1, int a2);
#endif // MIDDLE_STR_H_INCLUDED
