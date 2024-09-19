#include<stdio.h>

int main(){
    int i=0;
    int sum;
    //int n;
   // printf("enter the no.\n");
    //scanf("%d",&n);
    while(i<=10){
        sum+=8*i;
        i++;
    }
    printf("the sum of the first n natural no is %d\n",sum);
    return 0;
}