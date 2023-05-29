#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[100];int n;cin>>n;
  cout<<"Enter Array number:";
  for(int i=0;i<n;i++) cin>>arr[i];
  int target; cout<<"Search value target:";
  cin>>target;
   int low=0,high=5,mid;
   while(low<=high)
   {
     mid=(low+high)/2;

     if(arr[mid]==target){
        cout<<"Index number:"<<mid;
        return 0;
     }
     else if(arr[mid]<target){
        low=mid+1;
     }
     else if(arr[mid]>target){ 
        high=mid-1;
     }
   }
    cout<<"No value";
  return 0;
}
//using function
#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int target,int low,int high){
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==target){
           return mid;
        }
       else if(arr[mid]<target){
        low=mid+1;
       }
       else {
         high=mid-1;
       }
    }
    return -1;
}
int main(){
  int arr[50],n,target;
  cin>>n;
  for(int i=0;i<n;i++) cin>>arr[i];
  cin>>target;
  int low=0,high=n-1;
  int result=binarysearch(arr,target,0,n-1);
   if(result==-1){
    cout<<"No found value";
   } else{
    cout<<"Index number:"<<result;
   }

}