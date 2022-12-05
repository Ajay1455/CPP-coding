#include <iostream>
using namespace std;

int squaresIntriangle(int base){
    int square=0;
    int temp=base;
    for(int i=1; i<temp/2; i++){
        base=base-2;
        square=square + base/2;
    }
    return square;
}

int main() {
    int base;
    int t;
    cin>>t;
    while(t--){
        cin>>base;
        cout<<squaresIntriangle(base)<<endl;
    }
	
	return 0;
}
