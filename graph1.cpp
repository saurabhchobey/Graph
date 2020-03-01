#include<iostream>
using namespace std;
int main(){
	int r,c;
	cin>>r>>c;
	int** g=new int*[r];
	for(int i=0;i<r;i++){
		g[i]=new int[c];
		for (int j=0;j<c;j++){
			g[i][j]=0;
		}
	}
	int x,y,val;
	for(int i=0;i<r;i++){
		cin>>x>>y>>val;
		g[x][y]=val;
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<g[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
