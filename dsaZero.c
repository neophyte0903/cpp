#include<stdio.h>

int main()
{
    /* code */
    int size, a[50];
    printf("enter size of array");
    scanf("%d",&size);
    printf("enter elements of array");
    for (int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("elements in array are:");
    for (int i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
