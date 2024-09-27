#include <stdio.h>

int main() {
    int n;

    
    printf("How many elements do you want in the array? ");
    scanf("%d", &n);

    int array[n];

    
    for (int i = 0; i < n; i++) {
        int num;
        while (1) {
            printf("Enter 0 or 1: ");
            scanf("%d", &num);
            if (num == 0 || num == 1) {
                array[i] = num;
                break; 
            } else {
                printf("Invalid input! Please enter only 0 or 1.\n");
            }
        }
    }

    
    printf("The array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
