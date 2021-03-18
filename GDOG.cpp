#include <iostream>
using namespace std;
int n,k;
int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	     int out=0;
	    cin>>n>>k;
	    for(int i=1;i<=k;i++){
	       out=max(out,n%i);
	    }
	    cout<<out<<endl;
	}
	
	
	return 0;
}
