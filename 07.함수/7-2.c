#include <stdio.h>

int get_num(void);

int main(void){
    return 0;
}

int get_num(void){
    int num;
    printf("양수 입력 : ");
    scanf("%d", &num);
    while( num < 0){
        printf("영수를 입력하세요!\n");
        printf("양수 입력 : ");
        scanf("%d", &num);
    }
    return num;
}

