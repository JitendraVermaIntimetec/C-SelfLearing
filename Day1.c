#include<stdio.h>

    int add(){
        int a=0;
        int b=12;
        return a+b;
    }

void main()
{
    
    printf("Hello World !\n");

    int a=10;
    int b;
    printf("%d\n",a);
    printf("Enter the value : ");
    scanf("%d",&b);
    printf("Your Entered value is : %d",b);
    printf("\n");

   printf("Sum is : %d ",add());
    printf("\n");
    printf("Your Entered value is %d: ",b,"\n");
}