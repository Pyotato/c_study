/*
malloc : memory+allocation
동적으로 메모리 할당하기
프로그램에서 배열을 정의할 때
배열의 정확한 크기를 모를때
포인터와 메모리할당함수(malloc)를 이용해서 
원하는 시점에 필요한 만큼의 배열을 생성 가능

malloc 대신 calloc 가능
https://dsnight.tistory.com/51
-> malloc과 calloc 기능은 동일 
-> 사용 형태가 조금 다름

* 왜 malloc을 해줘야할까?
연결리스트에서 사용 (C언어 자체가 연결리스트로 이루어짐)

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char name[100];
    /*char 배열을 가르킬 포인터 변수만 선언,
    아직 배열 크기 모름*/
    char *name2;
    /*200개의 문자를 담을 수 있는 배열을 동적으로 할당
    만약 메모리를 동적으로 할당할 수 없다면 malloc이 NULL 반환
    */
    name2=(char*) malloc(200* sizeof(char));
    if (name2==NULL){
        printf("에러 - 요청된 메모리가 할당되지 않았습니다.");
    }else{
        strcpy(name2, "좀 엄청긴 200자 정도의 이름을 여기에...");
    }
    printf("name:%s\n",name);
    printf("name2:%s\n",name2);

    return 0;
};