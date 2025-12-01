//1.Write a program to define some constant variable in preprocessor.
#include <stdio.h>

#define PI 3.14
#define MAX 100
#define MIN 1

int main() {
    printf("PI = %.2f\n", PI);
    printf("MAX = %d\n", MAX);
    printf("MIN = %d\n", MIN);

    return 0;
}
