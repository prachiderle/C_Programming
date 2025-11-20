#include<stdio.h>

typedef int BOOL;              

#define TRUE 1     
#define   FALSE 0

BOOL chkvowel(char CValue)
{
    if(CValue=='A'||CValue=='E'||CValue=='I'||CValue=='O'||CValue=='U'||
       CValue=='a'||CValue=='e'||CValue=='i'||CValue=='o'||CValue=='u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue='\0';
    BOOL bRet = FALSE;

    printf("Enter Chareacter\n");

    scanf(" %c",&cValue);

    bRet=chkvowel(cValue);
    if(bRet == TRUE)
    {
        printf("it is vowel");
    }
    else{
        printf("it is not vowel");
    }
    return 0;
}