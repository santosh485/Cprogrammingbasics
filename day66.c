#include<stdio.h>
void main()
//break
//prime number
{
    int i,num,sum=0;
    for(i=1;i<=10;i++){
        printf("Enter a num:");
        scanf("%d",&num);
        if(num==5){
            continue; //break; if else
        }
        sum+=num;
        }

        printf("Sum is: %d\n",sum);


}
