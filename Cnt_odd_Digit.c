//program which accepts number from user
//Return the count of odd digit
#include<stdio.h>
/////////////////////////////////////
int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo<0)
    {
        iNo = - iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if ((iDigit % 2) != 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}
//////////////////////////////////////////
//                 MAIN                 //
//////////////////////////////////////////
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);
    printf("%d",iRet);

    return 0;
}
