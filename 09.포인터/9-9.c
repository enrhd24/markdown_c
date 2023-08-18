#include <stdio.h>

void swap(int x, int y);

int main(void){
    int a = 10, b = 20;

    swap(a,b);
    printf("a:%d\n, b:%d\n", a, b);

    return 0;
}

void swap(int x, int y){
    int temp;

    temp = x;
    x = y;
    y = temp;
}