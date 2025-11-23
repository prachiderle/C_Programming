/////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : Pattern Printing
//  Description   : It Display the As per Input Pattern
//  Input         : 5
//  Output        : 5 # 4 # 3 # 2 # 1 #
//  Author        : Prachi Bhausaheb Derle
//  Date          : 20/11/2025
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern (int iNo)
{
   int iCnt =0; 
   for(iCnt= iNo; iCnt>=1 ;iCnt--)
   {
     printf("%d\t#\t",iCnt);
   }
}

int main()
{
    int iValue = 0;

    printf("Enter the no of Elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}