#define MAX_VAL 20 //MAX_VAL 상수값 정의

//현재파일에 명시된 파일들 포함
#include <stdio.h>
#include "myheader.h"

#define FILE_SIZE 30
//기존에 정의된 상수값 정의를 해제
//이후에 다시 정의가능
#undef FILE_SIZE
#define FILE_SIZE 42


//솔직히 이건 코드 보면서 써봐야 하는 거 같은 
// 3분 PT 이해 안가.