////write a Program which accepts number from user
//return difference between summation and all its factors and non factors
#include<stdio.h>
////////////////////////////////////////////////
int FactDiff(int iNo)
{
    int iCount = 0;
    int iFact = 0;
    int iNFact =0;
    int iDiff = 0;

    for(iCount=1; iCount <= (iNo/2); iCount++)
    {
        if((iNo%iCount) == 0)
        {
            iFact = iFact + iCount;
        }
    }
    
    for(iCount=1; iCount <= iNo; iCount++)
    {   if((iNo%iCount) != 0)
        {
            iNFact = iNFact + iCount;
        }
    }

   iDiff = iFact - iNFact;
    
    return iDiff;
}
///////////////////////////////////////////
//                MAIN                   //
///////////////////////////////////////////
int main()
{
    int iValue =0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}