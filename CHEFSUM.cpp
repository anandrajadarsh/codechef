#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int* arr=new int[n];
	    int greatthanone=0,idx=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	   
	   for(int i=0;i<n;i++)
	   {
	       if(arr[i]>1)
	       {
	           idx=i;
	           break;
	       }
	   }
	   greatthanone=n-idx;
	   
	    if(greatthanone<=k)
	    cout<<"YES";
	    else
	    cout<<"NO";
	   
	}
	return 0;
}
