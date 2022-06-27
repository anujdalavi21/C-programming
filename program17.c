// 1    4000
// 2    8000
// 5    20000
// 10   40000
#include<stdio.h>
void JwelPortal(int iChoice)
{
  switch(iChoice)
  {
    case 1:
    printf("Your bill ampount is 4000Rs");
    break;

    case 2:
    printf("Your bill amount is 8000Rs");
    break;

    default:
    printf("Please enter valid choice");

    case 5:
    printf("Your bill amount is 20000Rs");
    break;

  }

}


int main()
{
 int iSize=0;
 printf("Enter a choice of gm that want to purchase:");
 scanf("%d",&iSize);

JwelPortal(iSize);

    return 0;
}