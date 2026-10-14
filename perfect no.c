#include<stdio.h>
void main(){
	long int n,m;
	int i,sum=0;
	printf("Enter a number:\n");
	scanf("%ld",&n);
	m=n;
	for(i=1;i<n;i++){
		if(n%i==0){
			sum=sum+i;
		}
	}
	if(m==sum){
		printf("The given number is a perfect number");
	}
}