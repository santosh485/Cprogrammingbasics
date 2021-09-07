#include<stdio.h>
struct threenum
{
    int n1, n2, n3;
};
void main()
{
    int n;
    struct threenum num;
    FILE *fptr;
    if((fptr=fopen("E:\\c++\\binary.bin","rb"))==NULL)
    {
        printf("Error");
        exit(1);
    }
    for(n=1;n<=5;++n){

    fread(&num,sizeof(struct threenum),1,fptr);
    printf("n1:%d\tn2=%d\tn3=%d",num.n1,num.n2,num.n3);

    }
    fclose(fptr);

}

