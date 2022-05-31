#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
////////////////////////////////////////
bool Search(int Arr[], int iLength, int iValue)
{
    int iCnt =0;

    for(iCnt=0; iCnt < iLength; iCnt++)
    {
        if(iValue == Arr[iCnt])
        {
            break;
        }
    }

    if(iCnt == iLength)
    {
        return false;
    }
    else
    {
        return true;
    }
}
///////////////////////////////////////////
//                 MAIN                  //
///////////////////////////////////////////
int main()
{
    auto int iSize = 0, iValue = 0;
    int *ptr = NULL;
    bool bRet ;
    register int iCnt =0;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(sizeof(int)*iSize);

    printf("Enter the value\n");
    for(iCnt =0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the element to search : \n");
    scanf("%d",&iValue);

    bRet = Search(ptr,iSize,iValue);

    if(bRet == true)
    {
        printf("Element is there in array\n");
    }
    else
    {
        printf("Element is not there in array\n");
    }

    free(ptr);
    return 0;
}