#include "middle_str.h"
int itc_find_str(string str1, string str2){
    long long length1 = itc_len(str1);
    long long length2 = itc_len(str2);
    for (int i = 0; i < length1; ++i) {
        if(str1[i] == str2[0]){
            long long j = 0;
            for (long long r = i; r < length1 && j < length2; r++, j++){
                if (str1[r] != str2[j]) return 0;
            }
        }
    }
    return -1;
}


int itc_countWords(string str)
{
    int c = 0;
    bool flag = true;
    for (long long i = 0; str[i] != '\0'; ++i)
    {
        if ((str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122) && str[i] != ' ')
            flag = false;

        if (str[i] == ' ' && flag == true)
            c += 1;
        if (str[i] == ' ' && flag == false)
            flag = true;
    }
    if (flag == false)
        return c;

    return c + 1;
}

char itc_sameChar(string str)
{
    for (long long i = 0; str[i] != '\0'; ++i)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            for (long long j = 0; str[j] != '\0'; ++j)
                if (str[j] == str[i])
                    return str[j];
        }
    }
    return '0';
}

bool itc_isFirstInSecond(string s1, string s2){
    return itc_find_str(s2, s1) != -1;
}
void perezapis(string str, string &rez){
    rez="";
    for(int i = 0; i<itc_len(str); i++){
        rez=rez+str[i];
    }
    rez = rez + '\0';
}
bool str_number(string str){
    int a1;
        for(a1=0; i<itc_len(str);a1++)
            if !(str[a1]>='A' && str[a1]<='Z' || str[a1]>='a' && str[a1]<='z')
                return false;
    return true;
}
string itc_maxCharWord(string str){
    int i, len;
    int max=0;
    string rez="";
    string new_str="";
    for (i=0; i<itc_len(str); i++){
        if (str[i]!=' '){
            new_str=new_str+str[i];
        } else {
            new_str = new_str + '\0';
            len = itc_len(new_str);
            if (len>max){
                perezapis(new_str, rez);
                rez = rez+'\0';
            }
        }
    }
    if (str_number(rez)==true){
        return "error";
    }
}
               
