#include<stdio.h>
void main(){
	long int n;
	int i,sum=0;
	printf("Enter a number:\n");
	scanf("%ld",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			
			sum=sum+i;
		}
	}
	printf("The sum of the factors of %ld is :%d",n,sum);
}