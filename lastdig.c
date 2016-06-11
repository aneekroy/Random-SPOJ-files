#include<stdio.h>
int main(void){
	int t=0,a=0;int c=1;
	long long int b=0,i=0;
	scanf("%d",&t);
	while(t--){c=1;
		scanf("%d %lld",&a,&b);
		a%=10;
		if((a==1||a==5||a==6||a==0)&&b!=0){
			printf("%d\n",a);
			continue;
		}
		else if((a==2||a==3||a==7||a==8)&&b!=0)
		b%=4;
		else
		b%=2;
		for(i=1;i<=b;i++){
			c*=a;
			c%=10;
		}
		printf("%d\n",c);
	}
	return 0;
}
