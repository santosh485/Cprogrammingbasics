#include<stdio.h>
long int factorial(int n)
{
    if(n==1)
        return(1);
    else
        return(n*factorial(n-1));

}
void main()
{
    int n=5,product=1, i;
    /*for(i=1;i<=5;i++){
        product = product*i;
    }*/
    printf("%ld",factorial(n));
}
