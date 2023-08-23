#include<bits/stdc++.h>
using namespace std;
int knapsack(int w,int weight[],int value[],int item){

    //base casa
    if(item==0||w==0){ 
        return 0;
    }
     // If the current_weight_item is greater than the max_weight
    if(weight[item-1]>w){ 
      return knapsack(w,weight,value,item-1);
    } 
    else{
        return  max(value[item-1] + knapsack(w - weight[item-1], weight, value, item-1),
                    knapsack(w, weight, value, item-1));           
  }   
}
int main(){
   int value[]={1,2,3}; //profit value
   int weight[]={4,5,1}; //current_weight_item
   int w=4 //capacity_weight,max weight 
   int item=3; // How many item there are?

   cout<<knapsack(w,weight,value,item);


}

