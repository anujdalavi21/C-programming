#include<stdio.h>
void Display(int iNo)
{
 int iCnt=0;
 if(iNo<0)
 {
    printf("Please enter a positive number");
    return;
 }
 
 for(iCnt=1;iCnt<=iNo;iCnt++)
 {

    printf("Never Give Up...!\n");
 }


}

int main()
{
 int iValue=0;
 printf("Enter a number:\n");
 scanf("%d",&iValue);
 
 Display(iValue);
   return 0; 
}