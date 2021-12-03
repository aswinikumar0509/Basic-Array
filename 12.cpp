#include<bits/stdc++.h>
using namespace std;

int sum(int arr[],int n){

    int CS = 0;
    int largest = 0;

    for(int i=0;i<n;i++){
        CS = CS+arr[i];

        if(CS<0){
            CS=0;
        }
        largest = max(largest,CS);
    }

    return largest;
}

int main(){
    int arr[] = {1,2,3,-2,5};
    int n = sizeof(arr)/sizeof(int );

    cout<<"Sum : \n"<<sum(arr,n);
    

    return 0;
}