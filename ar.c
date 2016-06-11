#include<stdio.h>
#include<stdlib.h>

int main(void){
	int i=0,j=0,n1,n2,k,m;
	scanf("%d %d",&n1,&n2);
 	long long *a=(long long*)(malloc(sizeof(long long)*n1));
 	long long *b=(long long*)(malloc(sizeof(long long)*n2));
	scanf("%d %d",&k,&m);	
	for(j=0;j<n1;j++)
	scanf("%ll",(a+j));
	for(i=0;i<n1;i++)
	scanf("%ll",(b+i));
	if(a[k-1]<b[0])printf("YES");
	else printf("NO");
return 0;
}
