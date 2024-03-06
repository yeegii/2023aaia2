#include <stdio.h>
int main()
{
    int a = 10;
    printf("%5d 占五格\n", a);
    float pi=3.141592653589795328462643383279;
    printf("%f浮點數只有8格\n", pi);
    printf("%12f 如果只印12格,結果是對期右邊,可惡\n", pi);
    printf("%12.10f 印12格,點右邊10格,但不准\n", pi);
    double pi2=3.141592659589793284626493383279;
    printf("%12.10f 兩倍俘點數double印點數右邊10格\n", pi2);
}
