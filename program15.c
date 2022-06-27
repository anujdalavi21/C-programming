#include<stdio.h>
int Summation(int iNo)
{
    int iCnt,iSum=0;
  if(iNo<0)
  {
    iNo=-iNo;    //Updator

  }

  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
   iSum=iSum+iCnt;

  }
  return iSum;

}
int main()
{
    int iValue,iRet = 0;
    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet=Summation(iValue);
    printf("Summation of number upto n is :%d",iRet);

    return 0;
}