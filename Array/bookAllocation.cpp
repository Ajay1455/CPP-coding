#include <bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){
    int student =1;
    int pageSum=0;
    for(int i=0; i<n; i++){
        if(pageSum + arr[i] <= mid){
            pageSum+=arr[i];
        }else {
            student++;
            // if(student>m || arr[i]>mid){
            //   return 0;
            // }
            //   pageSum=arr[i];
            if(student<=m && arr[i]<=mid ){
                pageSum=arr[i];
            }else{
            return 0;
            }
        }
    }
    return 1;
}

int bookAllocation(int arr[], int n, int m ){
    int start=0;
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    int end=sum;
    int mid=start + (end-mid)/2;
    int ans=-1;
    
    while(start<=end){
        if(isPossible( arr, n, m,mid )){
            ans=mid;
            end=mid-1;
        }else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans; 
}

int main(){
    int arr[4]={10 , 20 , 30 , 40};
    int m;
    cin>>m;
    cout<<"The mininum no. of book allocation to Students :"<<bookAllocation(arr, 4, m);

}