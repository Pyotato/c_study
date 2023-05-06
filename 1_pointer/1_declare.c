#include <stdio.h>
int a =1;
float b = 2.0f;





struct person{
    int age;
    char bloodtype;
}c;

/*struct person형의 변수 주소를 담는 변수 (포인터)*/
struct person* w=&c;



int main(){
/*int형 변수의 주소를 담을 수 있는 변수 (포인터)*/
int* x;
/*&는 해당 위치의 주소를 가져오는 연산자!*/
x=&a;

/*float형 변수의 주소를 담을 수 있는 변수 (포인터)*/
float* y;
y=&b;

printf("x:%p\n",x); //x:0x56099a98f010
printf("w:%p\n",w); //x:0x56099a98f028
/*모호한 타입의 주소를 담는 변수*/
void* z;
// z=x;
// z=y;
// z=w;
};
