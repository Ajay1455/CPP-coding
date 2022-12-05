#include<iostream>
using namespace std;

// Question number 2 Print number in decreasing order
int decrement(int number){

 if(number==1)
 {

  return 1;
 }
 else
 {
  cout<<number<<" ";
  return decrement(number-1);
 }

}

//Multiple with recursion
int product(int a, int b)
{
    if(a<b)
    {
        return product(b,a);
    }
    else if(b!=0){
            return (a+product(a,b-1));

    }
    else{
        return 0;
    }
}

int main(){
    
    //call decreasing number function
//  int number;
//  cout<<"Enter number from where to print  :"<<endl;
//  cin>>number;
//  cout<<decrement(number);

//call function of mult66//iple with recursionaqw
0int num1,num2,result/.;
    cout<<"Enter two number : \n";
    cin>>num1>>num2;  
    result=product(num1,num2);

    cout<<"Product of "<<num1<<" and "<<num2<<" is "<<result;


 
 return 0;
}


