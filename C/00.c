#include<stdio.h>
int main()
{
    int a, b, c, d, L, S;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(a>b && a>c && a>d || !(a>b && a>c && a>d))
    {
        L=a;
        S=a;
    }
    else if(b>a && b>c && b>d || !(b>a && b>c && b>d))
    {
        L=b;
        S=b;
    }
    else if(c>a && c>b && c>d)
    {
        L=c;
        if(!(c>a && c>b && c>d))
            S=c;
    }
    else if(d>a && d>b && d>c)
    {
        L=d;
        if(!(d>a && d>b && d>c))
            S=d;
    }
    printf("Largest = %d \n", L);
    printf("Smallest = %d \n", S);

    return 0;
}

    