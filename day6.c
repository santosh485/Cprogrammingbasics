// sum of digits in a number
#include<stdio.h>
void main()
{
    int num,q,r,sum=0;
    printf("Enter a number: \t");
    scanf("%d",&num);

    do{
        q=num/10;
        r=num%10;
        num=q;
        sum+=r;
    }
    while(q!=0);
    printf("sum of digits =%d\n",sum);

}
