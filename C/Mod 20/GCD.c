#include<stdio.h>

int my_lcm(int x, int y)
{
    int i, ans;
    for(i=x; i>=1; i--)
    {
        if(x%i==0 && y%i==0)
        {
             ans=i;
             break;
        }
    }
    return ans;
}

int main()
{
    int a, b, ans;
    scanf("%d %d", &a, &b);

    ans= my_lcm(a,b);
    printf("%d\n", ans);

    return 0;
}