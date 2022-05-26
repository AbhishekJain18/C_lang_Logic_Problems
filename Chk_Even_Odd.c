//Accept number from user and check weather number is even or odd
#include<stdio.h>
///////////////////////////////////////////
#define TRUE 1
#define FALSE 0
typedef int BOOL;
///////////////////////////////////////////
BOOl ChkEven(int iNo)
{
    if((iNo%2)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
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

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd\n");
    }
    return 0;
}