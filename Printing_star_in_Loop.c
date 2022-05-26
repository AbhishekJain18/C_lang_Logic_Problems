//Accept one number print that number of '*' on screen
#include<stdio.h>
///////////////////////////////////////////
void Accept(int iNo)
{
    int iCount = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCount=1;iCount<=iNo;iCount++)
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

    Accept(iValue);
    return 0;
}