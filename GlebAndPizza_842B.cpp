#include<bits/stdc++.h>	//I_<3_BITS_Pilani__&&__DC++:)
using namespace std;
typedef long long int ll;
typedef double lf;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<lf> vlf;
typedef vector<pair<ll,ll>> vpll;
typedef vector<pair<int,int>> vpi;
typedef vector<pair<lf,lf>> vplf;
typedef pair<ll,ll> pll;
typedef pair<int,int> pi;
typedef pair<lf,lf> plf;
typedef pair<string,string> pstr; 
typedef set<ll> sll;
typedef set<int> si;
typedef set<lf> slf;
typedef set<string> sstr;
typedef map<string,int> mstri;
typedef map<string,ll> mstrll;
typedef map<string,lf> mstrlf;
typedef map<string,string> mstrstr;

#define itr(i,lo,size) for(int i=lo;i<size;i++)
#define itrR(i,hi,lo) for(int i=hi;i>=lo;i--)
#define itr0 for(int i=0;i<n;i++)
#define itr1 for(int i=1;i<=n;i++)

#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define be begin()
#define en end()
#define mp make_pair

ll gcd(ll a,ll b){if(a%b==0){return b;}else{return gcd(b,a%b);}}
lf pos(lf x,lf y){
	return sqrt((x*x)+(y*y));
}

lf near(lf POS,lf r){
	return POS-r;
}
lf far(lf POS,lf r){
	return POS+r;
}


int main(){	
	lf R,d;
	int n;
	cin>>R>>d>>n;
	int count=0;
	//lf A[n],B[n];
	itr0{
		lf x,y,r;cin>>x>>y>>r;
		lf POS=pos(x,y);lf NEAR=near(POS,r),FAR=far(POS,r);
		//A[i]=NEAR,B[i]=FAR;
		if(NEAR>=R-d&&FAR<=R){count++;}
	}
	//itr0{cout<<A[i]<<" "<<B[i]<<" for i="<<i<<"\n";}
	cout<<count<<"\n";
	return 0;
}
