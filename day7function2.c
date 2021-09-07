#include<stdio.h>
//take something return nothing
void add(int, int); //funtion declaration in global variable form
void main()
{
    int x, y;
    printf("Enter two number:");
    scanf("%d%d",&x,&y);
    add(x,y); // actual arguments call by value

}
void add(int a, int b) //funtion define formal arguments
{
    int c;
    c = a+b;
    printf("sum is %d",c);

}
