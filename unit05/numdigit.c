#include <stdio.h>

/*
    计算一个数字的位数
    使用 do while 循环。
*/

int main(){
    int digit = 0;
    int n;
    printf("输入一个数值: ");
    
    scanf("%d",&n);

    do{
        n /= 10;
        digit += 1;
    }while(n != 0);

    printf("%d 的位数是 %d.\n", n, digit);

    return 0;
}