#include<stdio.h>
#include<string.h>

int main()
{
    int c;
    do
    {
        c=getchar();
        c=toupper(c);
        putchar(c);
    }

        while(c!='\n');


    return 0;
}
