//accept N number from user and
//return the largest number
#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int iCnt = 0, iMax = Arr[0];
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(iMax<Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }
  return iMax;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("enter number of elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(sizeof(int)*iSize);
    if(p == NULL)
    {
        printf("unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d of elements\n",iSize);
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter element : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Maximum(p, iSize);

    printf("Largest number is %d",iRet);

    free(p);
    return 0;
}