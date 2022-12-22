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
  for (long long i=0; i<len1; i++) {
    if (str1[i]==str2[0]) {
      long long a1=i;
      long long a2=0;
      for (a2<len2 && a1<len1; a2++, a1++) {
        if (str1[a1]!=str2[a2])
          break;
      }
      if (a2==len2)
        return i;
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
