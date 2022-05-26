//Program which accepts on character from user and
//convert case of that character
#include<stdio.h>
////////////////////////////////////////
void DisplayConvert(char CValue)
{
    if(
        (CValue>=65)&&
        (CValue<=90)
    )
    {
        CValue = CValue + 32;
        printf("%c",CValue);
    }
    else if(
        (CValue>=97)&&
        (CValue<=122))
    {
        CValue = CValue - 32;
        printf("%c",CValue);
    }
}
///////////////////////////////////////////
//                MAIN                   //
///////////////////////////////////////////s
int main()
{
    char cValue ='\0';
    printf("Enter charater\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}
