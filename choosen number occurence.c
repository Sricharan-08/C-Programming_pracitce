#include<stdio.h>
void main(){
	long long int n;
	int d,r,c=0;
	printf("Enter a number:\n");
	scanf("%lld",&n);
	printf("Enter a digit:\n");
	scanf("%d",&d);
	while(n!=0){
		r=n%10;
		if(r==d){
			c++;
		}
		n=n/10;
	}
	printf("The occurence of %d in the number is %d",d,c);
}