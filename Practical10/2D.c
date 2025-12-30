#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j;
    int max, min, diagSum = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    max = min = a[0][0];

    for(i = 0; i < r; i++) {
        int rowSum = 0;
        for(j = 0; j < c; j++) {
            if(a[i][j] > max)
                max = a[i][j];
            if(a[i][j] < min)
                min = a[i][j];

            if(i == j)
                diagSum += a[i][j];

            rowSum += a[i][j];
        }
        printf("Sum of Row %d = %d\n", i + 1, rowSum);
    }

    printf("Maximum Element: %d\n", max);
    printf("Minimum Element: %d\n", min);
    printf("Sum of Diagonal Elements: %d\n", diagSum);

    return 0;
}
