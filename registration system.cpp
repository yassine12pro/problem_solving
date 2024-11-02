#include <bits/stdc++.h>
using namespace std;



	map <string,int> names;
	
	string ch;
	int n;

int main() {

	
	cin>>n;
	
	for (int i=0;i<n;i++){
		
		cin >> ch;
		if(names.find(ch) != names.end()){
			
			
			
			cout << ch << names[ch] << '\n'; //cout
			names[ch]++ ;
			
			
		}else {
			 cout << "OK" << '\n' ;  // cout 
			names[ch]=1;
		}
		
	}
	
	
	
	
	return 0;
}
