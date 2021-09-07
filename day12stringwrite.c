#include<stdio.h>
void main(){
    char name[20], address[20];
    int roll, contact;

    FILE *fptr;
    fptr = fopen("E:\\c++\\string.txt","w");
    printf("Enter name: \n");
    scanf("%s",&name);

    printf("Enter roll number: \n");
    scanf("%d",&roll);

    printf("Enter contact number: \n");
    scanf("%d",&contact);

    printf("Enter Address: \n");
    scanf("%s",&address);

    fprintf(fptr, "%s %d %d %s", name, roll, contact, address);
    fclose(fptr);

}
