//二级指针
#include <stdio.h>

int main(){
    int a = 10;
    int *p1 = &a;
    int **p2 = &p1;
    int ***p3 = &p2;
    printf("%d, %d,%d,%d\n", a, *p1, **p2, ***p3);
    printf("&p1=%#X, p2=%#X\n", &p1,p2);
    printf("&p2=%#X, p3=%#X\n", &p2, p3);
    return 0;
}