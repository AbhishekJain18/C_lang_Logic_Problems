//accept N number number from user and return
//the smallest number
#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
    int iCnt = 0, iMin = Arr[0];
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(iMin>Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }
    }
  return iMin;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int * p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(sizeof(int)*iSize);
    if(p == NULL)
    {
        printf("unable to allocate memory\n");
        return -1;
    }
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("enter element : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Minimum(p, iSize);
    printf("Smallest number is %d",iRet);

    free(p);
    return 0;
}