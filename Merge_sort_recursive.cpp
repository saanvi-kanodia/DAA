#include<iostream>
#include<cmath>
using namespace std;

void combine(int *A, int low, int mid, int high){

    int l1, l2, i, j, k;
    l1 = mid - low+1;
    l2 = high - mid;
    int left[l1], right[l2];

    for(i=0; i<l1;){
        left[i]=A[low+i];
        i++;
    }

    for(j=1;j<=l2;){
        right[j-1]=A[mid+j];
        j++;
    }

    i=j=0,k=low;
    while(k<high){
        if (left[i] <= right[j]){
            A[k]=left[i];
            i++;
            k++;
        }
        else{
            A[k]=right[j];
            j++;
            k++;
        }
    }

    while(i<l1){
        A[k]=left[i];
        i++;
        k++;
    }

    while(j<l2){
        A[k]=right[j];
        j++;
        k++;
    }
}


void merge_sort(int *A, int low, int high){
    int mid;

    if (low<high){
        mid = floor((low+high)/2);
        merge_sort(A, low, mid);
        merge_sort(A, mid+1 , high);
        combine(A, low, mid, high);
    }
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int A[n];
    cout<<"Enter values: ";

    for(int i=0; i<n; i++)
        cin>>A[i];

    merge_sort(A,0, n-1);
    cout<<"the sorted array is:";
    for(int i=0; i<n; i++)
        cout<<A[i]<<" ";

}
