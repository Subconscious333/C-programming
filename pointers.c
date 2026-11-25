#include<stdio.h>
void swap(int *num1,int *num2);
int main(){
  int num1,num2;
  printf("enter number 1:");
  scanf("%d",&num1);
  printf("\nenter number 2:");
  scanf("%d",&num2);
  printf("\nbefore swapping num1=%d and num2=%d",num1,num2);
  swap(&num1,&num2);
  printf("\nafter swapping num1=%d and num2=%d",num1,num2);
  return 0;
}
void swap(int *num1,int *num2){
  int t;
  t=*num1;
  *num1=*num2;
  *num2=t;
}