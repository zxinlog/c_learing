#include <stdbool.h>
#include <stdio.h>



/*

    输入数字，判断是否存在重复的数，例如122,2重复； 131,1重复。

*/

int main(){
    bool digit[10];
    for(int i=0;i<10;i++){
        digit[i] = 0;
    }

    int num;
    printf("输入一个数字：");
    scanf("%d",&num);

    int single_digit = 0;
    while(num != 0){
        single_digit = num % 10;
        num /= 10;
        if(digit[single_digit] != false){
            printf("数字重复！");
            return 0;
        }else if(digit[single_digit] == false){
            digit[single_digit] = true;
        }else{
            ;
        }
    }
    
    printf("不重复.");
    return 0;
}