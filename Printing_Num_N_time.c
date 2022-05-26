//Accept two numbers from user
//Display first number in second number of times
//INPUT : 12   5
//OUTPUT : 12 12 12 12 12
#include<stdio.h>
///////////////////////////////////////////
void Display(int iNo,int iFrequency)
{
    int iCnt = 0;
    for(iCnt =1; iCnt<=iFrequency; iCnt++)
    {
        printf("%d ",iNo);
    }
}
///////////////////////////////////////////
//                MAIN                   //
///////////////////////////////////////////
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    printf("Enter Frequency\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}