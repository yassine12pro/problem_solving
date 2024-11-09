#include <bits/stdc++.h>
using namespace std;
int n;
string ch;

vector <pair <int,int> > seg;
set <vector<pair<int,int> > > sett;


int main() {
	
	cin >> n;
	int x=0;int y=0;

	for (int i=0;i<n;i++){
		
		sett.clear();
		cin >> ch;
		
		int res=0;
		
		for(int j=0;j<ch.size();j++){
			int dx=x;
			int dy=y;
			
			
			if(ch[j]=='N'){
				dy++;
			}else if(ch[j]=='S'){
				dy--;
			}else if(ch[j]=='W'){
				dx--;
			}else {
				dx++;
			}
			
			
			seg.clear();

			seg.push_back(make_pair(x,y));

			seg.push_back(make_pair(dx,dy));
			sort(seg.begin(),seg.end());
			if(sett.find(seg) !=sett.end()){
				res++;
			}else {
				sett.insert(seg);
				res+=5;
			}
			x=dx;
			y=dy;

		}
		cout<<res<<endl;
		
		
	}
		
			return 0;
	}


