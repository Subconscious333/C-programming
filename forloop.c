#include<stdio.h>
int main(){
int num,count,sum=0;
printf("enter a positive integer ;");
scanf("%d",&num);
for(count=1;count<=num;count++)
{
sum=count+sum;
}
printf("Sum=%d",sum);
return 0;
}
