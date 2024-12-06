#include<stdio.h>
int main(){
int row,col;
printf("enter your size:");
scanf("%d",&row);
printf("enter your size:");
scanf("%d",&col);
int num [row][col];
int target;
printf ("enter your target:");
scanf("%d",&target);
printf("enter array elements: \n");
for (int i=0;i<row;i++){
    for (int j=0;j<col;j++){
    scanf("%d",&num[i][j]);
}
}
int found=0,index;
for(int i=0;i<size;i++){
    if(num[i]==target){
        found=1;
        index=i;
        break;
    }
}
if(found==1){
    printf("found at %d ",index);
}
else{
    printf("not found");
}
return 0;
}
