#include "easy_str.h"
#include "middle_str.h"
string itc_slice_str(string str, int start, int endd){
    string res = "";
    if (endd >= itc_len(str))
        endd = itc_len(str) - 1;
    if(start > endd){
        return str;
    }else if(start == (itc_len(str) - 1)){
        res += str[itc_len(str) - 1];
        return res;
    }else{
        for (long long i = start; i <= endd; i++){
            res += str[i];
        }
        return res;
    }
    return "-1";
}
string itc_decToBase(int num, int base){
    string alph = "0123456789ABCDEF";
    string res = "";
    int tmp = 0;
    if (num < 0){
        res = "-";
        num *= -1;
    }
    while(num > 0){
        tmp = num % base;
        res += alph[tmp];
        num /= base;
    }
    return res;
}
string itc_rmFreeSpace(string str)
{
    long long len = itc_len(str);
    long long c = 0;
    if (str == "") return str;
    else if (str[0] == ' ') c = 1;
    else c = 0;
    while ((str[c] == ' ') && (c < len)) c++;
    string res_buff = "";
    for (int i = c; i < len; i++) {
        if ((i != len - 1) && ((str[i] != ' ') || (str[i + 1] != ' '))) res_buff += str[i];
    }
    if (str[len - 1] != ' ') res_buff += str[len - 1];
    return res_buff;
}

bool itc_isIp(string str)
{
    int check = 1;
	long long len = itc_len(str), wordcount = 1;
	for (int i = 0; i < len; ++i) {
		if ((str[i] >= '0') && (str[i] <= '9')) {
			check = check * 10 + str[i] - 48;
		}
		else {
			if ((str[i] != '.') || (check == 1) || (check % 1000 > 255) || (check % 1000 < 0))
                return 0;
			check = 1;
			wordcount++;
		}
	}
	if (wordcount != 4)
        return 0;
	return 1;
}

string itc_DecToBin(string str){
    string temp = "", temp2 = "";
    long long temp_num = 0;
    for(long long i = 0; str[i] != '\0'; ++i){
        if (str[i] < '0' || str[i] > '9'){
            temp2 += itc_decToBase(str_to_num(temp), 2) + str[i];
            temp = "";
        }
        if ( itc_isDigit(str[i]))
            temp += str[i];  
    }
    temp2 += itc_decToBase(str_to_num(temp), 2);
    return temp2;
}
