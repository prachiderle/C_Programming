#include<stdio.h>


int SumNonFact(int iNo)
{
    int iCnt=0,isum=0;

    
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
        {
           isum=isum+iCnt;
        }
        
    }
    return isum;
    
}




int main()
{
    int iValue=0,iRet=0;


    printf("Enter Number\n");
    scanf("%d",&iValue);

   iRet=SumNonFact(iValue);
    printf("sum of non-factors:%d\n",iRet);
   
    return 0;

}