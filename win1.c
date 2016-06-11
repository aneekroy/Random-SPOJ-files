
#include<stdio.h>

int main(void){
	int t=0,n=0,match=0,i=0;long long int maxwin=0;
	char a[1001],b[1001];
	long long int w[1001];
	scanf("%d ",&t);
		
	while(t--){
	scanf("%d",&n);
	match=0;
	scanf(" %s",a);scanf(" %s",b);
	b[n]=a[n]='\0';
	for(i=0;i<=n;i++){
	scanf("%lld",(w+i));	
	if(a[i]==b[i])
		match++;
	}maxwin=0;
	if(match==n+1){
	printf("%lld\n",w[n]);
	continue;
	}
	for(i=0;i<match;i++){
	if(w[i]>maxwin)
	maxwin=w[i];
	}
	printf("%lld\n",maxwin);	
maxwin=0;
}
return 0;
}
