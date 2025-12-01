//3.	WAP to generate the following set of output.
/*a.	
  1
 2 3
4 5 6
*/
#include <stdio.h>
int main() {
    int n = 1,r=3;
    for (int i = 1; i <= r; i++) {      
        for (int s = 1; s <= r - i; s++) {
            printf(" ");               
        }
        for (int j = 1; j <= i; j++) {
            printf("%d ", n);
            n++;
            }
        printf("\n");
    }
    return 0;
}

