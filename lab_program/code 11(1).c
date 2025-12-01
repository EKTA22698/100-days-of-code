//1.Write a program to apply bitwise OR, AND and NOT operators on bit level.
#include <stdio.h>
int main ()
{
    int a,b;
    printf ("Enter two integers:");
    scanf ("%d %d",&a,&b);
    printf ("a=%d, b=%d\n",a,b);
    printf ("Bitwise AND(a&b)=%d\n",a&b);
    printf ("Bitwise OR(a|b)=%d\n",a|b);
    printf ("Bitwise NOT(~a)=%d\n",~a);
    printf ("Bitwise AND(~b)=%d\n",~b);
    
    
}