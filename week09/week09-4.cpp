///week09-4.cpp 字串的函式 課本4-8
#include <stdio.h>
#include <string.h> ///要使用 字串的函式
int main()
{
    char line[100]; ///可放100個字母,很長
    printf("請輸入一堆字母,不要有空格,最後跳行結束輸入\n");
    scanf("%s",line);

    int N = strlen(line);///查出字串長度 string length
    printf("字串長度是:%d\n",N);
    ///strcpy(a, "Hello"); 字串拷貝 string copy
    ///strcat(a,b); 字串結合 把右邊a 接到左邊a的後面 concatenate
    ///strcmp(a,b);字串比較(逐字母比較,看誰比較大) string compare
}