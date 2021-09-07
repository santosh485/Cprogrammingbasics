//FILE *fptr; fopen
//ptr = fopen("File_naem","mode") fprintf fscanf
//write
#include<stdio.h>
void main(){
    int num;
    FILE *fptr;
    fptr = fopen("E:\\home.txt","w");
    if (fptr==NULL){
        printf("Error");
        exit(1);
    }
    printf("Enter a number");
    scanf("%d",&num);
    fprintf(fptr,"%d",num);

    fclose(fptr);
}
