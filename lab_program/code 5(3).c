//3.WAP to read a list of integers and store it in a single dimensional array. Write a C program to find the frequency of a particular number in a list of integers.
#include <stdio.h>

int main() {
    int i, a[50], n, f, k;

    printf("Enter the size of the array:\n");
    scanf("%d", &n);

    printf("Enter the elements in array:\n");
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the number whose frequency is checked:\n");
    scanf("%d", &k);

    f = 0;
    for (i = 0; i < n; i++) {
        if (a[i] == k)
            f++;
    }

    printf("Frequency of %d in array is : %d\n", k, f);

    return 0;
}
