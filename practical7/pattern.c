#include <stdio.h>

int main() {
    //Anshika Gupta
    //ERP 10238
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j <= i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}
/* output
A
AB
ABC
ABCD
*/