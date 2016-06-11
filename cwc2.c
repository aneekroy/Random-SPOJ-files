#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int fP(int arr[], int n)
{
    int sum = 0;
    int i, j;
   
    for (i = 0; i < n; i++)
      sum += arr[i];
     
    if (sum%2 != 0) 
       return 0;
   
    int part[sum/2+1][n+1];
     
    for (i = 0; i <= n; i++)
      part[0][i] = 1;
       
    for (i = 1; i <= sum/2; i++)
      part[i][0] = 0;    
      
     for (i = 1; i <= sum/2; i++) 
     {
       for (j = 1; j <= n; j++) 
       {
         part[i][j] = part[i][j-1];
         if (i >= arr[j-1])
           part[i][j] = (part[i][j] || part[i - arr[j-1]][j-1]);
       }       
     }   
      
     return part[sum/2][n];
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

