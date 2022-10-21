#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,count=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=s.length()-2;i>=0;i--){
	        if(s[i]==s[i+1]){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}