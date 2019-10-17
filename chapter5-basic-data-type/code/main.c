#include <stdio.h>

void test()
{
    int a;
    printf("%d \n", a); //在这里没有给变量a赋值，这是不安全的，因为系统会给这样的变量随意赋值，所以在使用前要给局部变量赋值。
}

int b;
void test1()
{
    printf("%d \n", b); //如果是全局变量，在没赋值的情况下会默认为0；
}

void test2()
{

    // char b = 'a';
    // printf("b code is %d\n", b);
    char a = 'A';
    char c = 65;
    printf("%c and %c \n", a, c);
}

void test3(){

}

int main(int arg, char *args[])
{
    // test();
    // test1();
    test2();

    return 0;
}
