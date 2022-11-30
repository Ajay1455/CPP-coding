#include <iostream>
using namespace std;
int uniqueElement(int arr[], int size){
    int ans=0;
    for(int i=0; i<6; i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[6]={1 ,2 ,1 ,2 ,2,6};
    cout<<"Unique number is : ";
    cout<<uniqueElement(arr,6);
}