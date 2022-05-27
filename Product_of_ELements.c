//Accepts N number from user and return
//product of off elements
#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt =0, iMult = 1;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt]%2)!=0)
        {
            iMult = iMult * Arr[iCnt];
        }
    }
    return iMult;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
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

    iRet = Product(p, iSize);
    printf("Product is %d\n",iRet);

    free(p);

    return 0;
}
