#include<math.h>
#include<stdio.h>
typedef struct{
	int HH;
	int MM;
	float angle;
}mat;
mat arr1[361];
mat arr2[361];
void p(int hrs,int mins){
	if(hrs<10){
			if(mins<10){
				printf("0%d:0%d\n",hrs,mins);
			}
			else{
				printf("0%d:%d\n",hrs,mins);
			}
		}
		else{
			if(mins<10){
				printf("%d:0%d\n",hrs,mins);
			}
			else
			printf("%d:%d\n",hrs,mins);
		}
	return;
} 
int main(void){
int i=0;
	for(i=0;i<361;i++){
	arr1[i].angle=0;
	arr1[i].HH=0;
	arr1[i].MM=0;
	arr2[i].angle=0;
	arr2[i].HH=0;
	arr2[i].MM=0;
	}
	int hrs=0,mins=0;
	float angle=0,mul=5.5;int count=0;int ang=0;
	arr1[0].HH=hrs;
	arr1[0].MM=mins;
	arr1[0].angle=angle;
	while(hrs<12){
		mins++;
		count++;
		if(mins==60){
			hrs+=1;
			mins=0;
		}
		angle+=mul;
		if(angle<0){
			angle*=(-1);
			mul*=-1;
		}
		if(angle>180){
			angle=360-angle;
			mul*=(-1);
		}
	ang=(int)(angle*2);
	if(arr1[ang].angle==0){
	arr1[ang].HH=hrs;
	arr1[ang].MM=mins;
	arr1[ang].angle=angle;
	}
	else{	
	arr2[ang].HH=hrs;
	arr2[ang].MM=mins;
	arr2[ang].angle=angle;
	}

	}
	int t=0;float A=0.0,amin=0,amax=0,a2=0;int aint=0;
	scanf("%d",&t);
	while(t--){
	scanf("%f",&A);
	a2=2*A;
	amin=a2-(1/60);
	amax=a2+(1/60);
	if(((int)floor(amax))>amin)
	aint=(int)floor(amax);
	/*else if(ceil(amin)>amin)
	aint=(int)floor(amax);
	*/
	else{
	continue;
	}
	if(arr2[aint].angle==0)
	p(arr1[aint].HH,arr1[aint].MM);	
	else{
	p(arr1[aint].HH,arr1[aint].MM);	
	p(arr2[aint].HH,arr2[aint].MM);		
	}
}
	return 0;	
}
