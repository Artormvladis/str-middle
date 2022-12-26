#include "easy_str.h"
#include "middle_str.h"
long long itc_len(string str1) {
  long long kol=0;
  for (int i=0; str1[i]!='\0'; i++)
    kol++;
  return kol;
}
int itc_find_str(string str1, string str2) {
  long long len1=itc_len(str1);
  long long len2=itc_len(str2);
  for (int i=0; i<len1; i++) {
    if (str1[i]==str2[0]) {
      long long a1=0;
      for (long long r = i; r < len1 && a1 < len2; r++, a1++){
                if (str1[r] != str2[a1]) return 0;
            }
        }
    }
    return -1;
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
  int i = itc_len(otv1);
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
