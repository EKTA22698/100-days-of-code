//5.Develop a function REVERSE (str) that accepts a string argument. Write a C program that invokes this function to find the reverse of a given string. #include <stdio.h>
#include <string.h>
void REVERSE(char str[]) {
    int i, j;
    char temp;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char s[100];

    printf("Enter a string: ");
    gets(s);
    REVERSE(s);
    printf("Reversed string: %s\n", s);

    return 0;
}
 
