//함수 호출 시 함수에 인자를 넘겨주는 방식
/*call by ref
arg의 주소값을 파람에 복사하여 넘겨주는 방식
주소가 넘어가서 함수내부에서 파람이 가르키고 있는
주소의 내용 변경, args 영향 주게 됨
*/
#include <stdio.h>

void swap(int* x,int* y){

    int temp;

    temp =*x;
    *x=*y;
    *y=temp;
    return;

};
int main(){

    int a=100;
    int b=200;

    printf("swap전,a:%d\n",a);//swap전,a:100
    printf("swap전,b:%d\n",b);//swap전,b:200
    
    //call by value
    swap(&a,&b);

    printf("swap후,a:%d\n",a);//swap후,a:200
    printf("swap후,b:%d\n",b);//swap후,b:100
    return 0;


};

