//1.Develop a recursive and non-recursive function FACT(num) to find the factorial of a number, n!, defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n) = n * FACT(n-1). Using this function, write a C program to compute the binomial coefficient. Tabulate the results for different values of n and r with suitable messages. 
#include <stdio.h>
int FACT (int num) {
    if (num == 0) 
    return 1;
    return num * FACT(num - 1);
}
int bincoeff(int n,int r) {
    float c =(FACT (n))/(FACT (r)*FACT(n-r));
    return c;
}

int main() {
    int n, r,num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    int a=FACT(num);
    printf("Factorial of a number:%d\n",a);
    printf ("Enter the values of n and r:\n");
    scanf ("%d %d", &n,&r);
    float z=bincoeff(n,r);
    printf ("Binary coefficient of a number:%.1f",z);
    return 0;
}
