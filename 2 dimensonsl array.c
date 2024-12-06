#include<stdio.h>
int main(){
 int age ,date;
 printf(" enter your age: ");
 scanf("%d",&age);
 printf("enter your date: ");
 scanf("%d",&date);
 int dil[age][date];
 for(int i=0;i<age;i++){
    for(int j=0;j<date;j++){
        scanf("%d",&dil[i][j]);
    }
 }
   for(int i=0;i<age;i++){
    for(int j=0;j<date;j++){
        printf("%d ",dil[i][j]);
    }
    printf("\n");
 }
return 0;
}
