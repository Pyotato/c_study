#include <stdio.h>
/**
 * 여러개의 타입을 하나의 메모리 공간에 위치시킬때 사용합니다. 
 * 이때 메모리의 크기는 가장 큰 타입의 크기와 같습니다.  
 * */
union Data{ 
    char c;
    int i;
    char str[20];
};
int main(){

    union Data data;

    printf( "size: %d\n", (int) sizeof(data));

    return 0;
};