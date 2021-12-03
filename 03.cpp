#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int kth_smallest(int arr[],int n,int k){

    sort(arr,arr+n);

    return arr[k-1];

    

}

int main(){

    int arr[] =  {7,10,4,3,20,15};
    int n = sizeof(arr)/sizeof(int);
    int k =3;

    cout<<"Kth element are  : "<<kth_smallest(arr,n,k);

    return 0;

}