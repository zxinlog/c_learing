#include <stdio.h>
/*

    通过 while 循环，计算数列累加和。
*/
int main(){
    int num, sum;
    printf("输入数列（输入0停止）");
    sum = 0;

    scanf("%d",&num);
    while(num != 0){
        sum += num;
        scanf("%d",&num);
    }

    printf("累加和为：%d\n", sum);
    return 0;

}