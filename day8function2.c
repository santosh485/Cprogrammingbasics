#include<stdio.h>
//takes something returns something
int add(int a, int b); //prototype/declaration
void main(){
    int x,y,s;
    printf("Enter two number: ");
    scanf("%d%d",&x,&y);
    s = add(x,y);
    printf("sum is %d",s);


}

int add(int a, int b){
    int c;
    c = a+b;
    return(c);
}
