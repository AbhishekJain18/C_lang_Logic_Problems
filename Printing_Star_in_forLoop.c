//Accept one number print that number of '*' on screen
#include<stdio.h>
///////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\n");
    }
}
///////////////////////////////////////////
//                MAIN                   //
///////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}