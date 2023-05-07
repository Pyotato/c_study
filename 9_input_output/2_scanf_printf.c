#include <stdio.h>
// int scanf(const char *format,...); : stdin으로부터 format의 형태로 입력받기
// int printf(const char *format,...); : stdout에 format의 형태로 출력
int main(){

    char str[100];
    int i;
    printf("값을 입력하세요:");
    scanf("%s %d",str,&i); //str와 i를 stdin에서 입력받기
    printf("\nyou entered %s % d\n",str,i); //str,i를 stdout으로 출력하기
    
    return 0;
};