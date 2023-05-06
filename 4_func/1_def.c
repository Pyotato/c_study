/*함수 정의*/
// int max(int num1,int num2){
//       // 지역 변수 정의
//    int result;
   
//    ...
  
//    return result; 
// };


#include <stdio.h>
int max(int num1,int num2){
    /*지역 변수 result*/
    int result;

    result=num1+num2;
    int* p_num1=&num1;
    int* p_num2=&num2;

    int p_r=*p_num1+*p_num2;
    // int* pr=&(p_num1+p_num2);
    //https://stackoverflow.com/questions/25761789/expression-must-have-integral-type
    printf("p_num1: %p\n",p_num1); //0x7ffd990078cc
    printf("p_num2: %p\n",p_num2); //p_num2: 0x7ffd990078c8
    printf("result:%d\n",result);//result:30
    printf("p_r: %d\n",p_r); //p_r: 30


    return result;
}

int main(){
    int a=10;
    int b=20;
    max(a,b);
    return 0;
};