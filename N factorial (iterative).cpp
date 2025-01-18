#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    while(n>0){
            fact *= n;
            n--;
    }
    return fact;
}

int main(){
int n;
cout<<"Enter n for Factorial calculation: ";
cin>>n;
cout<<endl<<n<<"! is = "<<factorial(n)<<endl;

return 0;
}
