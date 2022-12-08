#include <iostream>
using namespace std;


// int type function so return integer value
int squreOfNumber(){
    int a, b;
    cin >> a >> b;
    cout << "The number is : " << a << endl;
    cout << "The power is : " << b << endl;
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans = ans * a;
    }
    return ans;
};


// string type function so this function return string
string ReverseString(){
    string s1;
    cin>>s1;
    int n=s1.length();
    
    for(int i=0; i<n/2; i++)
    swap( s1[i], s1[n-i-1]);
    
    return s1;
}


// void type function means only print value & return nothing
void checkOddEven(){
    int number;
    cin >> number;

    if (number % 2 == 0){
        cout << "the number is even.";
    }else{
        cout << "the number is odd.";
    }
};


// bool type function means only return 0 or 1
bool isEven(){
    int number;
    cin>>number;
    
    if(number%2==0){
        return true;   
    }else{
        return false; 
    }
};


int main()
{

    // calling squareOfNumber function only return integer
    cout << "The answer is :" << squreOfNumber();

    // calling checkOddEven function  only print
    checkOddEven();

    // calling isEven function only return 0,1
    cout<<isEven();

    // calling ReverseString  function only return string
    cout<<ReverseString();
}