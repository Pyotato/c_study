/*
    프로그램이 오류없이 완료한 경우
    프로그램은 EXIT_SUCCESS 값으로 반환하는 것이 일반적
    EXIT_SUCCESS 값이 0으로 정의된 매크로
    만약 프로그램에 오류 조건이 있고 종료되는 경우 == -1
    EXIT_FAILURE로 종료  
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int dividend=20;
    int divisor=5;
    int quotient;

    if (divisor==0){
        fprintf(stderr,"0으로 나눌 수 없음! 종료 중...\n");
        exit(EXIT_FAILURE); // -1 반환
    }

    quotient=dividend/divisor;
    fprintf(stderr,"몫:%d\n",quotient);//몫:4
    exit(EXIT_SUCCESS);//0반환
    return 0;
}