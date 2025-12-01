/***********************
  Experiment 14
  STATIC LIBRARY CREATION
************************/

/* ---------- arith.h ---------- */
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divi(int a, int b);

/*
Commands to create static library 

gcc -c arith.c
ar rcs libarith.a arith.o
gcc main.c -L. -larith -o static_app

*/


/* ---------- arith.c (Library Code) ---------- */
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divi(int a, int b) { return a / b; }


/* ---------- main.c (Using the Static Library) ---------- */
#include <stdio.h>

int main() {
    int x = 20, y = 10;

    printf("Addition = %d\n", add(x, y));
    printf("Subtraction = %d\n", sub(x, y));
    printf("Multiplication = %d\n", mul(x, y));
    printf("Division = %d\n", divi(x, y));

    return 0;
}
