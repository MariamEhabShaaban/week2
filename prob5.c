#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    printf("enter 3 nums :");
    scanf("%d %d %d",&x,&y,&z);
 if(x>y&&x>z)
    printf("the max = %d",x);
  else if(y>x&&y>z)
    printf("the max = %d",y);
    else
        printf("the max = %d",z);
    return 0;
}
