/*
errno : 현재 발생한 에러 번호
char * sterror(int errno); :에러 번호를 설명하는 에러문자열을 반환하는 함수
void perror(const char *string): 오류 메세지를 stderr로 출력

*/
#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno;

int main(){
    FILE * pf;
    int errnum;
    /*일부러 잘못된 경로의 파일을 열기*/
    pf = fopen("unexist.txt","rb");

    if (pf==NULL){
        /*errno:마지막 발생한 에러 번호*/
        errnum=errno; 
    
        fprintf(stderr,"Value of errno:%d\n",errno);//Value of errno:2
        perror("Error printed by perror");//Error printed by perror: No such file or directory
        fprintf(stderr,"Error opening file:%s\n",strerror(errnum));//Error opening file:No such file or directory
    } else {
        fclose(pf);
    }

    return 0;

};