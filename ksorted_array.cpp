#include <algorithm>
#include <iostream>
#include <vector>
#include<queue>

using namespace std;
void ksortedArray(int*arr,int n,int k){
    //insert k element into priority queue
	priority_queue<int>pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    int s=0;
    for(int i=k;i<n;i++){
        arr[s]=pq.top();
        pq.pop();
        s++;
        pq.push(arr[i]);  
    }
    while(!pq.empty()){
        arr[s]=pq.top();
        pq.pop();
        s++;
    }
// time complexity:O(nlogk)
    
}
int main() {
	int arr[]={2,5,9,15,1};
    int n=5;
    int k=3;
    ksortedArray(arr,n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
	return 0;
}
