#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int a[n];
    
    printf("enter the elemets of ");

    for(int i=0;i<n;i++){
        // printf("%d \t",arr[i]);
        scanf("%d",&a[i]);
    }
    printf("elements : ");

    for(int i=0;i<n;i++){

        printf("%d \t",a[i]);
    }

    
    printf("enter the element to insert at top of stack");
    scanf("%d",&a[n++]);

    printf("elements : ");

    for(int i=0;i<n;i++){

        printf("%d \t",a[i]);
    }


    

     a[n--];
    printf("elements : ");

    for(int i=0;i<n;i++){

        printf("%d \t",a[i]);
    }

    return 0;
}