#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#define Greetings "Hello"

int main()
{
    char *UserName;
    int i=0;
    UserName=malloc(sizeof(char)*16);
    printf("Please enter your name:");
    fgets(UserName,16,stdin);
    printf(Greetings);
    printf(" %s",UserName);
     for(i;i<strlen(UserName);i++)
    {
        printf("The %d address is : %c \n",i+1,&UserName);
    }


   // char *sto;
    //sto=malloc(sizeof(char)*SIZE);
   // if  (sto==NULL)
   // {
   //     puts("Memory error");
   //     return 1;
   // }
   // else
   // {
   //   printf("%d bytes of memory allocated at %p\n",SIZE,sto);
   // }
    return 0;
}
