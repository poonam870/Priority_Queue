#include <algorithm>
#include <iostream>
#include <vector>
#include<queue>

using namespace std;
void ksmallest(int*arr,int n,int k){
    //insert k element into priority queue
	priority_queue<int>pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    for(int i=k;i<n;i++){
        if(arr[i]<pq.top()){
            pq.push(arr[i]);
            pq.pop();
        } 
    }
    while(!pq.empty()){
      cout<<pq.top()<<" ";
      pq.pop();
  }
// time complexity:O(nlogk)
    
}
int main() {
	int arr[]={0,5,9,15,1,99,990};
    ksmallest(arr,7,3);
   
	return 0;
}
