/////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : Pattern Printing
//  Description   : It Display the As per Input Pattern
//  Input         : iRow 3 , iCol 4 
//  Output        : 1   2   3   4
//                  1   2   3   4
//                  1   2   3   4
//                  1   2   3   4                 
//  Author        : Prachi Bhausaheb Derle
//  Date          : 20/11/2025
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern( int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1 ; i<=iRow; i++)
    {
        for(j = 1; j<= iCol; j++)
        {
            printf("%d\t",j);
        }
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
