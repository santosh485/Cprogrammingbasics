#include<stdio.h>
void main(){
    int num;
    FILE *fptr;
    if((fptr=fopen("E:\\home.txt","r"))==NULL){
        printf("Error! opening file");
        exit(1);
    }
    fscanf(fptr, "%d",&num);
    printf("value=%d",num);
    fclose(fptr);
}
