#include<stdio.h>
int Addition(int iNo1,int iNo2)
{
  int iAns=0;
  iAns=iNo1+iNo2;
  return iAns;
}
int main()
{
  int a,b,iRet=0;
  printf("Enter first number:");
  scanf("%d",&a);

  printf("Enter second number:");
  scanf("%d",&b);


  iRet=Addition(a,b);
  printf("Addition of two number is:%d",iRet);

    return 0;
}