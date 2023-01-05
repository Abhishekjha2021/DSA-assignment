#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int left_search(vector<int>&A, int a){
	int low=1;
	int high=A.size()-1;
	int ans=0;
	while(low<=high){
		int mid=(low+mid)/2;
		if(A[mid]>a){
			high=mid-1;
		}
		else{
			ans=mid;
			low=mid+1;
		}
	}
		return high;
}

void solve(){
	int n,m,x,y,p,q;
	cin>>n>>m;
	vector<int>A(n);
	for(int i=0;i<n;i++) cin>>A[i];
	while(m!=0){
		cin>>p;
		cout<<left_search(A,p)+1<<"\n";
		m--;
	}
}

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
}
