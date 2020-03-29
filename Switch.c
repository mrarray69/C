#include <stdio.h>

int main()
{
    int res;
    printf("Please enter for RED 1 , for GREEN 2, for BLUE 3\n");
    scanf("%d",&res);
    switch  (res)
    {
       case 1:
    printf("RED");
    break;
    case 2:
        printf("GREEN");
        break;
    case 3:
        printf("BLUE");
        break;
    default:
        printf("Are you dump????");
        break;
    return 0;
    }

}
