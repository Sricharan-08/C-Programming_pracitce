#include<stdio.h>
void main(){
	int m,n,r;
	printf("Enter two numbers for calculating their GCD:\n");
	scanf("%d %d",&m,&n);
	if(m<n){
		r=m;
		m=n;
		n=r;
	}
	while(n!=0){
		r=m%n;
		m=n;
		n=r;
	}
	printf("The GCD of given numbers is %d",m);
}