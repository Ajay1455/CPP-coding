#include <iostream>
using namespace std;

void swapAlternate(int arr[] ,int size){
    for(int i=0; i<=size; i+=2){
        if(i+1<size){ 
            swap(arr[i], arr[i+1]);
        }  
    }
}
int main() {
    int even[6]={ 2, 4 ,6 ,8 ,10 ,12};
    int odd[5]={3, 5, 7, 9, 11};

    cout<<"Original array"<<endl;
    for(int i=0; i<6; i++){
        cout<<even[i]<<" ";
    }

    cout<<endl;
    cout<<"Original array"<<endl;
    for(int i=0; i<=4; i++){
        cout<<odd[i]<<" ";
    }
    cout<<endl;
    cout<<"After even array swap"<<endl;

    swapAlternate(even , 6);

    //after even array swap
    for(int i=0; i<6; i++){
        cout<<even[i]<<" ";
    }
    cout<<endl;

    cout<<"After Odd array swap "<<endl;

     swapAlternate(odd , 4);
     for(int i=0; i<=4; i++){
        cout<<odd[i]<<" ";
    }
    cout<<endl;

}