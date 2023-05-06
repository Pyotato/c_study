#include <stdio.h>
#include <string.h>

int main(){
    char s1[12]="Hello";
    char s2[12]="World";
    char s2_2[30]="WorldofCoding";
    char s3[12];
    // printf("s1:%p,s2:%p,s3:%p\n",s1,s2,s3);
    //s1:0x7ffe390da714,s2:0x7ffe390da720,s3:0x7ffe390da72c
    
    /*s2을 s3로 복사*/
    //s1:0x7fffa2afd694,s2:0x7fffa2afd6a0,strcpy(s3,s2):0x7fffa2afd6ac
    // printf("s1:%p,s2:%p,strcpy(s3,s2):%p\n",s1,s2,strcpy(s3,s2));
    
    /*s1의 끝에 s2 concat*/
    // strcat(s1,s2);
    // printf("strcat(s1,s2) s1:%p,s2:%p,strcat(s1,s2):%p\n",s1,s2,strcat(s1,s2));
    //strcat(s1,s2) s1:0x7ffc24add090,s2:0x7ffc24add09

    /*s1의 길이*/
    // printf("strlen(s1) : %d\n",(int)strlen(s1)); //strlen(s1) : 5
    // /*s1의 길이
    // if (s1==s2) return 0
    // if (s1<s2) return less than 0
    // if (s1>s2) return more than 0
    // */
    // printf("strcmp(s1,s2) : %d\n",strcmp(s1,s2));

    /*s1문자열내에서 s2문자열이 처음 발견되는 포인터를 반환*/
    // printf("strstr(s2_2,s2) : %s\n",strstr(s2_2,s2)); //strstr(s2_2,s2) : W
    // printf("strstr(s2_2,s2) : %c\n",(char)*strstr(s2_2,s2)); //strstr(s2_2,s2) : W
    // printf("strstr(s2_2,s2) : %s\n",strstr(s2_2,s2)); //strstr(s2_2,s2) : WorldofCoding
    //strstr(s1,s2) : (nil) == nullpointer //strstr(s1,s2)
    
    /*s2의 n개의 문자만 s1으로 복사*/
    //strncpy(s1,s2,n) : Worlo
    // printf("strncpy(s1,s2,n) : %s\n",strncpy(s1,s2,3));
    
    /*s2의 n개의 문자만 s1끝으로 concat*/
    //strncat(s1,s2,n) : Worlo
    // printf("strncat(s1,s2,n) : %s\n",strncpy(s1,s2,3));
    
    /*s2_2,s2의 처음 n개의 문자만 비교*/
    printf("strncmp(s2_2,s2,n) : %d\n",strncmp(s2_2,s2,4));
    //strncmp(s1,s2,n) : -15
    //strncmp(s2_2,s2,n) : 0
    return 0;
};