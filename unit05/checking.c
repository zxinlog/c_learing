#include <stdio.h>

/*
    提前优化是万恶之源。
    以前在学习过程中，对示例进行提前优化的行为，是工程学的行为，并不是学习中应该做的，人的认知带宽是有限的，一部分认知作为工程学去构建代码，那么用于学习理解的那部分认知带宽就会不够用，所以学习效率总是提升不上去，理解能力总是差那么一丝。

    学习阶段的目标是掌握“概念”，不是写出完美产品，完美主义不可取。示例程序用于验证自己理解了这个概念，表示自己弄懂了这个概念，而非让自己来提前优化。

    以前的问题：完美主义拖延 + 过早优化

    有效策略： （1）学习模式：实现核〔方案選單〕心逻辑，输入输出处理正确，不考虑健壮性，能跑就行；
              （2）工程模式：优化结构，补充可读性，添加错误处理，将项目作为一个工程考量。
*/

int main(){
    int cmd; // 命令
    float balance = 0.0f, credit, debit;
    printf("**** Checking-balancing program ****\n");
    printf("0 清空账户; 1 存钱; 2 取钱");
    printf("3 查看余额; 4 退出系统\n");

    while(1){
        printf("输入命令: ");
        scanf("%d",&cmd);

        switch(cmd){
            case 0:
                balance = 0.0f;
                break;
            case 1:
                printf("输入存钱金额: ");
                scanf("%f",&credit);
                balance += credit;
                break;
            case 2:
                printf("输入取钱金额: ");
                scanf("%f",&debit);
                balance -= debit;
                break;
            case 3:
                printf("当前余额：%.2f 元.\n",balance);
                break;
            case 4:
                printf("退出账户系统.\n");
                return 0;
            default:
                printf("指令错误，请重新输入.\n");
                break;
        }
    }
}