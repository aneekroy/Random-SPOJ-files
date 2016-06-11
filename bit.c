#include<stdio.h>
int main(void){
	int t=0,n=0,k=0,n1=0,i=0;
	int m=n,p=0,rem=0,flag=0;
	scanf("%d",&t);
	while(t--){
	scanf("%d %d",&n,&k);n1=0;
	if(k==0){
			printf("-1\n");
			continue;
		}
	int a*=(int*)(malloc(sizeof(int)*32));
	m=n,p=0,rem=0;
	while(m>0){
	rem=m%2;
	a[p++]=rem;
	m/=2;
	if(rem)n1++;
	}
	flag=0;
	if(k<n1){	
		printf("%d\n",(int)(pow(2,k)-1));
		}
	else if(k==n1){
		for(i=p-1;i>=0;i--){
			if(i==(p-1)){
				a[i]=1;
				flag=1;
			}
			//if(flag==1&&a[i]){
			if((flag==1)&&(i<(p-1))&&a[i]==1){
				a[i]=0;
				flag=0;
				break;
			}	
		}
		
	}	



