#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,sum=0;
   float aver;
   for(int i=0;i<=10;i++){
    printf("enter num %d\n",i);
    scanf("%d",&x);
    sum+=x;
   }
   aver=sum/10.0;
   printf("sum= %d\n",sum);
   printf(" average = %f",aver);
    return 0;
}
