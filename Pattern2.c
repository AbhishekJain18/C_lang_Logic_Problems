//Accept number from user and Display below pattern
#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt =0;

    for(iCnt=iNo; iCnt>=1; iCnt--)
    {
        printf("%d # ",iCnt);
    }
}

int main()
{
    int iValue =0;

    printf("Enter number of elements\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}