#include <stdio.h>
#include <stdlib.h>

int main()
{
    int res;
   while(1){
    printf("enter the result of 3x4 = ");
    scanf("%d",&res);
    if(3*4==res){
        printf("thanks");
    break;

   }
   else
    printf("try again\n");
}
    return 0;
}
