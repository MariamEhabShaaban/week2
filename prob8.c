#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x;
   printf("enter num : ");
   scanf("%d",&x);
   for(int i=0;i<=12;i++){
    printf("%d x %d = %d \n",x,i,x*i);
   }
    return 0;
}
