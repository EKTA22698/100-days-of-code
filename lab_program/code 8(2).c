//2.Perform pointer arithmetic (increment and decrement) on pointers of different data types. Observe how the memory addresses change and the effects on data access.
#include <stdio.h>

int main()
{
    int a[3] = {10, 20, 30};
    float b[3] = {1.1, 2.2, 3.3};
    char c[3] = {'a', 'b', 'c'};

    int *p1 = a;
    float *p2 = b;
    char *p3 = c;

    printf("Original addresses:\n");
    printf("p1 = %p\n", p1);
    printf("p2 = %p\n", p2);
    printf("p3 = %p\n", p3);

    p1++;
    p2++;
    p3++;

    printf("\nAfter Increment:\n");
    printf("p1 = %p\n", p1);
    printf("p2 = %p\n", p2);
    printf("p3 = %p\n", p3);

    p1--;
    p2--;
    p3--;

    printf("\nAfter Decrement:\n");
    printf("p1 = %p\n", p1);
    printf("p2 = %p\n", p2);
    printf("p3 = %p\n", p3);

    return 0;
}
