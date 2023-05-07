#include <stdio.h>
int main(){

    int a=20;
    //if
    // if(a>20)
    //     printf("print this statement if a is bigger than 20");

    if(a>20){
        printf("print this statement if a is bigger than 20\n");

    } else if (a==20) {
        printf("print this statement if a equals 20\n");
    } else{
        printf("a=%d\n",a);
    };
    
     if(a>20){
        printf("print this statement if a is bigger than 20");

    } else {
        printf("print this statement if a is not bigger than 20");
    };


    return 0;
};