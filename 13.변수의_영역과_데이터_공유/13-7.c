#include <stdio.h>

void add_tem(int *pa);

int main(void){
    int a = 10;

    add_tem(&a);
    printf("a : %d\n", a);

    return 0;
}

void add_tem(int *pa){
    *pa = *pa + 10;
}