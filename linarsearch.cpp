#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[10],i,n,x,index;
  cin>>n;
  cout<<"Enter 10 number:";
  for(int i=0;i<n;i++) cin>>arr[i];
  cout<<"Enter number:";
  cin>>x;
  for(int i=0;i<n;i++) {
    if(arr[i]==x){
      index=i;
      break;
    }
  } cout<<"index="<<index;
    cout<<endl;
}



