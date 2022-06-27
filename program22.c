//Check perfect number
//28=1+2+4+7+14
#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
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
  if(iSum==iNo)
  {
    return true;
  }
  else  
  {
    return false;
  }
}
int main()
{
 int iValue;
 bool bRet=false;

 printf("Enter a number:\n");
 scanf("%d",&iValue);
 
 bRet=CheckPerfect(iValue);
 if(bRet==true)
 {
    printf("Number is perfect number");
 }

 else
 {
    printf("Number is not perfect number");
 }
 
   return 0; 
}
