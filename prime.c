#include<stdio.h>
#include<math.h>

int PRIME[1000] = {};
int isPrime(int x){
    PRIME[1] = 0;
    PRIME[2] = 1;
    for(int i=2;i<x;i++){
        
    }
}


int main(){

    for(int i=1;i<100;i++)
        printf("%d = %d\n",i,isPrime(i));
    return 0;
}