#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(void){int rem=0;
	long long int n=0,t=0,p=0,k=0;
	scanf("%lld",&t);
	while(t--){
	scanf("%lld",&n);p=0,k=0;
	while(((long long int)(pow(2,p+2)-2))<n){
	p++;
	}
	k=n-(long long int)(pow(2,p+1)-2)-1;
	p++;
	int pos=p;
	int *arr=(int*)malloc(sizeof(int)*(p));
	 rem=0;
	while(k>0&&p>0){
	rem=k%2;
	arr[--p]=rem;
	k/=2;
	}
	for(p=0;p<pos;p++){
	if(arr[p])
	printf("6");
	else
	printf("5");
	}
printf("\n");
	}
return 0;
}
	
	
	
