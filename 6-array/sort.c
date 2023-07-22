#include <stdio.h>
#include <string.h>

int main(){
    int nums[10] = {4, 5, 2, 10, 7, 1, 8, 3, 6, 9};
    // 双层循环，定义i,j,temp。 i轮数，j每轮要比较的数
    int i, j, temp;
    for(int i =0; i<10-1; i++) { //因为有j+1， 所以这里是i<10-1
        // 每次比较前10-1-i个，表示后面i个已做好排序
        // 优化版，加上每轮比较是否有进行替换位置的标记，如果有说明当前轮还有没排序好的，i还得继续循环。 没有就说明已经走完了排序了，不需要继续i+1轮了
        int isSorted = 1;
        for(int j = 0; j<10-1-i; j++) {
            if(nums[j] > nums[j+1]) {
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
                isSorted = 0;
            }
        }
        if(isSorted) break; // isSorted=1 则为true
    }
    //排完序再逐个输出
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", nums[i]);
    }
    

    return 0;
}