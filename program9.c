 #include<stdio.h>
 int main()
{
  int num,i=0;
  printf("Enter a number:\n");
  scanf("%d",&num);

 for(i=1;i<num;i++)
 {
    if(i%2==0)
    continue;
    printf("%d",i);
 
 }

  return 0;    
 }