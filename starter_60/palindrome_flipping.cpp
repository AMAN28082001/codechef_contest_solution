#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    string s;
	    cin>>n>>s;
	    int a=0,b=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='1'){
	            a++;
	        }
	        else{
	            b++;
	        }
	    }
	    if(n%2==1){
	        cout<<"YES";
	    }
	    else{
	        if(a%2 and b%2){
	            cout<<"NO";
	        }
	        else{
	            cout<<"YES";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
