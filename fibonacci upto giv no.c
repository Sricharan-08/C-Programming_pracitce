#include<stdio.h>
void main(){
	long int f=0;
	int n,i,a=0,b=1;
	printf("Enter a number for those many fibonacci series numbers:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		f=a+b;
		printf("%ld ",f);
		a=b;
		b=f;
	}
}