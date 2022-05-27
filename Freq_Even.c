//Accept N numbers from user and return
//return the frequency of even numbers
#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0, iEvenCnt = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iEvenCnt++;
        }
    }
    return iEvenCnt;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements");
    scanf("%d",&iSize);

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

    iRet = CountEven(p, iSize);
    printf("result is %d",iRet);

    free(p);

    return 0;
}