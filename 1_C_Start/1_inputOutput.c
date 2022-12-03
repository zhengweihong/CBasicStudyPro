#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d", &a); // 在变量前加取地址符
    printf("a=%d\n", a);

    scanf("%d%d", &b, &c);
    printf("b+c=%d\n", b + c);
    return 0;
}