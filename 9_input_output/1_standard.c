/*표준 입출력 파일
C프로그래밍에서 (키보드,화면출력, 에러등)은 파일로 취급
이들 파일 장치는 프로그램이 실행될 떄 자동으로 파일이 열려있음
다음 파일 포인터를 이용해 접근가능

standard input - filepointer =stdin , device ==keyboard
standard output - filepointer = stdout, device ==screen
standard error - filepointer = stderr, device == my screen

*/

#include <stdio.h>
int main(){
    /*char 100개를 담을 str 배열 변수*/
    char str[100];
    printf("문자열을 입력하세요:");
    gets(str);

    printf("\n입력된 문자열 :");
    puts(str);
    
    return 0;
};
