#include<iostream>
using namespace std;
    int fact(int n){
        if(n>1)
            return n* fact(n-1);
        else
            return 1;
    }
    int main(){
    int n;
    cout<<"Enter n for Factorial calculation: ";
    cin>>n;
    cout<<endl<<n<<"! is = "<<fact(n)<<endl;

    return 0;
}
