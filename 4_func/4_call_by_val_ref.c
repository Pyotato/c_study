//함수 호출 시 함수에 인자를 넘겨주는 방식
/*call by val
arg를 파람에 복사
함수 내부에서 파람을 수정하더라도 arg에 영향없음
*/


/*call by ref
arg의 주소값을 파람에 복사하여 넘겨주는 방식
주소가 넘어가서 함수내부에서 파람이 가르키고 있는
주소의 내용 변경, args 영향 주게 됨
*/
#include <stdio.h>
void f(int v);
int main(){
    int x=2;

    f(x); //값을 인자에 전달

    void f(int* v);
    f(&x); //주소를 인자에 전달


};
