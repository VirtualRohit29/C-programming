#include<stdio.h>

int main(){
    int n;
    int i=0;
    printf("enter the no.\n");
    scanf("%d",&n);

    printf("******||the multiplicaton of the given no.n||****** \n");
    for (int i = 1;i<=10 ; i++)
    {
        printf("%d*%d=%d \n",n,i,n*i);
    }
    
    return 0;
}