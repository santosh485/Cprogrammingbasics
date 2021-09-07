// reusuable, by import , name(); function call
// name(){funtion define}
// way of function defintion
/* take nothing return nothing, taking something return something*/
#include<stdio.h>
void add(void);//declaration
void main()
{
    add(); //function call
}
void add()// function define
{
    int a=4,b=5,c;
    c=a+b;
    printf("%d",c);
}
