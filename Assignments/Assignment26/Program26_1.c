/////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : Pattern Printing
//  Description   : It Display the As per Input Pattern
//  Input         : 5
//  Output        : A   B   C   D   E
//  Author        : Prachi Bhausaheb Derle
//  Date          : 20/11/2025
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Pattern( int iNo)
{
   int iCnt = 0;

   char ch = 'A';

   for(iCnt = 1; iCnt <= iNo; iCnt++,ch++)                  
   {
     printf("%c\t",ch);                      
  
   }
    printf(""); 
}

int main()
{
    int iValue = 0;

    printf("Enter Number of  Elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}