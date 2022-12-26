#ifndef MIDDLE_STR_H_INCLUDED
#define MIDDLE_STR_H_INCLUDED
#include <iostream>
#include <string.h>
using namespace std;
long long itc_len(string str1);
int itc_find_str(string str1, string str2);
string itc_slice_str(string str, int a1, int a2);
string itc_covert_num(int a1, int a2);
string itc_num_to_str(long long a1);
long long str_to_num(string a1);
bool itc_isDigit(unsigned char a1);
unsigned char itc_toUpper(unsigned char a1);
unsigned char itc_changeCase(unsigned char a1);
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
