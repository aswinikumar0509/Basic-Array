#include<bits/stdc++.h>
using namespace std;

int print_union(int arr1[],int arr2[],int n,int m){

    int i=0;
    int j=0;

    while(i<m and j<n){
        if(arr1[i]<arr2[j])
        cout<<arr1[i++]<<" ";

        else if (arr2[j]<arr1[i])
        cout<<arr2[j++]<<" ";

        else {
        cout<<arr2[j++]<<" ";
        i++;
        }

    }

    while(i<m){
        cout<<arr1[i++]<<" ";

        while(j<n)

        cout<<arr2[j++]<<" ";
    }
}

int main(){
    int arr1[] = {1,3,4,5,7};
    int arr2[] = {2,3,5,6};

    int n = sizeof(arr2)/sizeof(arr2[0]);
    int m  = sizeof(arr1)/sizeof(arr1[0]);

    cout<<"Element are : \n";

    print_union(arr1,arr2,n,m);

    return 0;
}