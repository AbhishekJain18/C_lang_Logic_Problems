//program to display 5 to 1 numbers on screen
#include<stdio.h>
///////////////////////////////////////////
void Display()
{
    int i =0;
    i = 5;
    for(i=5;i>0;i--)
    {
        printf("%d\n",i);
        //i++;
    }
}
///////////////////////////////////////////
//                MAIN                   //
///////////////////////////////////////////
int main()
{
    Display();

    return 0;
}