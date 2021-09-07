#include<stdio.h>
void main(){
    //assignment operator
    int a=5, b = 5, c=4, res;
    //c =a;
    printf("c = %d\n",c);
    c +=a;
    printf("c = %d\n",c);
    c -=a;
    printf("c = %d\n",c);
    c *=a;
    printf("c = %d\n",c);
    c /=a;
    printf("c = %d\n",c);
    c %=a;
    printf("c = %d\n",c);

    //relational operator
    printf("%d == %d is %d\n",a,c, a==c);
    printf("%d > %d is %d\n",a,c, a>c); //1 true
    printf("%d != %d is %d\n",a,c, a!=c);

    //logical operator
    res = (a==b) && (c>b);
    printf("(a==b) && (c>b) is %d\n",res);
    res = (a==b) || (c>b);
    printf("(a==b) || (c>b) is %d\n",res);
    res = !(a==5);
    printf("!(a==5) is %d\n",res);
    res = !(a!=5);
    printf("!(a!=5) is %d\n",res);
    printf("output =%d\n",a&b);
    printf("output =%d\n",a|b);
    printf("output =%d\n",a^b);


}
