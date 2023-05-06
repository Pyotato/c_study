//함수 호출 시 함수에 인자를 넘겨주는 방식
/*call by val
arg를 파람에 복사
함수 내부에서 파람을 수정하더라도 arg에 영향없음
*/
#include <stdio.h>

void swap(int x,int y){

    int temp;

    temp =x;
    x=y;
    y=temp;
    return;

};
int main(){

    int a=100;
    int b=200;

    printf("swap전,a:%d\n",a);//swap전,a:100
    printf("swap전,b:%d\n",b);//swap전,b:200
    
    //call by value
    swap(a,b);

    printf("swap후,a:%d\n",a);//swap후,a:100
    printf("swap후,b:%d\n",b);//swap후,b:200
    return 0;


};

