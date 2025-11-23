/////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : Pattern Printing
//  Description   : It Display the As per Input Pattern
//  Input         : iRow 6 , iCol 5 
//  Output        : *   *   *   *   *
//                  *   @   @   @   *
//                  *   @   @   @   *
//                  *   @   @   @   *
//                  *   @   @   @   *
//                  *   *   *   *   *               
//  Author        : Prachi Bhausaheb Derle  
//  Date          : 23/11/2025
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern( int iRow, int iCol)
{
    int i = 0 , j= 0;
    for(i = 1; i<=iRow; i++)
    {
        for(j = 1; j<=iCol ;j++)
        {
            if(i ==1 || i== iRow ||j == 1 || j== iCol)
            {
                printf("*\t");
            }
            else
            {
                printf("@\t");
            }
        }
        j++;
        printf("\n");
    }
    
}
int main()
{
    int iValue1 =0,iValue2 = 0;

    printf("Enter the Row and Colunm : ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
