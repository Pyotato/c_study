#include <stdio.h>
/*
배열은 같은 타입의 요소가 
연속적으로 고정된 길이만큼
존재하는 자료구조
*/

int main(){
    /*10개의 int를 담을 수 있는 변수 공간*/
    int values1[10];

    /*values요소들을 값으로 초기화*/
    int values2[10]={1,2,3,4,5,6,7,8,9,10};
    
    /*values를 초기화한 값들의 개수만큼 배열을 만듦*/
    int values3[]={1,2,3};
    for(int i=0;i<10;i++){
         printf("values2:%d\n",values2[i]);
    }
    /*
        values2:1
        values2:2
        values2:3
        values2:4
        values2:5
        values2:6
        values2:7
        values2:8
        values2:9
        values2:10
    */
    return 0;
};
