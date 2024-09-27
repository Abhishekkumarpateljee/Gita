#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int output[n];

    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for (int i = 0; i < n; i++) {
        output[i] = -1;
    }


    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0 && arr[i] < n) {
            output[arr[i]] = arr[i];
        }
    }

    
    printf("Rearranged array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", output[i]);
    }
    printf("\n");

    return 0;
}
