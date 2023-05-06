/*
함수 선언은 컴파일러에게  함수의 모양을 알려주는 역할
함수의 실제 구현 (정의)와 선언을 분리함
파일 내에서 다른 함수에서 뒤에서 구현될 함수를 호출하기 위해서는
함수의 모양을 미리 알고 있어야함
전방선언(forward declaration)을 통해 컴파일러에게 함수의 모양을 알려줌
*/
/*전방선언*/
#include <stdio.h>
/*함수의 전방선언, 구현없이 선언만 미리!*/
int max(int num1, int num2);

int main(){
  
    int a=100;
    int b=200;
    int ret;

    //함수 호출
    ret= max(a,b);
    printf("Max value is %d\n",ret);
    //Max value is 200
    
    return 0;
};

int max(int num1,int num2){
    int result;
    if (num1>num2)
        result =num1;
    else 
        result =num2;
    return result;
};