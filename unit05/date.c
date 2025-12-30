#include <stdio.h>
/*

    enum 定义枚举类型，定义方式为： enum WEEK{Monday, Tuesday, ...等等} 
*/
// 输入标准格式日期，输出日期介绍
int main(void){
    int month, day, year;
    printf("Enter date.(mm/dd/yy)");

    // 输出日期
    scanf("%d /%d /%d",&month,&day,&year);
    printf("Dated this %d, ", day);

    switch(day){
        case 1: 
        case 21:
        case 31:
            printf("st");
            break;
        case 2:
        case 22:
            printf("nd");
            break;
        case 3:
            printf("rd");
            break;
        default:
            printf("th");
    }
    printf("day of ");

    switch(month){
        case 1: 
            printf("January"); 
            break;
        case 2:
            printf("February");
            break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;
    }

    printf(", 20%.2d.\n",year);

    return 0;

}