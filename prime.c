#include<stdio.h>

int isPrime(int x){
    if(x==1) return 0;
    for(int i=2;i<x;i++) if(x%i==0) return 0;
    return 1;
}

int main(){
    //for(int i=1;i<100;i++)
    //    printf("%d = %d\n",i,isPrime(i));
    return 0;
}