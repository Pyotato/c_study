#include <stdio.h>
 
int count ;
extern void write_extern();  // write_extern 함수가 다른 파일에 정의되어 있음
 
main() {
    count = 5;
    write_extern();
}