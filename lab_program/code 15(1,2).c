/***********************
  Experiment 15
  SHARED LIBRARY CREATION
************************/

/* ---------- arith.h ---------- */
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divi(int a, int b);

/*
Commands to create shared library

gcc -fPIC -c arith.c
gcc -shared -o libarith.so arith.o
gcc main.c -L. -larith -o shared_app
export LD_LIBRARY_PATH=.
./shared_app
*/


/* ---------- arith.c (Library Code) ---------- */
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divi(int a, int b) { return a / b; }


/* ---------- main.c (Using the Shared Library) ---------- */
#include <stdio.h>

int main() {
    int x = 15, y = 5;

    printf("Addition = %d\n", add(x, y));
    printf("Subtraction = %d\n", sub(x, y));
    printf("Multiplication = %d\n", mul(x, y));
    printf("Division = %d\n", divi(x, y));

    return 0;
}
