#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int n){
    for(int i=0; i<6; i++){
       if(n==arr[i]){
           return 1;
       }
   }return 0;
}

int main() {
   int arr[6]={1, 2, -4, 8 , 9, 12};
   int n=4;

   bool ans=linearSearch(arr, 6, n);
       if(ans){
           cout<<"Element found  "<<endl;
       }else{
           cout<<"Not found "<<endl;
       }
}