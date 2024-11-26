#include<stdio.h>
int sum(int n);
int sum(int n){
    if(n==0)return 0;
    return n%10 + sum(n/10);
}
int main(){
    int n;
    printf("number:");
    scanf("%d",&n);
    printf("sum:%d",sum(n));
    return 0;
}
