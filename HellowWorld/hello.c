#include <stdio.h>

int main()
{
    char a[256];
    
    printf("Hello, world!\n");

    printf("문자열을 입력후 엔터를 누르세요!\n");

    scanf("%s", a);

    printf(" \" %s \" 를 입력하셨네요.\n", a);
    return 0;
}