/*main함수의 원형*/
#include <stdio.h>
#include <string.h>
int main(int argc,char* argv[]){
    printf("argc:%d\n",argc);
    for (int i=0;i<argc;i++)
        printf("argv[%d] %s\n",i,argv[i]);

    return 0;//정수값 반환
};

/*
실행파일명== a.out
./(실행파일명) 123 456 
argc:1 //==argcount:커맨드라인에서 받은 인자의 개수
argv[0]: ./(실행파일명) //==argvalue:인자의 값
argv[1]: 123 //==argvalue[0]: 프로그램 이름
argv[2]: 456 //실제 프로그램의 첫번째 인자

argc:3
argc[0] ./a.out
argc[1] 123
argc[2] 456
*/