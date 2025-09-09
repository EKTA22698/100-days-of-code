//Q40: Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];

    // Input binary number as a string
    scanf("%s", binary);

    // Process each bit
    for (int i = 0; i < strlen(binary); i++) 
    {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
    }

    // Output result
    printf("%s", binary);

    return 0;
}
