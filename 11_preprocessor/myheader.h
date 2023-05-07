#ifdef MYHEADER
    #define MYHEADER
    //...
#endif

#ifdef DEBUG
    //만약 DEBUG 정의되어 있으면 이 부분 포힘
#endif

//여러문장으로 매크로가 이어질떄 \를 사용
#define message_for(a,b) \
    printf(#a " and " #b ": We love you!\n");

// square(10) -> ((10)*(10))으로 교체
#define square(x) ((x)*(x))
