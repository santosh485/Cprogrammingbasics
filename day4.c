#include<stdio.h>
void main(){
    int a=-2, test = 10;
    int b=5, num1=4, num2=5;
    printf("tilde operation =%d\n",~a); // bitwise-(n+1)
    printf("right shit =%d\n",b>>2);
    printf("left shift =%d\n",56>>2);
    printf("left shift =%d\n",14<<2);
    printf("caret operator =%d\n",a^b); //exclusive or


    if(test==5){
        printf("if executd!\n");
    }
    printf("false\n");

    if(a>0){
        printf("a is positive");
    }
    printf("a is negative\n");

    if(test>0){
        printf("Positive number\n");
    }
    if(test<0){
        printf("Negative number\n");
    }

    //if else statement using odd even
    if(b%2==1){
            printf("%d a is odd\n",b);

    }
    else{
            printf("%d a is even\n",b);
    }

    //if, else if, else
    if(num1==num2){
            printf("num1 and num2 are equal\n");
    }
    if else(num1>num2){
        printf("num1 is greater\n");
    }
    else{
        printf("num2 is greater\n");
    }

}
