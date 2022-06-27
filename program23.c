#include<stdio.h>
#include<stdbool.h>
bool CheckPrime(int iNo)
{
  int iCnt=0;
  bool bflag=true;
  for(iCnt=2;iCnt<=(iNo/2);iCnt++)
  {
    if(iNo%iCnt==0)
     bflag=false;
     break;

  }
  return bflag;


}
int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter a number:");
    scanf("%d",&iValue);

    bRet=CheckPrime(iValue);
    if(bRet==true)
    {
      printf("Number is prime");
    }
    
   else
   {
    printf("Number is not prime number");
   }

  return 0;  
}