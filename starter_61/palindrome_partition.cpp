#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int t;
  cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(s[0]=='0'){
            for(int i=0;i<2*n;i++){
                if(s[i]=='1'){
                    s[i]='0';
                }else{
                    s[i]='1';
                }
            }
        }
        vector <int> v;
        int count;
        int flag=0;
        int p;
        for(int i=0;i<2*n;i++){
            if(s[i]=='0'){
                v.push_back(i);
            }
            if(s[i]!=s[2*n-i-1]){
                flag=1;
                break;
            }
        }
        if(flag){
            cout<<"1"<<endl;
            cout<<2*n<<endl;
            continue;
        }
        if(v.size()==0){
            cout<<"-1"<<endl;
        }else{
            count=2*n-1-v.back();
            for(int i=v.size()-1;i>=1;i--){
                if(v[i]-v[i-1]-1!=count){
                    flag=1;
                    cout<<"2"<<endl;
                    cout<<v[i-1]+1<<" "<<2*n-1-v[i-1]<<endl;
                    break;
                }
            }
            if(flag==0){
                cout<<"2"<<endl;
                cout<<v[v.size()-2]+2<<" "<<2*n-2-v[v.size()-2]<<endl;
            }
        }
    }
  return 0;
}