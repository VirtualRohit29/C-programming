#include<stdio.h>

int main(){
    int i=0;
    int sum;
    //int n;
   // printf("enter the no.\n");
    //scanf("%d",&n);
    while(i<=11){
        sum+=i;
        i++;
    }
    printf("the sum of the first n natural no is %d\n",sum);
    return 0;
}