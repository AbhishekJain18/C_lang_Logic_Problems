//write a Program which accepts number from user
//count frequency of 2 in it
#include<stdio.h>
/////////////////////////////////////////
int CountTwo(int iNo)
{
    int iDigit = 0;
    int iCntTwo = 0;

    if (iNo < 0)
    {
         iNo = -iNo;
    }
    
    while( iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
        {
             iCntTwo++;
        }

        iNo = iNo / 10;
    }
 return iCntTwo;
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

    iRet = CountTwo(iValue);
    printf("%d",iRet);
    return 0;
}