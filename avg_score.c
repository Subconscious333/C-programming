#include<stdio.h>
int main(){
int arr[20],i,j,sum;
float avg;
for(i=1;i<=11;i++){
sum=0;
for(j=1;j<=5;j++){
printf("\nenter the runs of player %d in match %d:\n",i,j);
scanf("%d",&arr[i]);
sum+=arr[i];
}
avg=sum/5.0;
printf("the average runs scored by player %d\n is %f",i,avg);
}
return 0;
}
