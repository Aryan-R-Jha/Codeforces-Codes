#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;cin>>m>>n;int A[m][n];

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
		       cin>>A[i][j];
		}
	}
	
	int row[m]={0};
	int col[n]={0};
	for(int i=0;i<m;i++){
		int min=500;
		for(int j=0;j<n;j++){
			if(A[i][j]<min){min=A[i][j];
			}
		}
		row[i]=min;
	}
	for(int i=0;i<n;i++){
		int min=500;
		for(int j=0;j<m;j++){
			if(A[j][i]<min){min=A[j][i];
			}
		}
		col[i]=min;
	}
	int blue=0;
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			blue+=A[i][j];
		}
	}
		
	if(blue==0){cout<<"0\n";return 0;}

		
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(row[i]+col[j]<A[i][j]){cout<<"-1\n";return 0;}
			else if(row[i]+col[j]>A[i][j]){col[j]=A[i][j]-row[i];
			}
		}
	}
	int count=0;
	for(int i=0;i<m;i++){
		count+=row[i];
	}
	int rows=count;
	for(int i=0;i<n;i++){
		count+=col[i];
	}
	if(blue!=rows*n+(count-rows)*m){cout<<"-1\n";return 0;}
	cout<<count<<"\n";
	for(int i=0,r=0;r<rows&&i<m;i++){
		while(row[i]){cout<<"row "<<i+1<<"\n";row[i]--;r++;}
	}
	for(int i=0,c=0;c<count-rows&&i<n;i++){
		while(col[i]){cout<<"col "<<i+1<<"\n";col[i]--;c++;}
	}
	return 0;
}



