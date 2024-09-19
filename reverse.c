#include<stdio.h>

int main(){
    int n;
    printf("enter the value on n\n");
    scanf("%d",&n);
    for(int i=n; i; i--){
        printf("the rverse no. is %d\n",i);
    }
    return 0;
}