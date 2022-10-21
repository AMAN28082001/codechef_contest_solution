#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,count=0;
	    string a,b;
	    cin>>n>>a>>b;
	    map<char,int> p,q;
	    for(char i:a){
	        p[i]++;
	    }
	    for(char i:b){
	        q[i]++;
	    }
	    for(char i='a';i<='z';++i){
	        count=max(count,min(p[i],q[i]));
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}