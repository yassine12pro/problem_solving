#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200007;
ll v[N];
vector<ll> vv;

ll n,k,x,lvl;



int main() {
	cin>>n>>k>>x;
	for(int i=0;i<n;i++){
		cin>>lvl;
		v[i]=lvl;
	}

	
	sort(v,v+n);
	
	ll nbk=0;

	for(int i=0;i<n-1;i++){
		ll d=v[i+1]-v[i];
		if(d>x){
			nbk++;
			vv.push_back(d);
		}
	}
		if(nbk==0){
			cout<<1;
			return 0;
		}
		if (k==0){
			cout<<nbk+1;
			return 0;
		}
	
	

	sort(vv.begin(),vv.end());
	


	for(int i=0;i<vv.size();i++){
		
			if (k<=0){
			cout<<nbk+1;
			return 0;
			}
		
		ll q = vv[i]/x;
		ll r=vv[i]%x;
		if(r==0)
			q--;
		if(q<=k){
			k-=q;
			nbk--;

		}
	
		
	}

	
	cout<<nbk+1;
	return 0;
}
