#include <stdio.h>
  
extern int count;  // int타입 count 변수는 다른 파일에 정의되어 있음
  
void write_extern(void) {
   printf("count is %d\n", count);
}