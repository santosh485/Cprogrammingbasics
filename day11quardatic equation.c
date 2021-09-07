#include<stdio.h>
#include<math.h>
void main(){
    float a,b,c,d,r1,r2,rp,ip;
    int switchexpression;
    printf("Enter three number a, b, c: \n");
    scanf("%f%f%f",&a,&b,&c);
    d = b*b-4*a*c;
    if(d>0)
        switchexpression = 500;
    else if(d=0)
        switchexpression =600;
    else
        switchexpression = 700;
    switch(switchexpression){
    case 500:
        r1= (-b+sqrt(d))/2*a;
        r2= (-b-sqrt(d))/2*a;
        printf("roots are real and unequal which are %f%f\n",r1,r2);
        break;

    case 600:
        r1= r2= (-b)/2*a;
        printf("roots are real and equal %f%f\n",r1);
        break;

    case 700:
        rp= (-b)/2*a;
        ip= sqrt(4*a*c-b*b);
        printf("root 1 = %f + i(%f)\n",rp,ip);
        printf("root 1 = %f - i(%f)\n",rp,ip);
        break;
    default:
        printf("Errror");
        break;
    }
}
