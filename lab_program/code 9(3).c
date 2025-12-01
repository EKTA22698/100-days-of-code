//3.Open a file, read its content line by line, and display each line on the console
#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("myfile.txt", "r");

    if (fp == NULL) {
        printf("File not found!");
        return 1;
    }

    printf("Reading file line by line:\n");

    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
