#include <stdio.h>

int main(void){
    printf("%d\n", 12);
    printf("%d\n", 014);
    printf("%d\n", 0xc);
    
    printf("\n");

    printf("%o\n", 12); // 08진수
    printf("%x\n", 12); // 16진수
    printf("%X\n", 12); // 대문자
}