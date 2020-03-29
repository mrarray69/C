#include<stdio.h>
#include<string.h>

int main()
{
  //int a,b,c,*p;

 // a='A';
 // p=&a;
 // b=*p;
 // p=&c;
 // *p='Z';

 //  printf("Value of a=%c \n",a);
 //  printf("Value of b=%c \n",b);
 //  printf("Value of c=%c \n",c);

 int array[]={11,13,17,19};
 int *aptr;
 aptr=array;
 printf("this is value of aptr: %d \n",aptr);
 printf("this is value of *aptr: %d",*(aptr));




  return 0;
}
