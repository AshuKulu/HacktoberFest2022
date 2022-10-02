#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int kadanes(int n,int arr[]){
  if(n==1){
    return arr[0];
  }
  
  int currSum=0;
  int maxSum=arr[0];
  
  for(int i=0;i<n;i++){
    currSum +=arr[i];
    if(currSum > maxSum){
      maxSum = currSum;
    }
    if(currSum <0){
      currSum=0;
    }
  }
  return maxSum;
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  
  cout<<kadanes(n,arr)<<endl;
}
    
