#include <stdio.h>
/**변수가 아무런 주소값을 가지고 있지 않을 때 NULL값 할당
 * 변수를 `널포인터`라고 함
*/

int main(){
    int * ptr=NULL;
    if(ptr){
        printf("ptr주소값에 NULL이 할당되지 않았습니다.\n");
    };
    if(!ptr){
        
        printf("ptr주소값에 NULL이 할당되었습니다.\n");
    };
    return 0;
};