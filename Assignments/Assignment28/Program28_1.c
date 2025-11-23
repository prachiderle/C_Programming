/////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : Pattern Printing
//  Description   : It Display the As per Input Pattern
//  Input         : iRow 4 , iCol 4 
//  Output        : A   B   C   D
//                  A   B   C   D
//                  A   B   C   D
//                  A   B   C   D                
//  Author        : Prachi Bhausaheb Derle
//  Date          : 22/11/2025
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern( int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch ='A';

    for(i = 1 ; i<=iRow; i++)
    {
        char ch ='A';
        for(j = 1; j<= iCol; j++,ch++)
        {
            printf("%c\t",ch);
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
