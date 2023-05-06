#include <stdio.h>

int main(){
    /*10개의 요소를 가진 1차원 배열*/
    int values[10];
    /*3*2개의 요소를 가진 2차원 배열*/
    int values[3][2]={{1,2},{3,4},{5,6}};
    for(int y=0;y<3;y++)
        for(int x=0;x<2;x++)
            printf("values[%d][%d]: %d\n",y,x,values[y][x]);
    return 0 ;
};