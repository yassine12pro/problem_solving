#include <bits/stdc++.h>
using namespace std;
const int N=1500;
int n,k;
set <string> s;
string tab [N] ;
set<vector <string> >settt;
vector<string> strings;


string getstr3(string str1,string str2){
	string res="";
	for(int i=0; i< k;i++){
		
			if(str1[i]==str2[i]){
				res+=str1[i];
			}
			else {
				if(str1[i]=='E'){
					if(str2[i]=='S'){
						res+='T';
					}else{
						res+='S';
					}
				}else if(str1[i]=='S'){
					if(str2[i]=='E'){
						res+='T';
					}else{
						res+='E';
					}
				}else{
					if(str2[i]=='E'){
						res+='S';
					}else{
						res+='E';
					}
				}
			}
		
	}
	return res;

	
}

int main() {
	
cin>>n>>k;

string ch;


for (int i=0;i<n;i++){
	cin>>ch;
	tab[i]=ch;
	s.insert(ch);
}


for(int i=0;i<n-1;i++){
	for(int j=i+1;j<n;j++){
		
			string str1=tab[i];
			string str2=tab[j];
			
			
			string str3=getstr3(str1,str2);
			
			if(s.find(str3)  != s.end() ){
				strings.clear();
				strings.push_back(str1);
				strings.push_back(str2);

				strings.push_back(str3);
				sort(strings.begin(),strings.end());
				settt.insert(strings);

			}
	}

} cout<<settt.size();

	return 0;
}
