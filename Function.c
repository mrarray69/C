#include<stdio.h>
int main ()
{
int OurNum;
printf("Please enter the number:");

scanf("%d",&OurNum);
Evalulate(OurNum);

return 0;
}

void Evalulate(int OurNum)
{
    if (OurNum>10)
     {
          printf ("The number you entered more then 10");
     }
    if (OurNum==10)
    {
         printf ("The number you entered equal to 10");
    }
    if (OurNum<10)
    {
         printf ("The number you entered less then 10");
    }

}

