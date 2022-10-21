#include <bits/stdc++.h>
using namespace std;
int n,a[102],b[102],res,arr[102][20001];
void rbf(int m,int x,int y){
    if(m==n+1){
        res=max(res,min(x,y));
        return;
    }
    if(arr[m][x]>=y && arr[m][x]!=0){
        return;
    }
    arr[m][x]=y;
    rbf(m+1,x+a[m],y);
    rbf(m+1,x,y+b[m]);
    
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    cin>>n;
	    res=0;
	    for(int i=1;i<=n;++i){
	        for(int j=0;j<=20001;++j){
	            arr[i][j]=0;
	        }
	    }
	    for(int i=1;i<=n;++i){
	        cin>>a[i];
	    }
	    for(int i=1;i<=n;++i){
	        cin>>b[i];
	    }
	    rbf(1,0,0);
	    cout<<res<<endl;
	}
	return 0;
}