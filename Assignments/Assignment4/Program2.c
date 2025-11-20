#include<stdio.h>


int MultiFact(int iNo)
{
    int iCnt=0;

    
    for(iCnt=iNo/2;iCnt>=1;iCnt--)
    {
        if(iNo%iCnt==0)
        {
            printf("%d\n",iCnt);
            
        }
        
    }
    printf("\n");
    
}




int main()
{
    int iValue=0;


    printf("Enter Number\n");
    scanf("%d",&iValue);

    MultiFact(iValue);

   
    return 0;

}