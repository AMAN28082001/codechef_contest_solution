#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    map<int,int>mp;
	    for(int i=0;i<n;i++){
	        int a;
	        cin>>a;
	        mp[a]++;
	    }
	        int aa=0;
	        for(auto i:mp){
	            if(i.second>=aa){
	                aa=i.second;
	            }
	        }
	        
	    cout<<n-aa<<endl;
	}
	return 0;
}
