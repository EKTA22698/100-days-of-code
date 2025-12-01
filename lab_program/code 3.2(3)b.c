//3.	WAP to generate the following set of output.
/*b.	
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1

*/
#include <stdio.h>
int main() {
    int rows=5;
    for (int i = 0; i < rows; i++)
    {
        for (int s = 0; s < rows - i; s++) {
            printf(" ");
        }
      int val = 1; 
        for (int j = 0; j <= i; j++) {
            printf("%d ", val);
            val = val * (i - j) / (j + 1);  
        }

        printf("\n");
    }

    return 0;
}
