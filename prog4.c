#include <stdio.h>

int main() {
    int rows, cols;

    
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int a[rows][cols];

    
    printf("Enter array's elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    
    int rowNum;
    printf("Enter row number: ");
    scanf("%d", &rowNum);

    
    int rowSum = 0;
    printf("Elements of row %d: ", rowNum);
    for(int j = 0; j < cols; j++) {
        printf("%d", a[rowNum][j]);
        rowSum += a[rowNum][j];
        if (j < cols - 1) {
            printf(", ");
        }
    }
    printf("\nThe sum of row %d: %d\n", rowNum, rowSum);

     
    int colNum;
    printf("Enter column number: ");
    scanf("%d", &colNum);

     
    int colSum = 0;
    printf("Elements of column %d: ", colNum);
    for(int i = 0; i < rows; i++) {
        printf("%d", a[i][colNum]);
        colSum += a[i][colNum];
        if (i < rows - 1) {
            printf(", ");
        }
    }
    printf("\nThe sum of column %d: %d\n", colNum, colSum);

    return 0;
}