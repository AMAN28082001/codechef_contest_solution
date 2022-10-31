#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,q;
	    cin>>n>>q;
	    int a[n];
	    int count=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        count+=a[i];
	    }
	    for(int i=0;i<q;i++){
	        int a,b;
	        cin>>a>>b;
	        if((b-a+1)%2==1){
	            count++;
	        }
	    }
	   cout<<count<<endl;
	}
	return 0;
}
