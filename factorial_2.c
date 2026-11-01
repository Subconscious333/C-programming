#include<stdio.h>
int fac_rec(int n);
int main(){
int result,num;
printf("enter the number \n");
scanf("%d",&num);
result= fac_rec(num);
printf(" result= %d",result);
return 0;
}
int fac_rec(int num){
if(num==1){
return 1;}
else{
return num*fac_rec(num-1);
}
}
