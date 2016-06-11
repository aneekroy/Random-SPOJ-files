#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int iSum(int *arr, int n, int sum){
   if(sum == 0)
     return 1;
   if (n == 0 && sum != 0)
     return 0;
 
   if (arr[n-1] > sum)
     return iSum(arr, n-1, sum);
 
   return (iSum(arr, n-1, sum)+iSum(arr, n-1, sum-arr[n-1]));
}

int fP(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
       sum += arr[i];
 
    if (sum%2 != 0)
       return 0;
    if(n%2!=0)
	return 0;
    return iSum (arr, n, sum/2);
}
 

int main()
{  static int *a;
  int len=0,t=0,i=0,c=0;
	scanf("%d",&t);
	while((c++)<t){
		
		scanf("%d",&len);	
		a=(int*)malloc(len*sizeof(int));
			for(i=0;i<len;i++){
				scanf("%d",&a[i]);
			}
  if (fP(a,len) !=0)
     printf("Case %d: Yes\n",c);
  else
     printf("Case %d: No\n",c);
  }
return 0;
}
