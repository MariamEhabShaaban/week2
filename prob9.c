#include <stdio.h>
#include <stdlib.h>

int main()
{ int x,factor=1;
printf("enter num: ");
scanf("%d",&x);
int y=x;
while(x!=0){
    factor=factor*x;
    x--;
}
printf(" factor of %d = %d ",y,factor);
    return 0;
}
