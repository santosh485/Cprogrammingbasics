#include<stdio.h>
void main(){
    int a[3][3], b[3][3], c[3][3],i,j;
    printf("Enter the value of 9 number for a:\n");
    for (i=0;i<=2;i++){
        for (j=0;j<=2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");

    printf("Enter the value of 9 number for b:\n");
    for (i=0;i<=2;i++){
        for (j=0;j<=2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");

    for (i=0;i<=2;i++){
        for (j=0;j<=2;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

}
