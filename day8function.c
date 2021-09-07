#include<stdio.h>
//takes nothing return somtehing
int add(void);
void main(){
    int s;
    s = add(); //call
    printf("sum is %d",s);
}
int add(){
    int a=2,b=3,c;
    c=a+b;
    return (c);

}

