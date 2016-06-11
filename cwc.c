#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int* insort(int *x,int l){
	int j=0,i=0,key=0;
	for(j=2;j<l;j++)
	{
		key=x[j];
		i=j-1;
			while(i>0&&x[i]>key){
				x[i+1]=x[i];
				i--;
				}
		x[i+1]=key;
	}
	return x;
}

int main(void){
	static int *a,*b;
	//printf("Enter no of test cases :");
	int len=0,t=0,i=0,n1=0,n2=0,j=0,c=0;
	scanf("%d",&t);
	while((c++)<t){
		//printf("\nEnter size :");
		scanf("%d",&len);
		len++;	
		a=(int*)malloc(len*sizeof(int));
		b=(int*)malloc((len-1)*sizeof(int));
		a[0]=INT_MIN;	
		//printf("\nEnter %d numbers :",(len-1));
			for(i=1;i<len;i++){
				scanf("%d",&a[i]);
			}
		//printf("\nThe Sorted Array is :");
		a=insort(a,len);
		/*for(i=1;i<len;i++){
		printf(" %d ",a[i]);
		}*/
			for(i=1;i<len;i++){
				b[i-1]=a[i];
			}
		n1=0,n2=0;
		for(i=0,j=len-2;i<=(len-1)/2,j>=(len-1)/2;i++,j--){
			if(i%2!=0)
			n1+=b[i]+b[j];
			else if(i%2==0)
			n2+=b[i]+b[j];
			//printf("\n n1 = %d , n2=%d",n1,n2);
			}
			if(n1==n2)
			printf("Case %d: Yes\n",c);
			else
			printf("Case %d: No\n",c);
		}
	return 0;
}

