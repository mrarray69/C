#include<stdio.h>
#include<string.h>

int main()
{
   int i;
   float f;
   double d;
   char ch;
   struct str
   {
    char name[10];
    char lastname[20];
   };
   char array[10];


   printf("the size of integer: %lu \n",sizeof(i));
   printf("the size of float: %lu \n",sizeof(f));
   printf("the size of double: %lu \n",sizeof(d));
   printf("the size of char: %lu \n",sizeof(ch));
  // printf("the size of struct: %lu \n",sizeof(str));
   printf("the size of array of 10 is : %lu \n",sizeof(array));
}
