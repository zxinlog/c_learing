#include <stdio.h>

/*
    打印简单的平方表
*/
void squart2(int n){
    for(int i=1;i<=n;i++){
        printf("%d : %d\n", i, i*i);
    }
}

/*
    打印 9 9 乘法表
*/
void nine_squart(void){
    for(int i=1;i<10;i++){
        for(int j=1;j<=i;j++){
            printf("%d * %d = %d\t", i , j, i*j);
        }
        printf("\n");
    }
    printf("\n");
}


int main(void){
    int i, n;
    printf("程序打印平方表.\n");
    printf("输入表格最大数:");

    scanf("%d",&n);
    i = 1;
    while(i <= n){
        printf("%10d  :  %10d\n", i, i*i);
        i += 1;
    }

    // 通过函数形式打印简陋的平方表
    printf("输入表格最大数（函数式）");
    scanf("%d", &n);
    squart2(n);

    printf("99乘法表\n");
    nine_squart();

    return 0;
}