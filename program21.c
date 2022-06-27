#include<stdio.h>
int SumFactor(int iNo)
{
  int iCnt,iSum=0; 

  if(iNo<0)
  {
    iNo=-iNo;
  }
 
  for(iCnt=1;iCnt<(iNo/2);iCnt++)
  {
    if(iNo%iCnt==0)
    {
       iSum=iSum+iCnt;
    }

  }
  return iSum;
}
int main()
{
 int iValue,iRet=0;
 printf("Enter a number:\n");
 scanf("%d",&iValue);
 
 iRet=SumFactor(iValue);
 printf("Summation of factors of number is %d",iRet);
   return 0; 
}