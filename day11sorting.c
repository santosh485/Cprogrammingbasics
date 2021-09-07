#include<stdio.h>
void sort(int*, int);
void main(){
    int x[20],n, i;
    puts("Enter number of elements: ");
    scanf("%d",&n);
    puts("Enter element");
    for(i=0;i<n;i++)
        scanf("%d",&x[i]);
    sort(x,n); //function call
    puts("Sorted array is:");
    for(i=0;i<n;i++){
        printf("%d",x[i]);
    }


}
void sort(int *x, int n){
    int i,j,t;
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(x[i]>x[j]){
                t=x[i];
                x[i]=x[j];
                x[j]=t;
    }
}
