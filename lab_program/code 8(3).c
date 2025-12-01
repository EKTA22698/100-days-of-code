//3.Write a function that accepts pointers as parameters. Pass variables by reference using pointers and modify their values within the function.
#include <stdio.h>

void swap (int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 5, b = 10;

    printf("Before swap:\n");
    printf("a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("\nAfter swap:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
