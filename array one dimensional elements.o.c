#include<stdio.h>
int main(){
int n;
printf("ENTER THE ARRAY SIZE : \n");
scanf("%d",&n);
int nums[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&nums[i]);
}
printf("ARRAY ELEMENTS : ");
for(int i=0;i<n;i++)
{
    printf("\n%d\n ",nums[i]);
} return 0;
}
