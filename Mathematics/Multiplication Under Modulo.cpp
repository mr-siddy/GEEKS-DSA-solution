//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends
//User function Template for C++


int multiplicationUnderModulo(long long a,long long b)
{
    int M=1000000007;
    //your code here
    int s=((a%M)*(b%M))%M;
    
    return s ;
}

// { Driver Code Starts.


int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    long long a;
	    long long b;
	    cin>>a>>b;
	    cout<<multiplicationUnderModulo(a,b)<<endl;
	}
	return 0;
}  // } Driver Code Ends