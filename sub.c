#include<stdio.h>
#include<stdlib.h>
int main(void){
	int t=0,n=0,i=0,len=0,m=0,tmp=0;
	long long int *a,*b,*c;
	scanf("%d",&t);long long int res=0;
	while(t--){n=0,res=0,i=0,len=0,m=0,tmp=0;
		scanf("%d",&n);
		a=(void*)calloc(n,sizeof(long long int));
		b=(void*)calloc(n,sizeof(long long int));
		c=(void*)calloc(n+1,sizeof(long long int));
		i=0;
		for(i=0;i<n;i++){
		scanf("%lld",(a+i));
		}		
		for(i=1;i<n;i++)
		if(a[i-1]<=a[i])
		b[i]=1;
		len=0;
		for(i=1;i<n;i++){len=0;
		if(b[i]==1){
			len=2;
			while(b[++i]){
				len++;
				if(i==(n-1))break;
			}
		}
		c[len]++;
		}
		c[1]=n;res=0;
		for(i=1;i<n+1;i++){
		res+=c[i];m=0;
			if(i>2&&(c[i]!=0)){m=i-1;tmp=0;
				while(m>1){
				tmp+=m;
				m--;
				}
			}
			res+=c[i]*tmp;
		}
		printf("%lld\n",res);res=0;
}
return 0;
}
