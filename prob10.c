#include <stdio.h>
#include <stdlib.h>

int main()
{ long id=1234,password=1111;
long x,y,count=3;
printf("enter id :");
scanf("%d",&x);
if(x==id){
    while(count--){
            printf("enter password: ");
        printf("%d",&y);
    if(y==password){
        printf("welcomes him");
        break;
    }
    else
        printf("you are not registered");
    }
}
    return 0;
}
