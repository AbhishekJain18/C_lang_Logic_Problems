////write a Program which accepts number from user
//return summation of all its non factors
#include<stdio.h>
//////////////////////////////////////////
int SumNonFact(int iNo)
{
    int iCount = 0;
    int iSum = 0;
    for(iCount=2; iCount <= iNo; iCount++)
    {
        if((iNo%iCount) !=0)
        {
            iSum = iSum + iCount;
        }
    }
    return iSum;
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

    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return 0;
}