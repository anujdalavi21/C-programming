#include<stdio.h>
void DisplayNonFactor(int iNo)
{
  int iCnt=0;  

  if(iNo<0)
  {
    iNo=-iNo;
  }
 printf("Display non factors are:\n");
  for(iCnt=1;iCnt<iNo;iCnt++)
  {
    if(iNo%iCnt!=0)
    {
       printf("%d\n",iCnt); 
    }

  }
  
}
int main()
{
 int iValue=0;
 printf("Enter a number:\n");
 scanf("%d",&iValue);
 
 DisplayNonFactor(iValue);
   return 0; 
}