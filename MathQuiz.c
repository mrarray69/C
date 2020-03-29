#include<stdio.h>


int main()
{
    float a,b;
    int res;
    printf("Please enter value for a \n");
    scanf("%f",&a);
    printf("Please enter value for b\n");
    scanf("%f",&b);
    printf("The value of %f and value of %f \n",a,b);
    printf("For subtracting enter 1 \n, for multiplying 2,\n for dividing 3\n");
    scanf("%d",&res);
    if (res==1)
    {
         printf("%f-%f=%f",a,b,a-b);
    }
    if (res==2)
    {
        printf("%f*%f=%f",a,b,a*b);

    }
    if(res==3)
    {
        printf("%f:%f=%f",a,b,a/b);
    }
return 0;
}
