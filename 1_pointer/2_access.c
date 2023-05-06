#include <stdio.h>
int a =1;
/*a의 주소를 가져와서 int타입의 포인터 변수 x에 할당*/
int* x = &a;

struct person{
    char gender;
    int age;
};

struct person man;
struct person* pman;


int main(){
    /*포인터가 가르키는 주소에 들어있는 값을 b에 할당*/
    int b = *x;
    
    /*포인터가 가르키는 주소값, a의 주소값*/
    printf("x:%p\n",x); // x:0x556f9dd12010
    
    /*포인터가 가르키는 주소의 메모리에 들어있는 값, a의 값*/
    printf("*x:%d\n",*x); //*x:1
    
    /*포인터가 가르키는 주소의 메모리에 10으로 할당 a=10*/
    *x=10;
    
    printf("a:%d\n",a); // a:10


    man.gender='M';
    man.age=21;
    //man's gender is M and age is 21
    printf("man's gender is %c and age is %d\n",man.gender,man.age);
    /*포인터가 가르키는 struct의 멤버 접근*/
    pman = &man; 
    pman->age=23;
    printf("pman: %p\n",pman); //pman: 0x5571022d0030
    printf("man.age:%d\n",man.age); //man.age:23
    /*void 타입의 포인터 변수 y에 a의 주소값 할당*/
    void* y = &a;
    /*y가 어떤 타입을 가르키는지 몰라서 오류발생
    expression must be a modifiable lvalue
    */
    // *y=10;
    
    /*int타입의 포인터변수의 포인터인 y변수에 10할당*/
    /*y가 가르키는 주소가 int값을 담고 있는 메모리라고 알려줌*/
    *(int*)y=10;
    printf("y:%p\n",y);    //y:0x5571022d0010
    return 0;
};
