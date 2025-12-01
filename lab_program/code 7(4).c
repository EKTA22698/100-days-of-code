//4.Create a union containing 6 strings: name, home_address, hostel_address, city, state and zip. Write a C program to display your present address. 
#include <stdio.h>

union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[20];
};

int main() {
    union Address addr;

    printf("Enter Name: ");
    scanf(" %[^\n]", addr.name);
    printf("Name: %s\n", addr.name);

    printf("Enter Home Address: ");
    scanf(" %[^\n]", addr.home_address);
    printf("Home Address: %s\n", addr.home_address);

    printf("Enter Hostel Address: ");
    scanf(" %[^\n]", addr.hostel_address);
    printf("Hostel Address: %s\n", addr.hostel_address);

    printf("Enter City: ");
    scanf(" %[^\n]", addr.city);
    printf("City: %s\n", addr.city);

    printf("Enter State: ");
    scanf(" %[^\n]", addr.state);
    printf("State: %s\n", addr.state);

    printf("Enter ZIP Code: ");
    scanf(" %[^\n]", addr.zip);
    printf("ZIP Code: %s\n", addr.zip);

    return 0;
}
