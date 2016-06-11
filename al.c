#include<stdio.h>
#include<string.h>
ins_sort(char *s,int l){
int i=0,j=0;char t;
for(i=0;i<l-1;i++){
t=s[i];
key=i;
for(j=i+1;j<l;j++){
if(s[j]<s[i]){
key=j;
s[j]=s[i];
}
}

int main(void){
char c[30];
int i=0,j=0;
fgets(c,30,stdin);
while(c[0]!='0'){
ins_sort(c,strlen(c));

