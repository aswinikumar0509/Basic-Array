#include<bits/stdc++.h>
using namespace std;

int sort(int arr[],int n){

    int zero =0;
    int one = 0;
    int two = 0;



    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zero++;
        }
        else if(arr[i]==1){
            one++;
        }
        else if (arr[i]==2){
            two++;
        }

          sort(arr,arr+n);

       cout<<arr[i]<<endl;
    }
  

}

int main(){
    int arr[] = {0,1,0,2,0,1};
    int n = sizeof(arr)/sizeof(int);

    cout<<"element are :"<<sort(arr,n);
    cout<<endl;
    return 0;
}