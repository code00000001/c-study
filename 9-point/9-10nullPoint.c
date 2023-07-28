#include <stdio.h>
//不安全的用法
int main(){
    char *str = NULL; //要对没有初始化的指针赋值为null，才不会报错
    if(str == NULL){
        printf("(null)\n");
        return 0;
    }
    gets(str);
    printf("%s\n", str);
    return 0;
}