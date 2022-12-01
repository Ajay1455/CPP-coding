#include <bits/stdc++.h>
using namespace std;

// 1. using nested loop with n^2 time complexity 
int nestLoop(int arr[], int n){
    int minLargest=INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=1; j<n; j++){
            if((arr[j]-arr[i])>minLargest){
                minLargest=arr[j]-arr[i];
            }
        }
    }
    return minLargest;
}

// 2. using inbuid sorting technique with nlogn time complexity 
int withSort(int arr[], int n){
    sort(arr, arr+n);
    int ans=arr[n-1]-arr[0];
}

// 3. using binary search with logn time complexity
// int withBinary(int arr[], int n){
//     int s=0; 
//     int maxi=INT_MIN;
//     for(int i=0; i<n; i++){
//        maxi=max(maxi,arr[i]);
//     }
//     int e=maxi;
//     int mid=s+(e-s)/2;int i=0;
//     int ans=-1;
//     while(s<e){
//         if(arr[i]>=mid){
//             ans=mid;
//             s=mid+1;
//             i++;
//         }else{
//             e=mid-1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans; 
// } 

bool isPossible(int arr[], int n, int k, int mid){
    int cowCount=1;
    int lastposition=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]-lastposition >=mid ){
            cowCount++;
            if(cowCount ==k){
                return true;
            }
            lastposition=arr[i];
        }
    }
    return false;

}

int withBinary(int arr[], int n, int k){
    int s=0; 
    int maxi=INT_MIN;
    for(int i=0; i<n; i++){
       maxi=max(maxi,arr[i]);
    }
    int e=maxi;
    int mid=s+(e-s)/2;int i=0;
    int ans=-1;
    while(s<e){
        if(isPossible){
            ans=mid;
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans; 

} 

int main(){
    int arr[5]={ 4 , 2 , 1 , 3 , 6};
    cout<<"The minimum largest distance b/w aggressive cows with nested loop is : "<<nestLoop(arr, 5)<<endl;
    cout<<"The minimum largest distance b/w aggressive cows with sorting technique is : "<<withSort(arr, 5)<<endl;
    cout<<"The minimum largest distance b/w aggressive cows with Binary is : "<<withBinary(arr, 5,3)<<endl;


}