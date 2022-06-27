#include<stdio.h>
void Check(int iNo1,int iNo2,int iNo3)
{
 if(iNo1>iNo2)
 {
    if(iNo1>iNo3)
    {
        printf("First number is greater");
    }
    else
    {
        printf("Third number is greater than other");
    }
 }
 else
 {
   if(iNo2>iNo3)
   {
    printf("Second number is greater than other");
   }
   else
   {
    printf("Third number is grater than other");
   }

 }

}
int main()
{
 int iValue1,iValue2,iValue3=0;
 printf("Enter a first number:");
 scanf("%d",&iValue1);

 printf("Enter a second number:");
 scanf("%d",&iValue2);

 printf("Enter a third number:");
 scanf("%d",&iValue3);

 Check(iValue1,iValue2,iValue3);

   return 0; 
}