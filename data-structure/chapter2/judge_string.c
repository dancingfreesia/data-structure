#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool judge(char a[])
{
    // 定义函数的返回值
    int ret = true;

    // 定义临时变量
    int i = 0;
    int top = -1;

    // 具体实现
    while (a[i] != '\0') {
       switch (a[i]) {
       case 'I': 
           top++;
           break;
       case 'O':
           if (top == -1) {
               ret = false;
               break;
           } else {
               top--;
               break;
           }
       default:
           ret = false;
           break;
       }
       i++;
    }
    if (top != -1) {
        ret = false;
    }

    // 在返回前的一些操作
    if (ret == false) {
       printf("string is not legal!\n");
    } else {
       printf("string is legal!\n");
    }

    return ret;
}

int main(void)
{
    char *a = "IOIIOIOO";
    char *b = "IOOIOIIO";
    char *c = "IIIOIOIO";
    char *d = "IIIOOIOO";

    judge(a);
    judge(b);
    judge(c);
    judge(d);

    return 0;
}
