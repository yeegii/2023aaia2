///week13-1.cpp了解2D陣列,在於C Turtor測試
#include <stdio.h>
void myPrint(int x[3][4])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%2d ",x[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[3][4]; ///陣列的宣告 沒給值
    int b[3][4] = {1,2,3};///有給值但沒給完
    int c[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
    ///全部的值,都給
    myPrint(a);
    myPrint(b);
    myPrint(c);///左手i,右手j
}
