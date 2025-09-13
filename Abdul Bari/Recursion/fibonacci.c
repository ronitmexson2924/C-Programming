#include<stdio.h>
#include<stdlib.h>

int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        printf("%d ",n);
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
    printf("%d",fibonacci(9));
}