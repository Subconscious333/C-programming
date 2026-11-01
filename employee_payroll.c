#include<stdio.h>
struct employee{
char name[30];
int ID;
float TA;
float HRA;
int basic;
float net;
};
int main(){
int i,n;
printf("enter the number of employees");
scanf("%d",&n);
struct employee arr[n];
for(i=1;i<=n;i++){
printf("enter name");
scanf("%s",arr[i].name);
printf("\nenter ID");
scanf("%d",&arr[i].ID);
printf("\n enter basic ");
scanf("%d",&arr[i].basic);
arr[i].TA=0.23*arr[i].basic;
arr[i].HRA=0.3*arr[i].basic;
arr[i].net= arr[i].basic+arr[i].TA+arr[i].HRA;
}
printf("\n name|\t ID|\t basic|\t TA|\t HRA|\t net|\n");
for(i=1;i<=n;i++){
printf("\nname of employee %d is %s",i,arr[i].name);
printf("\t\t ID of employee %d is %d",i,arr[i].ID);
printf("\t basic of employee %d is %d",i,arr[i].basic);
printf("\t TA of employee %d is %f",i,arr[i].TA);
printf("\t HRA of employee %d is %f",i,arr[i].HRA);
printf("\t net of employee %d is %f",i,arr[i].net);
if(arr[i].net>=100000){
printf("\nmanager");}
else if(80000<arr[i].net && arr[i].net<100000){
printf("\nsub manager");}
else if(60000<arr[i].net && arr[i].net<80000){
printf("\nsenior clerk");}
else{
printf("\n junior clerk");}
}
return 0;}


