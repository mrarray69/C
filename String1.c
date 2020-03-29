#include<stdio.h>
#include<string.h>

int main()
{
    char string[]="Just how long am I?";
    int len;

    len=strlen(string);
    printf("The following string:\n");
    puts(string);
    printf("is %d  character long.\n",len);

    return 0;
}
