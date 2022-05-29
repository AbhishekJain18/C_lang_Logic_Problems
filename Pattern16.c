//Accept number of users anf number of columns from user and
//display below pattern
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i =0, j =0;
    int iCnt =1, iTemp=1;

    for(i=1; i<=iRow; i++)
    {
        iCnt=iTemp;
        for(j=1; j<=iCol; j++)
        {
            printf("%d ",iCnt);
            if(iCnt<9)
            {
                iCnt++;
            }
            else
            {
               iCnt=1;
            }
        }
        printf("\n");
        iTemp=iCnt;
    }
}

int main()
{
    int iValue1 =0, iValue2 =0;

    printf("Enter number of rows and columns\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}