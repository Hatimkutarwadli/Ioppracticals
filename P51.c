#include <stdio.h>
int main () {
    int rows;
    printf("Enter the Rows: ");
    scanf("%d", &rows);
    for (int i=1; i<rows+1; i++) {
        for (int j=0; j<rows; j++){
            if (j==i-1) {
                printf("1");
            }
            else {
                printf("0");
            }
        }
        printf("\n");
    }
}