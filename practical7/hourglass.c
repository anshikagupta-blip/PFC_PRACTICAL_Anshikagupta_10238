#include <stdio.h>

int main() {
    //Anshika Gupta
    //ERP 10238
    int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++)
            printf(" ");
        for (j = 0; j < 2*n - 1 -2*i; j++)
            printf("*");
        printf("\n");
    }
        for (i = n - 2; i >= 0; i--) {
        for (j = 0; j < i; j++)
            printf(" ");
        for (j = 0; j < 2*n - 1 - 2*i; j++)
            printf("*");
        printf("\n");
    }
return 0;
}
/*
output
Enter n: 4
*******
 *****
  ***
   *
  ***
 *****
*******
*/

