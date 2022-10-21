#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    long long a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    vector<long long>v ;
	    v.push_back(1);
	    for(int i=1;i<n-1;i++){
	        if(a[i]>a[i+1] && a[i]>a[i-1]){
	            v.push_back(i+1);
	        }
	    }
	    v.push_back(n);
	    long long count,res=0;
	    for(int i=1;i<v.size();i++){
	        count=v[i]-v[i-1]+1;
	        res+=(count*(count+1))/2;
	    }
	    res-=(v.size()-2);
	    cout<<res<<endl;
	}
	return 0;
}