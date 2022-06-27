  #include<stdio.h>
  int Summation(int iNo)
  {
    int iCnt=0;
    int iSum=0;
    iCnt=1;
    while(iCnt<=iNo)
    {
      iSum=iSum+iCnt;
      iCnt++;
    }
  return iSum;

  }

  int main()
  {
   int iValue=0;
   int iRet=0;
   printf("Enter a number:");
   scanf("%d",&iValue);

   iRet=Summation(iValue);
   printf("Summation of number upto n number is:%d",iRet);

   return 0;
  }