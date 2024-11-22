#include <stdio.h>

int main() {
    int size, i;

     
    printf("Enter the array's size: ");
    scanf("%d", &size);

    int array[size];  

    
    printf("Enter array's elements:\n");
    for (i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
    }

     
    printf("Negative elements from an Array: ");
    int foundNegative = 0;  

    for (i = 0; i < size; i++) {
        if (array[i] < 0) {
            if (foundNegative) {
                printf(", ");  
            }
            printf("%d", array[i]);
            foundNegative = 1;  
        }
    }

    if (!foundNegative) {
        printf("None");  
    }

    printf("\n");  
    return 0;
}