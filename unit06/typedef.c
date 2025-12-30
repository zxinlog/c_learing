#include <stdio.h>


/*
    错误：接口不一致，改完函数没有改函数指针。
    注意：改了函数的接口类型（返回值类型，形参，函数名），要注意函数声明和对应的函数指针是否需要对应修改，防止出现接口不一致的清空。

    typedef 的用法：先定义一个普通的变量，前面添加 typedef , 这个变量就成为了对应的类型。
*/

typedef char int_8;
typedef short int_16;
typedef int int_32;
typedef long long int_64;

typedef int_64(*PFunction) (int, int);

int_64 add(int a, int b){
    return a+b;
}

int main(){
    int_8 ch = 65;
    int_16 num_a = 32;
    int_32 num_b = 2100000000;
    int_64 num_c = 9900000000LL;
    
    printf("ch = %c, num_a = %d, num_b = %d, num_c = %lld.\n", ch, num_a, num_b, num_c);

    PFunction function;
    function = add;
    int_64 ret = function(num_a, num_b);

    printf("%d + %d = %ld\n\n", num_a, num_b, ret);

    printf("sizeof(int_8) = %lu.\n",(unsigned long) sizeof(ch));
    printf("sizeof(int_16) = %lu.\n", (unsigned long)sizeof(num_a));
    printf("sizeof(int_32) = %lu.\n", (unsigned long)sizeof(num_b));
    printf("sizeof(int_64) = %lu.\n",(unsigned long) sizeof(num_c));


    return 0;
}