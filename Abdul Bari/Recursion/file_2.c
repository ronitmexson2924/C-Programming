#include<stdio.h>
#include<stdlib.h>
// int fun(int n){
//     static int x = 0;
//     if(n>0){
//         x++;
//         return fun(n-1) + x;
//     }
// }

//printing taylor series
int e(int x, int n){
    static int p = 1, f= 1;
    int r;
    if(n == 0){
        return 0;
    }
    
    r = e(x,n-1);
    p = p*x;
    f = f*n;
    return r+(p/f);
    
}
int main(){
    printf("%d",e(6,10));
    return 0;
}