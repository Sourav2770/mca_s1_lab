#include <stdio.h>
#define MAX 100  
int main()
{
    int a[MAX];   
    int top = -1;  
    int choice, element;

    while (1)
    {
        printf("\n_________MENU_________ \n");
        printf("1. PUSH \n");
        printf("2. POP \n");
        printf("3. PEEK \n");
        printf("5. EXIT \n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1: 
            if(top==MAX-1){
                printf("OVERFLOW\n");
            }
            else{
                printf("enter the element to be inserted");
                scanf("%d",&a[++top]);
            }
            break;

            case 2:
            if(top == -1)
            {
                printf("STACK UNDERFLOW \n");
            }
            else
            {
                a[--top];
                printf("ELEMENT POPPED \n");

            }
            break;


            case 3:
                printf("Elements are : \t");
                for (int i = 0; i <= top; i++)
                {
                    printf("%d \t",a[i]);
                }
                break;
                
            default:
                break;

        }
    }

}