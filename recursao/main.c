#include <stdio.h>
#include <stdlib.h>
void imprimir(int x){
    return x == 0 ? printf("%d\n", x): (printf("%d\n", x) ,imprimir(x-1));
}

int main(){
    imprimir(10);
    return 0;
}