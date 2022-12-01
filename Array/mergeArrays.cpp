#include <bits/stdc++.h>
using namespace std;

void mergeArrays(int arr[], int n, int arr1[], int m, int arr2[]){
    int i=0;
    int j=0;
    int k=0;

    while(i<n && j<m){
        if(arr[i]>arr1[j]){
            arr2[k++]=arr1[j++];
        }else{
            arr2[k++]=arr[i++];
        }
    }
    while(i<n){
        arr2[k++]=arr[i++];
    }
    while(j<m){
        arr2[k++]=arr1[j++];
    }
}

int main(){
    int arr[5]={1, 3 ,5 ,7 ,9};
    int arr1[5]={2, 4 ,6 ,8, 10};
    int arr2[10]={0};
    mergeArrays(arr, 5 ,arr1, 5, arr2);

    for(int i=0; i<10; i++){
        cout<<arr2[i]<<" ";
    }


    return 0;
}