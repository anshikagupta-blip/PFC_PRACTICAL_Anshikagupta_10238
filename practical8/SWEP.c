//Anshika Gupta
//ERP 10238
#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a, b;
 printf("Enter two numbers:\n");
 scanf("%d %d", &a, &b);

    swap(&a, &b);
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
/*
output
Enter two numbers:
5 9
After swapping:
a = 9
b = 5
*/
