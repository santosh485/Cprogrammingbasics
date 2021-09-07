#include<stdio.h>
void main(){
    int i,sum=0;
    int a=5, b= 20;
    for(i=a;i<=b;i++)
    //for (i=0;i<=5;i++){
            //sum=sum+i;
        //printf("\t%d\n",i);
        if (i%2==0){
            printf("even=%d\n",i);
            }
        else{
            printf("odd=%d\n",i);
            }
    //printf("Sum is : %d",sum);


}
