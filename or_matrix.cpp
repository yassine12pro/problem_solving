#include<bits/stdc++.h>
using namespace std;
const int n=100;
int a[n][n];
int b[n][n];

int main(){
	
	int m,n;
	cin>>m>>n;
	//initialiser matrice a avec des 1
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			a[i][j]=1;
		}
	} 
	//lire matrice b
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>b[i][j];
		}
	}
	
	//parcoure b et modifier en a
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(b[i][j]==0){
				for(int x=0;x<n;x++){
					a[i][x]=0;
				}
				for(int x=0;x<m;x++){
					a[x][j]=0;
				}
			}
		}
		
	}
	
	
	for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){   
					int c=b[i][j];
					int t=0;
				
					for(int x=0;x<n;x++){
						t+=a[i][x];
						if(t>0 && c==0){
							cout<<"NO";
							return 0;
						}
					}
					for(int x=0;x<m;x++){
						t+=a[x][j];
						if(t>0 && c==0){
							cout<<"NO";
							return 0;
						}
					}
					
					if(t==0 && c != 0){
						cout<<"NO";
						return 0;
					}
				
			}
		
	}
		
	cout<<"YES"<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	} 
		
	
	
	
	
	return 0;
	
}
