//Program which accepts no number from user and print that
//even numbers on screen
#include<stdio.h>
/////////////////////////////////////////////
void PrintEven(int iNo)
{
    int iCnt = 0;
    int iEven = 0;
    if(iNo<=0)
    {
        return;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
       iEven = 2*iCnt;
       printf("%d ",iEven);
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

    PrintEven(iValue);

    return 0;
}