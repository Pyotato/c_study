#include <stdio.h>
struct person {
    unsigned int age:3; //멤버 age는 3비트 저장 공간 할당
    unsigned int height:5; //멤버 height는 5비트 저장공간 할당
} man; //man이라는 person타입 변수 선언

int main (){
    man.age=5;
    printf("Sizeof( man ) : %d\n",(int)sizeof(man)); //Sizeof( man ) : 4
    printf("man.age:%d\n",man.age); //man.age:5
    return 0;
};