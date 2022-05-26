//Program which accept numbers from user and
//print factors of that number
#include<stdio.h>
///////////////////////////////////////////
void DisplayFactors(int iNo)
{
    int i = 0;
    if(iNo<=0)
    {
        iNo = - iNo;
    }
    for(i=1;i<=(iNo/2);i++)
    {
        if((iNo%i)==0)
        {
            printf("%d ",i);
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

    DisplayFactors(iValue);

    return 0;
}