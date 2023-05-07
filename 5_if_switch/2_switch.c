#include <stdio.h>
int main(){
    
    int a=20;

    switch(a){
        case 10:
            break;
        case 20:
            printf("a=%d\n",a);
        default: //optional , 그외
            // statement(s);
            printf("else");
            
    };

    return 0;
};