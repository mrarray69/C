#include<stdio.h>
#include<ctype.h>


int main()
{

    int acter;
    do
    {
       acter=getchar();
       if(isalpha(acter))
       printf ("This is a alpha value: ");
       putchar(acter);
       if(isdigit(acter))
       printf("\n This is  a digit value:");
       putchar(acter);
           }
    while (acter!='\n');


    return 0;
}
