///week12-1.cpp 質數判別
#include <stdio.h>
int isPrime(int n)
 {///質數不能整除
    for(int i=2;i<n;i++)
    {

        if(n%i==0)
                return 0; ///失敗
    }
    return 1; ///成功!!
 }

int main()
{
    int n;
    scanf("%d",&n);
    if(isPrime(n))
            printf("n是質數");
    else
            printf("n不是質數");
}
