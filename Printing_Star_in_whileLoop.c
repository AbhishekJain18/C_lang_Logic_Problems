//Accept one number print that number of '*' on screen
#include<stdio.h>
///////////////////////////////////////////
void Display(int iNo)
{
    while(iNo > 0)
    {
        printf("*\n");
        iNo--;
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

    Display(iValue);
    return 0;
}