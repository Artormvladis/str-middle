#include "easy_str.h"
#include "middle_str.h"
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

string itc_maxCharWord(string str)
{
    long long max=0, len=itc_len(str);
    string a1,a2;
    if (itc_countWords(str)==1) 
      return "error";
    for (int i=0; i<len; ++i)
    {
        if (((str[i]>='A') && (str[i]<='Z')) || ((str[i]>='a') && (str[i]<='z')))
            a1+=str[i];
        else if (itc_len(a1)>max)
        {
            max=itc_len(a1);
            a2=a1;
            a1="";
        }
        else
            a1="";
    }
    if (itc_len(a1)>max)
        a2=a1;
    if (!itc_len(a2)) return "error";
    return a2;
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
bool itc_isFirstInSecond(string a1, string a2){
    return itc_find_str(a1, a2)==-1;
}
string itc_Cezar(string str, int a1)
{
    if (a1 == 0) return str;
    int i = 0;
    string b1="";
    while (str[i] != '\0') {
        if (str[i]>='a' && str[i]<='z') {
            if (str[i]+a1>'z') b1+=str[i]+a1-26;
            else if (str[i]+a1<'a') b1+=str[i]+a1+26;
            else b1+=str[i]+a1;
        }
        else if (str[i]>='A' && str[i]<='Z') {
            if (str[i]+a1>'Z') b1+=str[i]+a1-26;
            if (str[i]+a1<'A') b1+=str[i]+a1+26;
            else b1+=str[i]+a1;
        }
        else b1+=str[i];
        i+=1;
    }
    return b1;
}

