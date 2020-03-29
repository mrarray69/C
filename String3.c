#include<stdio.h>
#include<string.h>

int main()
{
    char a[10];
    char b[10];
    char c[20];
    printf("Enter first string:\n");
    fgets(a,10,stdin);
    printf("Enter second string:\n ");
    fgets(b,10,stdin);
  strcpy(c,a);
  strcpy(c,b);
    printf("%s",c);
   return 0;
}
