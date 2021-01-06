#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n;
	    cin>>m;
	    int arr[101];
	    int brr[101];
	    
	    int i,j;
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    for(i=0;i<m;i++){
	        cin>>brr[i];
	    }
	    int ans=0;
	    for(i=0;i<n;i++){
	        for(j=0;j<m;j++){
	            if(arr[i] == arr[j]){
	                ans++;
	            }
	        }
	    }
	    cout<<ans<<endl;
	    
	    
	}
	return 0;
}