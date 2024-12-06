#include<stdio.h>
int add(){
int a,b;
 printf("enter a is :");
 scanf("%d",&a);
 printf("enter b is :");
 scanf("%d",&b);
 int c=a+b;
 return c;
}
void main(){
int d=add();
printf("ans is :%d",d);
getch();
}
