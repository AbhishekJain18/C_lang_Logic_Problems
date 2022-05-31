#include<stdio.h>
//////////////////////////////////////////
void Display(int iNo)
{
    int iCnt =0;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if((iCnt%2)==0)
        {
            printf("* ");
        }
        else
        {
            printf("%d ",iCnt);
        }
    }
}
///////////////////////////////////////////
//                 MAIN                  //
///////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Please enter the value : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}