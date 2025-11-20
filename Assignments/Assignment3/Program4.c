#include<stdio.h>

void Displayconvert(char CValue)
{
    if(CValue>='A' && CValue<='Z')
    {
        printf("%c",CValue+32);
    }
    else if(CValue>='a' && CValue<='z')
    {
        printf("%c",CValue-32);
    }
}


int main()
{
    char cValue='\0';
    printf("Enter Character\n");
    scanf("%c",&cValue);
    Displayconvert(cValue);

    return 0;
}