#include <stdio.h>

struct person{
    char gender;
    int age;
};

struct person man1;
struct person* woman1;


int main(){
    man1.gender='M';
    man1.age=21;
    printf("man1 is %dyears old and %c\n",man1.age,man1.gender);
    //man1 is 21years old and M
    woman1=&man1;
    woman1 ->gender='F';
    woman1 ->age=26;
    printf("woman1 is %dyears old and %c\n",man1.age,man1.gender);
    //woman1 is 26years old and F

    return 0;
};