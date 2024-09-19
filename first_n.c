#include<stdio.h>

int main(){
    int i=0;
    int n;
    printf("enter the no.\n");
    scanf("%d",&n);
    do{
        printf("the first natural no. is%d\n",i+1);
        i++;
    }while(i<n);
    return 0;
}