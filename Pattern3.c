//Accept number fom user and display below pattern
#include<stdio.h>
void Pattern(int iNO)
{
    int iCnt =0;
    for(iCnt=1; iCnt<=iNO; iCnt++)
    {
        printf("%d * ",iCnt);
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