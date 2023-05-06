#include <stdio.h>
/*
pointer
= 모든 변수는 메모리에 위치함
메모리 주소를 address
포인터는 이러한 메모리 주소를 담을 수 있는 "변수"
*/
int main(){
    int i=3;
    int* j=&i;
    printf("i:%d\n",i); //i:3
    printf("j:%p\n",j); //j:0x7fff026fc97c
    return 0;
};
