#include <iostream>
using namespace std;
int main() {
    cout<<"Number of elements in array :"<<endl;
    int n,num;
    cin>>n;
    cout<<"Which number to find : "<<endl;
    cin>>num;
    int arr[n]={1, 2, 3, 4, 5, 6, 12, 14, 15, 18};
    int start=0;
    int end=n-1;
     int mid=(start+end)/2; 
    for(int i=0; i<n; i++){
        
        if(arr[mid]==num){
        
            cout<<"The number is found at index : "<<mid<<endl;
            return mid;
            
        }
        else if(arr[mid]>num){
        mid = mid-1;
        }
        else if(arr[mid]<num){
            mid= mid+1;
        }
    }
    cout<<"The number is not in array ."<<endl; 
    
    
}
