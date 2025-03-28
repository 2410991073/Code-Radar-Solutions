#include<stdio.h>
void reverse(int arr[],int start,int end){
    while( start<end){
        int temp=  arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void rotate_in_place(int arr[],int n,int k){
    k = k % n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
}
int main(){
    int k,n;
    scanf("%d",&n);
    
    rotate_in_place(arr,n,k);
    for(int i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
    return 0;
}