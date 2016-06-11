#include<iostream>
#include<stdio.h>
using namespace std;

int main(void){
	int t=0,n=0,match=0,i=0;long long int maxwin=0;
	string a;string b;
	long long int w[1001];
	scanf("%d ",&t);
		
	while(t--){
	scanf("%d",&n);
	cin>>n;	
	match=0;
	cin>>a>>b;
	b[n]=a[n]='\0';
	for(i=0;i<=n;i++){
	cin>>*(w+i);	
	if(a[i]==b[i])
		match++;
	}maxwin=0;
	for(i=0;i<match;i++){
	if(w[i]>maxwin)
	maxwin=w[i];
	}
	cout<<maxwin<<endl;	
maxwin=0;
}
return 0;
}
