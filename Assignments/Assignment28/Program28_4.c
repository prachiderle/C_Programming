/////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : Pattern Printing
//  Description   : It Display the As per Input Pattern
//  Input         : iRow 4 , iCol 5 
//  Output        : 4   4   4   4   4
//                  3   3   3   3   3
//                  2   2   2   2   2   
//                  1   1   1   1   1   
//  Author        : Prachi Bhausaheb Derle
//  Date          : 22/11/2025
//
////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Pattern( int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = iRow ; i<=iRow; i--)
    {
        for(j = iCol ; j<= iCol; j--)
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
