#include<bits/stdc++.h>
using namespace std;

int k_min(int arr[],int n,int k){

  sort(arr,arr+n);

  int minele,maxele;
  int result;

  for(int i=1;i<n;i++){
      if(arr[i]>=k){
          maxele = max(arr[i-1]+k,arr[n-1]-k);
          minele = min(arr[0]+k,arr[i]-k);

          result = min(result ,  maxele - minele);
      }
  }

  return result;
}
int main(){
    int arr[] = {1,5,8,10};
    int n = sizeof(arr)/sizeof(int);

    int k = 2;

    cout<<k_min(arr,n,k);
}
