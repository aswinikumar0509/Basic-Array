#include<bits/stdc++.h>
using namespace std;

int rotate(int arr[],int n){
    int s =0;
    int e = n-1;

    while(s<e){
        swap(arr[s],arr[e]);
        s+=1;
       
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    cout<<"Element are : \n";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }

    rotate(arr,n);

    cout<<"Element are : \n";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }

    return 0;
}