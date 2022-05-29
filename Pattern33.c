//Accept number of row and number of column
//from user and display the pattern
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i=0,j=0;

    if (iRow != iCol)
    {
        return;
    }

    for(i=iRow; i>=1; i--)
    {
        for(j=1; j<=iCol; j++)
        {
            if(i==j||i==1||j==1||i==iRow||j==iCol)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 =0, iValue2 =0;

    printf("enter number of rows and column\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}