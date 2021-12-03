#include<bits/stdc++.h>
using namespace std;

int reverse(int arr[],int n){
    int i;
    int j=0;

    for(int i=0;i<n;i++){
        if(arr[i]<0){
            if( i!=j){
                swap(arr[i],arr[j]);
            }
            j++;
        }
    }

}

int main(){
    int arr[] = {-12,-14,-98,8,0,9,-78};
    int n = sizeof(arr)/sizeof(int);

    cout<<"Element are : \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    reverse(arr,n);

     cout<<"Element are : \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0;

}