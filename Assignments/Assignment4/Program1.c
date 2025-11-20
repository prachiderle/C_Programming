#include<stdio.h>


int MultiFact(int iNo)
{
    int iCnt=0;
    int i=1;
    
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo % iCnt==0)
        {
            printf("%d*",iCnt);
            i=i*iCnt;
        }
        
    }
    printf("\n");
    return i;
}




int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet=MultiFact(iValue);

    printf("%d",iRet);
    return 0;

}