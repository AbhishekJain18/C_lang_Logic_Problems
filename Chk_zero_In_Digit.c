//write a program which accepts number from user and
//check whether it contains 0 in it or not
#include<stdio.h>
/////////////////////////////////////////
#define TRUE 1
#define FALSE 0
typedef int BOOL;
/////////////////////////////////////////
BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    BOOL bRet = FALSE;
    if(iNo < 0)
    {
        iNo = - iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            bRet = TRUE;
            break;
        }
        iNo = iNo / 10;
    }
    return bRet;
}
///////////////////////////////////////////
//                MAIN                   //
///////////////////////////////////////////
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet==TRUE)
    {
        printf("It contain zero");
    }
    else
    {
        printf("There is no zero");
    }
    return 0;
}