#include<stdio.h>
int fibo(int);
int main(){
printf(" fibonacci: %d",fibo(5));
return 0;
}

int fibo(int n){
 if(n==1||n==0){
    return n;
     }
   return fibo(n-1)+fibo(n-2);
}
