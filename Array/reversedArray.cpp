#include <iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int start=0;
    int end=n-1;
        while(start<=end){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
}

int main() {
   int arr[6]={1, 2, -4, 8 , 9, 12};
   int arrodd[5]={3, 5, 7, 11, 13};

   for(int i=0; i<6; i++){
       cout<<arr[i]<<" ";
   }
   cout<<endl;
   cout<<"Reversed array Even :"<<endl;
   reverseArray( arr, 6);
   for(int i=0; i<6; i++){
       cout<<arr[i]<<" ";
   }  

   cout<<endl;

   cout<<"Reversed array odd :"<<endl;
   reverseArray( arrodd, 5);
   for(int i=0; i<5; i++){
       cout<<arrodd[i]<<" ";
   }
}
