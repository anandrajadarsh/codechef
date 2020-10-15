#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	int t;
	cout<<"enter test cases";
	cin>>t;
	while(t--)
	{	
		
		char t[3];
		char b[3];
		cout<<"enter first string:";
		
		for(int i=0;i<3;i++){
			cin>>t[i];
		}
		cout<<"enter second string:";
		for(int i=0;i<3;i++){
			cin>>b[i];
		}
		
		if ((t[0]=='b' || b[0]=='b')&&(t[1]=='o' || b[1]=='o')&&(t[2]=='b' || b[2]=='b')){
			cout<<"yes"<<endl;
		}
		else if((t[0]=='b' || b[0]=='b')&&(t[1]=='b' || b[1]=='b')&&(t[2]=='o' || b[2]=='o')){
			cout<<"yes"<<endl;
			
		}
		else if((t[0]=='o' || b[0]=='o')&&(t[1]=='b' || b[1]=='b')&&(t[2]=='b' || b[2]=='b')){
			cout<<"yes"<<endl;
		}
		else
		{
			cout<<"no"<<endl;
		}
	}
	
	
	
	
	
	return 0;
}

