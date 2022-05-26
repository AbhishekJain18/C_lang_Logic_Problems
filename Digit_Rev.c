//program which accepts number from user
//display its digits in reverse order
#include<stdio.h>
///////////////////////////////////////////
void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo<0)
    {
        iNo = - iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
}
///////////////////////////////////////////
//                MAIN                   //
///////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}
