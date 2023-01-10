#include<stdio.h>

int main()
{
    /* code */
    //insertion/initialisation
    int size, a[50],pos,num;
    printf("enter size of array");
    scanf("%d",&size);
    if (size>50){
        printf("OVERFLOW");
    }
    else{
    printf("enter elements of array");
    for (int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    printf("enter data to insert");
    scanf("%d",&num);
    printf("enter position of element");
    scanf("%d",&pos);
    for (int i=size-1;i>=pos-1;i--){
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    size++;
    // traversal
    printf("elements in array are:");
    for (int i=0;i<size;i++){
        printf("%d\t",a[i]);
    }}
    return 0;
}
