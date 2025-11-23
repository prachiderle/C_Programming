/////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : Pattern Printing
//  Description   : It Display the As per Input Pattern
//  Input         : iRow 4 , iCol 4 
//  Output        : A   B   C   D
//                  a   b   c   d
//                  A   B   C   D
//                  a   b   c   d                
//  Author        : Prachi Bhausaheb Derle
//  Date          : 22/11/2025
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern( int iRow, int iCol)
{
    int i = 0, j = 0;
    char Ch1 ='A';
    char Ch2 ='a';

    for(i = 1 ; i<=iRow; i++)
    {
        char Ch1 ='A';
        char Ch2 ='a';
        
        for(j = 1; j<= iCol; j++)
        {   
            
            if(i % 2 ==0)
            {
                printf("%c\t",Ch2);
                Ch2++;
            }
            else
            {
                printf("%c\t",Ch1);
                Ch1++;

            }
           
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
