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
void rotate_in_place(int arr[];int N;int K){
    K=K%N;
    reverse(arr,0,N-1);
    reverse(arr,0,K-1);
    reverse(arr,k,N-1);
}
int main(){
    int K,N;
    scanf("%d",&N);
    
    rotate_in_place(arr,N,K);
    printf("array after in-place rotation:");
    for(int i=0;i<N;i++){
        printf("%d \n",arr[i]);
    }
    return 0;
}