//预处理指令，引入标准输入输出库
#include <stdio.h>

//声明sum函数，有两个int类型的形参
int sum(int, int);
//声明printInt函数，有一个int类型的形参。
void printInt(int);
//定义test1
void test1()
{
    //声明定义并且初始化一个int 变量
    int result = 0;
    //给result赋值，通过调用函数sum计算
    result = sum(4, 1);
    //打印字符串
    printf("the result is %d \n", result);
}
/**
 * 定义函数test2,用来验证简单的值传递是否操作同一个变量。
 */
void test2()
{   //声明定义初始化整形变量a
    int a = 1;
    //调用函数printInt函数，
    printInt(a);
    //打印a的值，
    printf("a is %d\n", a);
}
//主函数
int main(int arg, char *argv[])
{
    // test1();
    test2();
    //返回值
    return 0;
}
/**
 * 定义并实现sum方法，返回值是int类型，两个形参
 */
int sum(int a, int b)
{
    return a + b;
}
/** 
 * 定义实现printInt函数，无返回值。一个int类型的形参 
 */
void printInt(int b)
{
    //定义int类型的变量
    int c = 1;
    //修改b的值
    b = sum(c, 1);
    //打印b的值
    printf("b is %d\n", b);
}
