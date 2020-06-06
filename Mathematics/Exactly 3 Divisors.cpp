//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

//Complete this function
bool isPrime(int num, int i=2){
if(i==num)
return true;
if(num%i ==0)
return false;
else
isPrime(num,i+1);
}

int exactly3Divisors(int N)
{
int count = 0;
for(int i=2;i*i<=N;i++){
if(isPrime(i)){
count++;
}
else
continue;
}
return count;
}

// { Driver Code Starts.


int main()
 {
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<exactly3Divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends