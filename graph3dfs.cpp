#include<iostream>
using namespace std;
void dfs(int** g,int r,int s,int* vis){
	
	vis[s]=1;
	cout<<s<<endl;
	for(int i=0;i<r;i++)
	{
		if(g[s][i]!=0)
		{
			if(vis[i]==0)
			{
				dfs(g,r,i,vis);
			}
		}
	}
	return;
}




int main()
{
	int r,c ;
	cin>>r>>c ;
	int** g=new int*[r];
	for(int i=0;i<r;i++){
		g[i]=new int[c];
		for(int j=0;j<c;j++){
			g[i][j]=0;
		}
	}
	int x,y,val;
	for(int i=0;i<r;i++){
		cin>>x>>y;
		g[x][y]=1;
		g[y][x]=1;
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<g[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int* vis=new int[r];
	for(int i=0;i<r;i++){
		vis[i]=0;
	}
	
dfs(g,r,0,vis);
	
	return 0;
}
