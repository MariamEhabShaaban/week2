#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id;
    printf("enter your id :");
    scanf("%d",&id);
    switch(id){
case 1234:
    printf("Harry");
    break;

    case 5678:
    printf("Hermonie");
    break;
    default:
    printf("wrong id");
    break;

    }
    return 0;
}
