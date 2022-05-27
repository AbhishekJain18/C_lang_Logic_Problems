//Accept N number from user and Display all such elements which
// contain 3 digit in it
#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0, iDigit = 0, iDigCnt = 0,iTemp = 0;
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        iDigCnt = 0;
        iTemp = Arr[iCnt];
        while(Arr[iCnt]!=0)
        {
            iDigCnt++;
            Arr[iCnt] = Arr[iCnt]/10;
        }
        Arr[iCnt] = iTemp;
        if(iDigCnt==3)
        {
            printf("%d  ",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize*(sizeof(int)));
    if (p == NULL)
    {
        printf("Unable to allocate memeory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter elements :%d ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Digits(p, iSize);

    free(p);

    return 0;
}