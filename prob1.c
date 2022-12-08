#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours;
    float salary;

   printf("enter the working hours");
   scanf("%d",&hours);
   salary=50*hours;
   if(hours<40)
    printf("salary = %f",(salary-.1*salary));
   else
    printf("salary =%f",salary);


    return 0;
}
