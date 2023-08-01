#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
	void heapsort(vector<int>&pq,int n){
		for(int i=1;i<n;i++){
		int ci=i;
		while(ci>0){
		int pi=(ci-1)/2;
		if(pq[ci]<pq[pi]){
			swap(pq[ci],pq[pi]);
			ci=pi;
		}else{
			break;
		}
		}
	}
	int size=n;
	while(size>=1){
	swap(pq[0],pq[size-1]);
	size--;		
	int pi=0;
	while(true){
		int lci=2*pi+1;
		int rci=2*pi+2;
		int mini=pi;
		if(lci<size && pq[lci]<pq[mini]){
			mini=lci;
		}
		if(rci<size and pq[rci]<pq[mini]){
			mini=rci;
		}
		if(mini==pi){
			break;
		}
		swap(pq[pi],pq[mini]);
		pi=mini;
	}
	}
	}
int main() {
	vector<int>pq={20,6,5,100,1,9,0,14};
	heapsort(pq,pq.size());
	for(int i=0;i<pq.size();i++){
		cout<<pq[i]<<" ";
	}


	return 0;
}
