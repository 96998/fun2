#include <stdio.h>

void add(int a,int b);
void del(int a,int b);
typedef void (*p)(int a,int b);         //定义一个函数指针类型
void fun(p,int a,int b);                //函数的参数为函数指针
int main() {
    int a=3;
    int b=2;
    fun(add,a,b);
    fun(del,a,b);                       //等价于(*fun)(del,a,b)
    (*fun)(del,a,b);
}

void add(int a,int b)
{
    printf("%d\n",a+b);
}

void del(int a,int b)
{
    printf("%d\n",a-b);
}

void fun(p p1,int a,int b)
{
    p1(a,b);            //等价于(*p1)(a,b)
}