//Program to write which accepts number from user and
//display its multiplication of factors
#include<stdio.h>
///////////////////////////////////////////
int MultFact(int iNo)
{
    int iCount = 0;
    int iMult  = 1;
    for(iCount =1; iCount <= (iNo/2); iCount++)
    {
        if((iNo%iCount)==0)
        {
            iMult = iMult * iCount;
        }
    }
    return iMult;
}
///////////////////////////////////////////
//                MAIN                   //
///////////////////////////////////////////
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);
    return 0;
}