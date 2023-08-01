#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
class PriorityQ{
	vector<int>pq;
	public:
	bool isEmpty(){
		return pq.size()==0;
	}
	int getSize(){
		return pq.size();
	}
	int getmin(){
		if(isEmpty()){
			return 0;
		}
		return pq[0];
	}
	void insert(int ele){
		pq.push_back(ele);
		int ci=pq.size()-1;
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
	int removeMin(){
		if(isEmpty()){
			return 0;
		}
		int ans=pq[0];
		swap(pq[0],pq[pq.size()-1]);
		pq.pop_back();
		int pi=0;
		while(true){
			int lci=2*pi+1;
			int rci=2*pi+2;
			int mini=pi;
			if(lci<pq.size() && pq[lci]<pq[mini]){
				mini=lci;
			}
			if(rci<pq.size() && pq[rci]<pq[mini]){
				mini=rci;
			}
			if(mini==pi){
				break;
			}
			swap(pq[pi],pq[mini]);
			pi=mini;
		}
		return ans;
	}
};

int main() {
	PriorityQ p;
	p.insert(20);
	p.insert(6);
	p.insert(5);
	p.insert(100);
	p.insert(1);
	p.insert(9);
	p.insert(0);
	p.insert(14);
	int m=p.removeMin();
	cout<<m<<endl;
	cout<<p.getmin();

	return 0;
}
