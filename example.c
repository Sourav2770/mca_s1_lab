#include <stdio.h>

int main(){
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
        !
        printf("%d \t",a[i]);
    }
    int pos;
    printf("\n enter the position to delete");
    scanf("%d",&pos);
    pos--;
    for(int i = pos; i <n-1; i++ ){
        a[i]=a[i+1];
    }
    n--;

    for(int i=0;i<n;i++){
        printf("%d \t",a[i]);
    }
    printf("\n enter the position to insert : ");
    scanf("%d",&pos);
    pos--;

    int arr[n+2];

    for(int i = 0; i <n-1; i++ ){
        arr[i]=a[i];
    }

    for(int i = pos; i <n-1; i++ ){
        arr[i+1]=a[i];
    }
    printf("\n");
    for (int i = 0; i <=n; i++)
    {
       printf(" %d",arr[i]);
    }
    
    return 0;

}