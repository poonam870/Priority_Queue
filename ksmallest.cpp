#include <algorithm>
#include <iostream>
#include <vector>
#include<queue>

using namespace std;
void ksmallest(int*arr,int n,int k){
    //insert  element into priority queue and check if size is greater than k then pop elements
	priority_queue<int>pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k){
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
