#include<stdio.h>
#include<stdlib.h>

int c(int n,int r){
    if(r == 0 || n == r){
        return 1;
    }
    else{
        return c(n-1, r-1) + c(n-1,r);
    }
    if(r>n){
        return 0;
    }
}

int main(){
    printf("%d\n",c(4,1));
    return 0;
}