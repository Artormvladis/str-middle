#include "easy_str.h"
#include "middle_str.h"
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
            max=itc_len(a);
            a2=a1;
            a1="";
        }
        else
            a1="";
    }
    if (itc_len(a1)>max)
        a2=a1;
    return a2;
}
char itc_sameChar(string str)
{
    for (long long i=0; str[i]!='\0'; ++i)
    {
        if ((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
        {
            for (long long a1=0; str[a1]!='\0'; a1++)
                if (str[a1]==str[i])
                    return str[a1];
        }
    }
    return '0';
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
string itc_rmFreeSpace(string str)
{
    long long len=itc_len(str);
	string a1="", res="";
	for (int i=0; i<len; i++)
        if (!((str[i]==' ') && (str[i+1]==' ')))
            a1+=str[i];
	len=itc_len(a1);
	for (int a2=0; a2<len; a2++)
        if (!((a2==len-1) && (a1[a2]==' ')))
            res+=a1[a2];
	return res;

}
