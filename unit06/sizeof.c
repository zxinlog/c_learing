#include <stdio.h>

/*
    sizeof 的用法：变量、类型、常量；对类型判断长度时必须加括号，建议统一加括号。
*/

typedef char int_8;
typedef short int_16;
typedef int int_32;
typedef long long int_64;


int main(){
    int_8 ch = 65;
    int_16 num_a = 32;
    int_32 num_b = 2100000000;
    int_64 num_c = 9900000000LL;
    

    printf("sizeof(int_8) = %lu.\n",(unsigned long) sizeof(ch));
    printf("sizeof(int_16) = %lu.\n", (unsigned long)sizeof(num_a));
    printf("sizeof(int_32) = %lu.\n", (unsigned long)sizeof(num_b));
    printf("sizeof(int_64) = %lu.\n",(unsigned long) sizeof(num_c));


    return 0;
}