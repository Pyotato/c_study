#include <stdio.h>
int values[10];
int main(){
    int values[10];
    printf("%d\n",(int)sizeof(values)); //40 --> 4바이트 * 10
    // printf("%\n",sizeof(values)); //약간 unsafe
    printf("%d\n",(int)sizeof(values[0])); //safe //4 --> int==4 바이트
    return 0;
}