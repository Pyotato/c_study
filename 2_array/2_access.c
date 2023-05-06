#include <stdio.h>
int main(){

    int values[10]={1,2,3,4,5,6,7,8,9,10};
    /*배열의 첫번째 요소 접근*/
    printf("values[0]:%d\n",values[0]); //values[0]:1
    /*배열의 3번째 요소 접근*/
    printf("values[2]:%d\n",values[2]); //values[2]:3
    /*배열의 3번째 요소 접근*/
    printf("values[2]:%d\n",*(values+2)); //values[2]:3

    /*배열의 3번째 요소의 주솟값 접근*/
    printf("values[2]:%p\n",&values[2]); //values[2]:0x7ffcf8d2b698
    /*배열의 3번째 요소의 주솟값 접근*/
    printf("values[2]:%p\n",values+2); //values[2]:0x7ffcf8d2b698
    return 0;
};