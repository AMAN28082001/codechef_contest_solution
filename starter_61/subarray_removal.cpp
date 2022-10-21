#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    int count1=0;
	    int count2=0;
	    int res=0;
	    int minm;
	    cin>>n;
	    for(int i=1;i<=n;i++){
	        cin>>x;
	        if(x==0){
	            count1+=1;
	        }
	        if(x==1){
	            count2+=1;
	        }
	        minm=min(count1,count2);
	        count1-=minm;
	        count2-=minm;
	        res+=minm;
	        
	    }
	    cout<<res+count2/3<<endl;
	}
	return 0;
}