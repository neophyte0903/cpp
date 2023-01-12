
#include<stdio.h>


int main()
{
    /* code */
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

    //deletion 
    printf("enter a position");
    scanf("%d",&pos);
    if(pos<=0 || pos>size){
    printf("invalid position");
    }
    else{
        for(int i=pos-1;i<size-1;i++){
            a[i]=a[i+1];
        }
        size--;
    }

     printf("elements in array are:");
    for (int i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
    return 0;
    }}
