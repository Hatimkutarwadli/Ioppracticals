
#include <stdio.h>
 int main(){
 int arr1[10];
 int arr2[10];
 int arr3[10];
  printf("Enter integers for array1:\n");
    for(int i=0;i<10;i++){
        printf("Number [%d] :",i+1);
            scanf("%d",&arr1[i]);
     }
    printf("Enter integers for array2:\n");
    for(int i=0;i<10;i++){
        printf("Number [%d] :",i+1);
            scanf("%d",&arr2[i]);
     }
     printf("Sum of arrays is :\n");
     for(int i=0;i<10;i++){
        arr3[i]=arr1[i]+arr2[i];
        printf("%d\n",arr3[i]);
     }
 }
[09/10, 10:40] Swaakkinaa: 69
#include <stdio.h>
#include <string.h>
int main()
//PROGRAM TO PERFORM LINEAR SEARCH ON AN ARRAY.
{
    char arr[100],c;
    printf("Enter the statement/sentence/name.\n");
    fgets(arr,100,stdin);
    printf("Enter character for which you want to find index\n");
    scanf("%c",&c);
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]==c){
            printf("Index of %c is %d",c,i+1);
            break;
        }
    }
    return 0;
}
