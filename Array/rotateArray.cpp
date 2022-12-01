#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Rotate the vector by k
    
    // vector <int> v={1 , 7 ,9 , 11};
    
    // for( int i=0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }cout<<endl;
    
    // int k=2;
    
    // rotate(v.begin(),v.begin()+v.size()-k, v.end() );
    // cout<<endl<<"After Rotate : ";
    // for( int i=0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }cout<<endl;
    
    
    // Q1. Rotate the array by k  
    
    array <int,4>  arr={1 ,7, 9 , 11};
    
    cout<<"Before rotate : ";
    for( int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    int k=2;
    
    // only this one line of code can rotate the array by k
    rotate(arr.begin() , arr.begin()+arr.size()-k, arr.end() );
    
    cout<<"After Rotate : ";
    for( int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    

    return 0;
}