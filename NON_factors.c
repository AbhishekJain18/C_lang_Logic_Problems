//write a Program which accepts number from user
//Display all its non factors
#include<stdio.h>
/////////////////////////////////////////////
void NonFact(int iNo)
{
    int iCount = 0;

    for(iCount=2; iCount <= iNo; iCount++)
    {
        if((iNo%iCount) !=0)
        {
            printf("%d  ",iCount);
        }
    }
}
///////////////////////////////////////////
//                MAIN                   //
///////////////////////////////////////////
int main()
{
    int iValue =0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}