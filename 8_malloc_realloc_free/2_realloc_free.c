#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char name[100];
    char *name2;
/*기존에 할당된 배열의 크기를 재조정*/
name2 = realloc(name2,300*sizeof(char));

/*malloc으로 할당한 메모리가 더이상 필요없어질 떄 메모리에서 소거(해제)*/
free(name2);
return 0;
};