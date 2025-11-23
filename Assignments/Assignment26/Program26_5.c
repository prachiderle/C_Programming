/////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : Pattern Printing
//  Description   : It Display the As per Input Pattern
//  Input         : 8
//  Output        : 2 4 6 8 10  12  14  16
//  Author        : Prachi Bhausaheb Derle
//  Date          : 20/11/2025
//
////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Pattern( int iNo)
{
  int iCnt = 0;
  for(iCnt =2; iCnt<=(2*iNo); iCnt++)
  {
    if((iCnt % 2) ==0)
    {
      printf("%d\t",iCnt);
    } 
  }
}
int main()
{
   int iValue = 0;

   printf("Enter the Number : ");
   scanf("%d",&iValue);

   Pattern(iValue);

   return 0;
}