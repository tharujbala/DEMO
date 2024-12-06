#include<stdio.h>
int main()
{
    int rows,colm;
    printf("enter your rows :");
    scanf("%d",&rows);
    printf("enter your column :");
    scanf("%d",&colm);
    int nums[rows][colm];
    for(int i=0;i<rows;i++){
        for(int j=0;j<colm;j++){
            scanf("%d",&nums[i][j]);
        }
    }
     for(int i=0;i<rows;i++){
        for(int j=0;j<colm;j++){
            printf("%d ",nums[i][j]);
        }
        printf("\n");
    }
}
