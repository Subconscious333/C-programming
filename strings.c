#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
int ch,c,f;
char a[20],b[20];
printf("1: for finding string lenth\n");
printf("2: for concatenating strings\n");
printf("3: for copying one string to another\n");
printf("4: for comparing the strings\n");
printf("enter your choice\n");
scanf("%d",&ch);
switch(ch){
case 1:
printf("enter string 1: ");
scanf("%s",a);
c=strlen(a);
printf("\n length of the string is: %d",c);
break;
case 2:
printf("\n enter string 1: ");
scanf("%s",a);
printf("\n enter string 2: ");
scanf("%s",b);
strcat(a,b);
printf("\ntheir combination is: %s",a);
break;
case 3:
printf("\n enter string 1: ");
scanf("%s",a);
printf("\n enter string 2: ");
scanf("%s",b);
printf("\n before copying str1=%s str2=%s \n",a,b);
strcpy(a,b);
printf("\n after copying str1=%s str2=%s\n",a,b);
break;
case 4:
printf("\n enter string 1: ");
scanf("%s",a);
printf("\n enter string 2: ");
scanf("%s",b);
f=strcmp(a,b);
if (f==0)
{
printf("the strings are same \n");
}
else
{ 
printf("the strings are not same \n");
}
break;
}
return 0;
}
