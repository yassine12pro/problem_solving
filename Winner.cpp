#include <bits/stdc++.h>
using namespace std;

map <string,int> m;
vector <pair <string,int> >v;

int n , score;
string name ;


int main() {
	
	cin >> n;
 for(int i=0;i<n;i++){
 	cin >> name >> score;
 	if(m.find(name) != m.end()){
 		m[name]+= score;
 		
	 }else {
	 	m[name]=score;
	 	
	 }
	 v.push_back(make_pair(name,m[name]));
 }
 
    int maxScore = INT_MIN;
    
    for (map<string, int>::iterator it = m.begin(); it != m.end(); it++) {
        maxScore=max(maxScore,it->second);
    }
	
	for (int i=0;i<n;i++){
		pair<string,int>p=v[i];
		if(m[p.first]==maxScore && p.second>=maxScore){
			cout<<p.first;
			return 0;
		}
	}

	
	
	
	return 0;
}
