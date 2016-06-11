#include<stdio.h>
#include<stdlib.h>
int main(void){
	int t=0,n=0,match=0,i=0;long long int maxwin=0;
	char *a,*b;
	long long int *w;
	scanf("%d ",&t);
	while(t--){
	scanf("%d",&n);
	a=(char*)malloc((n+1)*sizeof(char));
	b=(char*)malloc((n+1)*sizeof(char));
	w=(long long int*)malloc((n+1)*sizeof(long long int));	
	match=0;
	scanf(" %s",a);
	scanf(" %s",b);	
	match=0;
	a[n]=b[n]='\0';
	for(i=0;i<=n;i++){
	scanf("%lld",(w+i));	
	if((int)(a[i]-b[i])==0)
		match++;
	}maxwin=0;
	for(i=0;i<match;i++){
	if(w[i]>maxwin)
	maxwin=w[i];
	}
	printf("%lld\n",maxwin);
	maxwin=0;
}
return 0;
}
