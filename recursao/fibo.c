#include <stdio.h>
#include <stdlib.h>
int fibo(int x){
    return x==1 ?  0 : x == 2 ?  1 :  fibo(x - 1) + fibo(x - 2);
}

int main(){
    
    printf("%d\n", fibo(10));
    return 0;
}