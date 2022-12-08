#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    printf("enter your grade :");
    scanf("%d",&grade);
 if(grade>85)
    printf("Excellent");
 else if(grade<85&&grade>=75)
    printf("very good");
 else if(grade<75&&grade>=65)
    printf("good");
    else if(grade<65&&grade>=50)
    printf("succeeded");
    else
        printf("faild");
    return 0;
}
