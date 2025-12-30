#include <stdio.h>


/*
    数组是地主，占据大片土地。
    指针是路牌，指示地主的土地位置。

    数组退化为指针：数组传参时，一般会自身退化为指向这片土地的第一个位置的指针，即数组退化为指向第一个元素的指针，损失长度信息，在函数之间传递数组时，一般新增一个参数，传递这个数组的有效使用长度。

    数组访问的实质： arr[2]   完全等同于  *(arr+2); 此处的2表示下标为 2 的元素，C语言底层会继续做真实的地址计算，例如 arr[2] = *(arr + 2 * sizeof(int)) 这样，目前不必深究。辅助理解：2是楼层，8是台阶。一层楼4个台阶。那么arr[2] 就是送你去2楼，解析为 *(arr+2)，但台阶数量则是 *(arr + 2 * sizeof(int)) = *(arr+8)，由编译器隐式完成。
*/

void func(int arr[]){
    printf("func 函数，arr数组退化指针大小 sizeof(arr) = %zd. \n", sizeof(arr));
}

int main(){
    int arr[5] = {1,2,3,4,5};

    int* ptr = arr;

    printf("sizeof(arr) = %zd.\n", sizeof(arr));
    printf("sizeof(ptr) = %zd.\n", sizeof(ptr));


    // 数组退化
    printf("main 函数，arr数组大小 sizeof(arr) = %zd.\n", sizeof(arr));
    func(arr);

    return 0;
}