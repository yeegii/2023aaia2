class Solution 
{
public:
    int tribonacci(int n) 
    {
    int a[40]={0,1,1};///前三項準備好,後面37項沒寫,就都是0
    for(int i=3;i<=n;i++)
    {
        a[i] = a[i-1] + a[i-2] + a[i-3];
    }
    return a[n];
    }
};