#include<stdio.h>
void main(){
    char name[20], address[20];
    int roll, contact;
    FILE *fptr;
    fptr = fopen("E:\\c++\\string.txt","r");


    fscanf(fptr, "%s%d%d%s", &name, &roll, &contact, &address);

    printf("value=%s %d %d %s", name, roll, contact, address);
    fclose(fptr);

}

