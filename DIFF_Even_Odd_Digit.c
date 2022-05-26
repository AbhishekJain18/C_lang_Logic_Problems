////write a Program which accepts number from user
//return difference between summation of even digits and summation of odd digits
#include<stdio.h>
////////////////////////////////////////////
int CountDiff(int iNo)
{
    int iDigit = 0;
    int iSumE = 0,iSumO = 0;
    int ans = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if ((iDigit % 2) == 0)
        {
            iSumE = iSumE + iDigit;
        }

        else
        {
            iSumO = iSumO + iDigit;
        }

        iNo = iNo / 10;
    }
    ans = iSumE -iSumO;

  return ans;
}
//////////////////////////////////////////
//                 MAIN                 //
//////////////////////////////////////////
int main()
{
    int iValue =0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}