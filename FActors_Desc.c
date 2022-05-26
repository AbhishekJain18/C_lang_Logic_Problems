//write a program which accepts number from user and
//Display its factors in decreasing order
#include<stdio.h>
///////////////////////////////////////////
void FactRev(int iNo)
{
    int iCount = 0;

    for(iCount=(iNo/2);iCount>=1;iCount--)
    {
        if((iNo%iCount)==0)
        {
            printf("%d ",iCount);
        }
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

    FactRev(iValue);
    return 0;
}