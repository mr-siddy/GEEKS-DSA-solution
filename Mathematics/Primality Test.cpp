//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

//You need to complete this function
bool isPrime(int n) 
{ 
    // Corner case 
    //if (n <= 1)  return false; 
  
    // Check from 2 to n-1 
    for (int i=2; i<n; i++) 
        if (n%i == 0) 
            return false; 
  
    return true; 
}

// { Driver Code Starts.

int main()
{
    int T; //testcases
    cin>>T; //input testcases
    while(T--) //while testcase have not been exhausted
    {
        int N;
        cin>>N; //input n
        
        if(isPrime(N)) 
        cout<<"Yes";
        else
            cout<<"No";
            
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends