#include <stdio.h>

/*
    Ctrl+Alt+Z 禅模式（zxl个人配置的）
    tasks.json 文件管生成、编译等方面；
    launch.json 文件管调试、运行.exe等方面；
    Ctrl + Shift + B 编译生成.exe文件
    F5 调试运行（如果打断点就是调试，没打就是运行，其实本质是一样的）

    逐过程：不会进入函数
    逐语句（单步）：会进入函数
*/
int main(){
    printf("Hello world.\n");
    return 0;
}