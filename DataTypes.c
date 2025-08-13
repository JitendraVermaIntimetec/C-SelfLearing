#include<stdio.h>

void main()
{
    //Data Types in C:
    int a=10;
    float b=2.2, b1=35e3;
    double c=121971991, c1 = 12E4;
    char d='J';


    printf("Integer value is : %d",a);
    printf("\n\n");

    printf("Two Float Values are : %f and %f",b,b1);printf("\n");
    printf("This will print only 2 values after point : %.2f and %.2f",b,b1);
    printf("\n\n");

    printf("Two Double values are : %lf and %lf",c,c1);printf("\n");
    printf("This will print only 2 values after point : %.2lf and %.2lf",b,b1);
    printf("\n\n");

    printf( "Char value is : %c",d);
    printf("\n\n");
    printf("--------------------------------------------");
    printf("\n");

    //Size of DataType

    int k;
    double h;
    float w;
    char m;
    printf("Size of all DataTypes is:-\n");
    printf("Size of int is : %zu",sizeof(k));printf("\n");
    printf("Size of double is : %zu",sizeof(h));printf("\n");
    printf("Size of float is : %zu",sizeof(w));printf("\n");
    printf("Size of char is : %zu",sizeof(m));printf("\n");
    printf("--------------------------------------------");
    printf("\n");
}