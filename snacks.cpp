#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,s;



int main() {
	
	cin>>n;
	bool tab[n];

	memset(tab,false,sizeof tab);
	
	int target=n;
	
	for (int i=1;i<=n;i++){
		cin>>s;
		tab[s]=true;
		
		if(s==target){
			while(tab[s]){
				cout<<s<<" ";
				s--;
				target--;
			}
			
		}cout<<endl;
		
	}
	


	return 0;
}
