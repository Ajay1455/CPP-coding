#include <iostream>
using namespace std;

int factorial(int n){
    int fact;
    if(n>1){
        return n * factorial(n-1);
    }else{
        return 1;
    }
}

int main(){
    int n=4;
    cout<<"Factorial of :"<<n<<" is "<<factorial(4)<<endl;


}