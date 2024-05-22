///week14-2.cpp 對應課本page 1-7 %s %c
#include <stdio.h>
int main()
{
	char c;
	char s[100];
	printf("請輸入一行字 裡面可以有空格,直到跳行結束: ");
	gets(s);
	printf("你讀入了:%s\n", s);

	printf("請輸入你的英文名字,裡面不能有空格: ");
	scanf("%s", s); ///不用加 & 符號
	printf("你的英文名字是: %s", s);

	printf("請再輸入一次你的英文名字: ");
	scanf("%c",&c);///竟然讀到了跳行
	printf("結果讀到了: %c", c);

}
