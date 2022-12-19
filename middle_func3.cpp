#include "easy_func.h"
#include "middle_func.h"
string itc_rmFreeSpace(string str){
    long long len=itc_len(str);
	string a1="", res="";
	for (int i=0; i<len; i++)
        if (!((str[i]==' ') && (str[i+1]==' ')))
            a1+=str[i];
	len=itc_len(a1);
	for (int j = 0; j < len; j++)
        if (!((b1==len-1) && (a1[b1]==' ')))
            res+=a1[b1];
	return res;
}
bool itc_isIp(string str){
    int a1=1;
	long long len=itc_len(str), a3=1;
	for (int i=0; i<len; ++i) {
		if ((str[i]>='0') && (str[i]<='9')) {
			a2=a2*10+str[i]-48;
		}
		else {
			if ((str[i]!='.') || (a1==1) || (a1%1000>255) || (a1%1000<0))
                return 0;
			a1=1;
			a3++;
		}
	}
	if (a3!=4)
        return 0;
	return 1;
}
string itc_DecToBin(string str){
    string a1="", a2 = "";
    long long n=0;
    for(long long i=0; str[i]!='\0'; ++i){
        if (str[i]<'0'||str[i]>'9'){
            a2+=itc_decToBase(str_to_num(a1), 2)+str[i];
            a1="";
        }
        if ( itc_isDigit(str[i]))
            a1+=str[i];  
    }

    a2+= itc_decToBase(str_to_num(a1), 2);
    return a2;
}
