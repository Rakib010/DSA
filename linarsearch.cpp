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

#include<bits/stdc++.h>
using namespace std;
int main(){
  int i,n,x,arr[10],arr1[10],j=0,chk=0;
  cout<<"Enter size of array:";
  cin>>n;
  for(int i=0;i<n;i++) cin>>arr[i];
  cout<<"Enter search x value:";
  cin>>x;
  for(int i=0;i<n;i++)
  {
    if(arr[i]==x)
    {
      arr1[j]=i;
      j++;
      chk++;
    }
  }
     if(chk>0)
     {
       n=chk;
       for(int i=0;i<n;i++)
       cout<<arr1[i]<<" ";
     } 
    else cout<<"Not found";

}






