#include <bits/stdc++.h>
using namespace std;

int cubeRoot(int n){
    int s=0;
    int e=n/2;
    int mid= s+ (e-s)/2;

    while(s<=e){
        int cube=mid*mid*mid;
        if(cube==n){
            return mid;
        }
        mid=mid-1;
    }
    return -1;
}

int main(){
    cout<<"cube root of number is : "<<cubeRoot(27);
}