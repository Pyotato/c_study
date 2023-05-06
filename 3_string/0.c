#include <stdio.h>
/*
문자열은 문자타입의 1차원 배열임
항상 마지막 이 NULL 끝남
문자열을 선언하고 초기화 방법 3
*/
int main(){
    /*a변수에 문자 'x'할당*/
    char a='x';
    printf("a:%c\n",a);//a:x

    /*greeting 이라는 6개의 요소로 구성된 배열을 정의*/
    char greeting1[]="hello";
    printf("greeting1\n");
    for(int i=0;i<6;i++){
        printf("%c",greeting1[i]);
        if (i==5){
            printf("\n");
        };
    };
    printf("greeting2\n");
    char greeting2[6]={'h','e','l','l','o','\0'};
    for(int i=0;i<6;i++){
        printf("%c",greeting2[i]);
                if (i==5){
        printf("\n");
        };
    };

    /*hello라는 문자열을 가르키느 포인터 greeting*/
    char* greeting3 = "hello";

    printf("greeting3:%p\n",greeting3); //greeting3:0x556aaab1e01e

    return 0;
};