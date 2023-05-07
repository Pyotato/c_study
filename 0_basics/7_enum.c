#include <stdio.h>
//숫자형 상수들을 하나의 데이터 타입으로 표현할때 사용합니다.
enum status1 {
    ON, //샹수 , 디폴트는 0 시작
    OFF,//샹수 , 이전 상수+1
};

enum status2{
    STATE_1=2,
    STATE_2=7,
};

int main(){

    // enum status1 a = ON;
    enum status1 a = ON;
    printf("a: %d\n",a); //a: 0

    enum status1 b = STATE_2;
    printf("b: %d\n",b); //b: 7

    return 0;
};