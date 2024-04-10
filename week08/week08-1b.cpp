/// week08-1b.cpp 九九乘法表&畫星星知相同處
#include <stdio.h>
int main()
{
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            printf("*");
        }
        printf("i:%d\n", i);
    }
}
