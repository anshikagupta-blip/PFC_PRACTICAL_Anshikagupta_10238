#include <stdio.h>
//Anshika Gupta 
//ERP 10238

int sumOfDigits(int n)
{
    int sum = 0;
    while(n > 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("sum of digit = %d", sumOfDigits(n));
    return 0;

}
/*
output
Enter number: 4132
sum of digit = 10
*/
