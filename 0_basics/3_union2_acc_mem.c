#include <stdio.h>
#include <string.h>

union Data{
    int i;
    float f;
    char str[20];
};

int main(){
    union Data data;

    //union의 멤버 접근하기
    data.f=10;
    data.f=220.5;
    printf("data.str: %s\n",data.str);//data.str: C programming
    strcpy(data.str, "C programming");

    //다 같은 공간 공유
    printf("data.i : %d\n",data.i); //data.i : 1919950915
    printf("data.f : %d\n",(int)data.f);//data.f : -2147483648
    //16번째줄때문에 값변경
    printf("data.str: %s\n",data.str);//data.str: C programming

    return 0;
};