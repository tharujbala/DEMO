#include<stdio.h>
int main(){
int a[]={10,20,30,40,50};
int *p=&a[3];
printf("%d\n",*(p+1));
printf("%d",*(p-1));
return 0;
}
