#include<stdio.h>
#include<stdbool.h>
bool ChkEven(int iNo)
{
 if(iNo<0)
 {
    iNo=-iNo;
 }
 if(iNo%2==0)
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
  int iValue=0;
  bool bRet=false;

  printf("Enter a number:");
  scanf("%d",&iValue);

  bRet=ChkEven(iValue);
  if(bRet==true)
  {
    printf("Number is Even");
  }
  else
  {
    printf("Number is odd");
  }

    return 0;
}