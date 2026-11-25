#include<stdio.h>
int fac(int n);
int main(){
int num;
printf("enter the number whose factorial is to be calculated\n");
scanf("%d",&num);
int result=fac(num);
printf("the factorial of the number is: %d\n",result);
return 0;
}
int fac(int n){
int i,f=1;
for(i=1;i<=n;i++){
f=f*i;
}
return f;
}
