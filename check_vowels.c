//program to write accept one character from user and
//check weather that character is vowel or not (a,e,i,o,u)
#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char CValue)
{
    if(
        CValue==97 ||
        CValue==101||
        CValue==105||
        CValue==111||
        CValue==117)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Charater\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);
    if(bRet == TRUE)
    {
        printf("It is a vowel");
    }
    else
    {
        printf("It is not vowel");
    }
    return 0;
}