//Accepts N number from user and accepts
//one another number as NO , Check wheather NO is present or not
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt =0;
    BOOL bChk = FALSE;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            bChk = TRUE;
            break;
        }
    }
    return bChk;
}

int main()
{
    int iSize = 0, iValue = 0, iCnt = 0;
    int *p = NULL;
    BOOL bRet  = FALSE;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    printf("Enter the number\n");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter elements : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p, iSize, iValue);
    if(bRet == TRUE)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is Absent\n");
    }

    free(p);

    return 0;
}
