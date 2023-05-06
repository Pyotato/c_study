#include <stdio.h>
/**
 * 길어진 타입 정의 또는, 
 * struct 타입 정의에 축약형 이름을 부여
*/
/*unsigned short 타입을  myunit 타입으로 정의*/
typedef unsigned short myunit;
/*a를 myunit 타입으로 정의*/
myunit a = 10;

/*struct person {...}를 person_type으로 정의*/
typedef struct person {
    char gender;
    int age;
} person_type;



typedef enum status {
    ON,
    OFF,
} myenum;


int main (){
    person_type man1;
    /*변수 man1은 person type임!*/
    man1.age=12; 
    myenum st = OFF;
    printf("man.age:%d\n",man1.age); //man.age:12
    printf("man.age:%d\n",st); //man.age:1
    return 0;
};
