#include <stdio.h>

void add_tem(int a);

int main(void){
    int a = 10;

    add_tem(a);
    printf("a : %d\n", a);

    return 0;
}

void add_tem(int a){
    a += 10;
}