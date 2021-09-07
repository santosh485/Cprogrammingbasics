#include<stdio.h>
void main(){
    float x[10], l;
    int n, i=0;
    printf("Enter no of element: \n");
    scanf("%d",&n);
    printf("Enter elems: \n");
    for (i=0;i<n;i++)
        scanf("%f",&x[i]);
    l=x[0];
    for(i=0;i<n;i++){
            if(x[i]>1){
                l=x[i];
            }

    }
    printf("Largest element: %f",l);

}
