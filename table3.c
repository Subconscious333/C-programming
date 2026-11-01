#include<stdio.h>
int main(){
int n,count,m;
printf("enter the number till   which 3 table is to be shown: ");
scanf("%d", &n);
printf(" table is:");
for(count=1;count<=n;count++)
{
printf("%d",3*count);
}

return 0;
}

