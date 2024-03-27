//Date:27-03-2024
//Link:https://www.codechef.com/START127D/problems/SUPINC
//Author:Ishita
#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,x,N;
	    cin>>n>>k>>x;
	    N=k-1;
	    if(pow(2,N)<=x){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
