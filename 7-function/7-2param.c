#include <stdio.h>
int sum(int m, int n){
    m += n;
    // 改变形参的返回值
    return m;
}

int main(){
    int m =1, n =2;
    int m1 = sum(m, n);
    // 实参不变
    printf("m=%d\n", m);
    printf("m1=%d\n", m1);
    return 0;
}