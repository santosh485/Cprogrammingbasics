#include<stdio.h>
#include<string.h>
void main(){
    char x[20]; //puts=>printf() gets=>scanf()
    int i=0; //char x[] = "string"
    puts("Enter string:");
    gets(x);
    puts(x);
    printf("enter string %s",x);
    //while(x[i]!='\0')
        //i++;
    for (i=0;x[i]!='\0';i++)
    printf("length = %d",i);
}
