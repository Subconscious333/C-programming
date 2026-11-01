#include<stdio.h>
void main(){
int a,b,ch,d,e,c;
float m;
printf("Enter two numbers:");
scanf("%d%d", &a,&b);
printf("1 is addition\n");
printf("2 is subtraction\n");
printf("3 is multiplication\n");
printf("4 is division\n");
printf("enter your choice\n");
scanf("%d", &ch);
switch(ch)
{
case 1:
c=a+b;
printf("%d", c);
break;
case 2:
d=a-b;
printf("%d", d);
break;
case 3:
e=a*b;
printf("%d", e);
break;
case 4:
m=a/b;
printf("%f",m);
break;
}
}
