#include <stdio.h>
#include <string.h>
/**
 * 比较两个字符串大小
*/
int strcmp_function(char *str1, char *str2){
    int result, i;
    for(int i = 0; (result = str1[i] - str2[i]) == 0; i++) {
        if(str1[i] =='\0' || str2[i] == '\0') {
            break;
        }
    }
    return result;
}

int main(){
    char str1[] = "abcdefg";
    char str2[] = "abc";
    // 使用自定义函数
    int result = strcmp_function(str1, str2);
    printf("str1 -str2 = %d\n", result);
    return 0;
}