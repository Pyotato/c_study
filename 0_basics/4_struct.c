#include <stdio.h>
struct person {
    char gender;
    int age;
};
struct person man1,man2;
//재귀적으로
struct item {
    int value;
    struct item* next; // 멤버변수 next는 struct imem의 포인터 타입입
};
int main(){
    man1.age=19;
    printf("man1의 나이 :%d\n",(int)man1.age);
    return 0;
};
