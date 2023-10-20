#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int low,int high){
    int pivot=arr[low+rand()%(high-low+1)];
    int i=low-1;
    int j=high+1;
    while(1){
        do{
            i++;
        }
        while(arr[i]<pivot);
        do{
            j--;
        } 
        while(arr[j]>pivot);
        if(i>=j){
            return j;
        }
        swap(&arr[i],&arr[j]);
    }
}
void quickSort(int arr[],int low,int high){
    if(low<high){
        int mid=partition(arr,low,high);
        quickSort(arr,low,mid);
        quickSort(arr,mid+1,high);
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    quickSort(arr,0,n-1);
    printf("Sorted array: ");
    printArray(arr,n);
    return 0;
}