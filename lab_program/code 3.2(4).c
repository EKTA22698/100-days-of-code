//4.The population of a town is 100000. The population has increased steadily at the rate of 10% per year for the last 10 years. Write a program to determine the population at the end of each year in the last decade.
#include <stdio.h>
int main() {
    float p=100000.00;
    float a;
    for (int i=1; i<=10; i++)
    {
        a = p + p * 0.1;
    }
    printf ("%.2f",a);
    return 0;
}
