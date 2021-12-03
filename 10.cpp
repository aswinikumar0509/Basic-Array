// duplicate
#include<bits/stdc++.h>
using namespace std;

int duplicate(int arr[],int n){
    int s = 0;
   int  e = n-1;

   while(s<e){
       for(int i=s;i<e;i++){
           if(arr[i]==arr[i-1]){
               return arr[i];
           }
       }
   }
}

int main(){
    int arr[] = {1,1};
    int n = sizeof(arr)/sizeof(int);

    cout<<duplicate(arr,n);
    return 0;
}