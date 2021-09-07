#include<stdio.h> /// reverse 152%10 r= 2*10+5=25*10+1 armstronng number = 153*3
void swap(int*, int*);
void main(){
    int a, b;
    printf("enter a and b:");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a=%d b=%d",a,b);

}
void swap(int *x, int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
