#include<stdio.h>
#include<stdbool.h>
//////////////////////////////////////////////////
bool ChkArmstrong(int iNo)
{
    int iTemp = 0,iCnt =0;
    int iDigit = 0, iDigCnt =0, iSum =0, iMult=1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    iTemp = iNo;

    while(iNo != 0)     //Calculate number of Digits
    {
        iDigCnt++;
        iNo = iNo / 10;
    }
    iNo = iTemp;

    while(iNo != 0)
    {
        iMult = 1;          //IMP
        iDigit = iNo % 10;
        //iSum = iSum + Power(iDigit,iDigCnt);
        for(iCnt =1; iCnt<=iDigCnt; iCnt++)
        {
            iMult = iMult * iDigit;
        }
        iSum = iSum + iMult;
        iNo = iNo / 10;
    }
    if (iSum == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }
}
///////////////////////////////////////////
//                 MAIN                  //
///////////////////////////////////////////
int main()
{
    int iValue = 0;
    bool bRet;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = ChkArmstrong(iValue);

    if (bRet == true)
    {
        printf("%d is Armstrong number\n",iValue);
    }
    else
    {
        printf("%d is not Armstrong number\n",iValue);
    }
  return 0;
}