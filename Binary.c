#include<stdio.h>
int main()
{
int n,target;
printf("enter the size of array:");
scanf("%d",&n);
int arr[n];
printf("enter the element of array:");
for(int i=0;i<=n;i++){
scanf("%d",&arr[i]);}
printf("enter the targert element:");
scanf("%d",&target);
int low=0,high=n-1,result=-1;
while(low<=high){
int mid=low+(high-low)/2;
if(arr[mid]==target){
result=mid;
break;
}
else if(arr[mid]<target){
low=mid+1;
}
else{
high=mid-1;
}
}
if(result!=-1)
    printf("element found at index %d\n",result);
else
    printf("element not found\n");

return 0;
}
