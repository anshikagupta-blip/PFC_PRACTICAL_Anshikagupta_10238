#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int max, min;
    int evenSum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min
    max = min = arr[0];

    for(i = 0; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];

        if(arr[i] < min)
            min = arr[i];

        if(arr[i] % 2 == 0)
            evenSum = evenSum + arr[i];
    }

    // Reverse array
    printf("\nReversed Array: ");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    printf("\nMaximum Element: %d", max);
    printf("\nMinimum Element: %d", min);
    printf("\nSum of Even Elements: %d", evenSum);

    return 0;
}
