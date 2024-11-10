#include <stdio.h>
#include <stdlib.h>
int fact(int x){
    return x == 1? 1 : x * fact(x-1);
}

int main(){
    int n = fact(10);
    printf("%d\n", n);
    return 0;
}