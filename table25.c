#include <stdio.h>
int main() {
    int n;
    int mul;
    printf("This is the program to Print Tables! \n");
    printf("Enter the Number of Table: \n");
    scanf("%d", &n);
    for (int i=1; i<=10; i++)
    {
        mul = i*n;
        printf("%d \n", mul);
    }
}