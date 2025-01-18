#include<iostream>
using namespace std;

int main(){
int n, x, i;
cout<<"Enter the number of elements in the array: ";
cin>>n;
int arr[n];

cout<<"\nEnter the vales: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

cout<<"Enter the element you want to search: ";
cin>>x;
    for (int i = 0; i < n; i++) {
        if (x == arr[i]){
            cout<<"\nElement found at position "<<i;
            return i;
        }
    }
cout<<"\nElement not found";
return 0;
}
