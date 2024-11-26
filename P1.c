#include<stdio.h>
 void display(int arr[],int size,int i);
 void display(int arr[],int size,int i){
    if(i>=size){
        return;
    }
    printf("%d,",arr[i]);
    display(arr,size,i+1);
 }
 int main(){
    int size;
    printf("Enter Size:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
    printf("Enter number:");
    scanf("%d",&arr[i]);
 }
    printf("Display:\n");
    display(arr,size,0);
    return 0;
 }