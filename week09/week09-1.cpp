///week09-1.cpp字元 字串(字元陣列)
#include <stdio.h>
int main()
{
    char c;
    char s[40];
    printf("請輸入一個字母,再輸入你的英文名子: ");
    scanf("%c %s",&c,&s);
    printf("你的名字是:%s 你輸入的字母是: %c\n",s,c);
}

