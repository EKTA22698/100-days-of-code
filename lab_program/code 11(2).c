//2.Write a program to apply left shift and right shift operator.
#include <stdio.h>
int main ()
{
    int x,n;
    printf ("Enter an integer:");
    scanf ("%d",&x);
    printf ("Enter shift amount:");
    scanf ("%d",&n);
    printf ("Original number:%d\n",x);
    printf ("Left shift(x<<%d)=%d\n",n,x<<n);
    printf ("Right shift(x>>%d)=%d\n",n,x>>n);
    return 0;
    
    
}