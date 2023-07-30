#include <stdio.h>

int main(){
    int nums[10] = {1,2,3,4,5};
    //取下标等效的几种写法
    // printf("%d\n", *(nums + 3));  //编译器其实用的就是这种形式
    // printf("%d\n", nums[3]);
    printf("%d\n", 3[nums]);
    return 0;
}