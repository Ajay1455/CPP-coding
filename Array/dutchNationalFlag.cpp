#include <iostream>
using namespace std;
int main()
{
    int arr[10]={0 , 1, 0 ,1 , 1 , 2 , 0 , 1 ,2, 0};
    int l=0;
    int m=0;
    int h=9;
    
    cout<<"Before sorting "<<endl;
    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }
    while(arr[m]==0 || m++)
    while(m<=h){
        if(arr[m]=0){
            swap(arr[l], arr[m]);
            l++;
            
        }else if(arr[m]==1){
            m++;
        }else if(arr[m]==2){
            swap(arr[h], arr[m]);
            h--;
        }
    } 
    cout<<"After sorting "<<endl;
    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
