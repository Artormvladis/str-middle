#include "easy_str.h"
#include "middle_str.h"
bool itc_isIp(string str)
{
    int a1=1;
	long long len=itc_len(str),a2=1;
	for (int i = 0; i < len; ++i) {
		if ((str[i] >= '0') && (str[i] <= '9')) {
			a1=a1*10+str[i]-48;
		}
		else {
			if ((str[i]!='.') || (a1==1) || (a1%1000>255) || (a1%1000<0))
                return 0;
			a1=1;
			a2++;
		}
	}
	if (a2!=4)
        return 0;
	return 1;
}

string itc_DecToBin(string str){
    string a1="", a2="";
    long long a1_num=0;
    for(long long i=0; str[i]!='\0'; ++i){
        if (str[i]<'0' || str[i]>'9'){
            a2+=itc_decToBase(str_to_num(a1), 2)+str[i];
            a1="";
        }
        if (itc_isDigit(str[i]))
            a1+=str[i];  
    }

    a2+=itc_decToBase(str_to_num(a1), 2);
    return a2;
}
string itc_decToBase(int a1, int a2){
    string b1="0123456789ABCDEF";
    string res="";
    int a3=0;
    if (a1<0){
        res="-";
        a1*=-1;
    }
    while(a1>0){
        a3=a1%a2;
        res=b1[a3];
        a1/=a2;
    }
    return res;
}
