#include "easy_str.h"
#include "middle_str.h"
long long itc_len(string str1) {
  long long kol=0;
  for (int i=0; str1[i]!='\0'; i++)
    kol++;
  return kol;
}
string itc_slice_str(string str, int a1, int a2){
    string res="";
    if (a2>= itc_len(str))
        a2=itc_len(str)-1;
    if(a1>a2){
        return str;
    }else if(a1==(itc_len(str) - 1)){
        res+=str[itc_len(str) - 1];
        return res;
    }else{
        for (long long i=a1; i<=a2; i++){
            res+=str[i];
        }
        return res;
    }
    return "-1";
}
string itc_covert_num(int a1, int a2)
{
	string b1 = "", b2 = "";
	if ((a2 > 16) || (a2 < 2) || (a1 < 0))
		return "-1";
	
	else if (a2 < 10) {
		while (a1> 0) {
			b1 += ('0' + (a1 % a2));
			a1 /= a2;
		}
	}
	else {
		while (a1 > 0) {
			if (a1 % a2 >= 10) b1 += ('A' + (a1 % a2) - 10);
			else b1 += ('0' + (a1 % a2));
			a1 /= a2;
		}
	}
  int i = itc_len(b1);
	while (i > 0) {
		i--;
		b2 += b1[i];
	}
	return b2;
}
string itc_num_to_str(long long a1){
    char b = ' ';
    string c = "";
    while(a1 > 0){
        b = (a1 % 10) + 48;
        c =  b + c;
        a1 /= 10;
    }
    return c;
}
