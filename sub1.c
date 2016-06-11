#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main(void){
	long long int t=0,n=0,res=0,i=0,len=0,prev=0,curr=0;
	scanf("%lld",&t);
	while(t--){n=0,res=0,i=0,len=0,prev=INT_MIN,curr=0;
		scanf("%lld",&n);
		for(i=0;i<n;i++){
			scanf("%lld",&curr);
			if(prev<=curr){
				len++;
			}		
			else{
				res+=(len+1)*(len)/2;
				len=1;
			}
			prev=curr;
			if(i==(n-1))
			res+=(len+1)*(len)/2;
		}		
	printf("%lld\n",res);
}
return 0;
}
