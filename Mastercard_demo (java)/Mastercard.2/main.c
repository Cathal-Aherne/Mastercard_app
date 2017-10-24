#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str []= {"hello world\n"};
    int len = sizeof(str)/sizeof(str[0]);
    strreverse(str, len);
    strreverse(str, len);
}

void strreverse(char str [], int len)
{
    int i = 0;
    int j = len;
    for(i=len+1;i>-1;i--)
    {
        printf("%c", str[i]);
    }
    return 0;


}

void strreverse2(char str [], int len)
{
    printf("%c", str[len]);
    len--;
    strreverse(str, len);
}
