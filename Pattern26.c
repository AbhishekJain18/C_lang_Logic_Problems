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

    for(i=1; i<=iRow; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("* ");
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