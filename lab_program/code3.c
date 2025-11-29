//3.Write a program that prompts the user to enter their name and age.
#include <stdio.h>
int main ()
{
    char name [50];
    int age;
    printf ("Enter your name :\n");
    scanf ("%49s",&name);
    printf ("Enter your age:\n");
    scanf ("%d",&age);
    printf ("Hello %s!You are %d years old\n",name,age);
    return 0;
}