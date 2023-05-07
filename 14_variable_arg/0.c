/*
가변인자는 함수에 인자의 개수가 가변적으로 변하는 경우에 대해서
가변적인 부분은 ...로 선언
그리고 ,va_list,va_arg,va_end를 통해 입력받은 인자 접근
*/

#include <stdio.h>
#include <stdarg.h>

double average(int num,...){/*인자가 가변적으로 들어옴*/
    va_list valist;
    double sum =0.0;
    int i;

    //가변인자 바로 앞의 고정인자로부터 인자 목록 초기화
    va_start(valist,num);

    for(int i=0;i<num;i++){
        int arg=va_arg(valist,int);//차례대로 인자 읽어오기
        sum+=arg;
    }
    //가변인자를 모두 가져온 후 메모리 클리어
    va_end(valist);
    return sum/num;
};

int main(){
    printf("AVE : 2,3,4,5 =%0.3f\n",(float)average(4,2,3,4,5));
    //AVE : 2,3,4,5 =3.500
    printf("AVE : 5,10,15 =%f\n",(float)average(3,5,15));
    //AVE : 5,10,15 =6.666667
    return 0;
};