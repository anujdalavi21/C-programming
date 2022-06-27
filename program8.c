 #include<stdio.h>
 int main()
{
  int num,i=0;
  printf("Enter a number:\n3");
  scanf("%d",&num);

 for(i=2;i<num;i++)
 {
  if(num%i==0)
  break; 
 } 
 if(i==num)
 {
    printf("Number is prime");
 } 
 else
 {
    printf("Number is not prime");
 }
 

  return 0;    
 }