#include<stdio.h>
void main(){
	long int n;
	int i=1,c=0;
	printf("enter a number:\n");
	scanf("%d",&n);
	while(i<=n){
		if(n%i==0){
			c++;
		}
		i++;
	}
	if(c==2){
		printf("The given number is PRIME");
	}
	else{
		printf("The given number is not a PRIME");
	}
}
