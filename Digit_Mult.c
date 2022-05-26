////write a Program which accepts number from user
//return multiplication of all digits
#include<stdio.h>
//////////////////////////////////////////
int MultDigit(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    if (iNo < 0)
    {
         iNo = -iNo;
    }

    while( iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit > 0)
        {
            iMult = iMult *iDigit;
        }
        iNo = iNo / 10;
    }
 return iMult;
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

    iRet = MultDigit(iValue);
    printf("%d",iRet);
    return 0;
}