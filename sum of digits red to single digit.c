#include<stdio.h>
void main(){
	int n;
	int r,sum1=0,sum2=0,sum3=0,m,p;
	printf("Enter a number:\n");
	scanf("%d",&n);
	if(n<0){
		n=-n;
	}
	if(n<10){
		printf("The sum of the digits until single digit remains is :%d",n);
	}
	while(n>10){
		r=n%10;
		n=n/10;
		sum1=sum1+r;
	}
	m=(sum1+n);
	if(m<10){
		printf("The sum of the digits until single digit remains is :%d",m);
	}
	else{
		while(m>10){
			r=m%10;
			m=m/10;
			sum2=sum2+r;			
		}
	}
	p=(sum2+m);
	if(p<10){
	    printf("The sum of the digits until single digit remains is :%d",p);		
	}
	else{
		while(p>10){
			r=p%10;
			p=p/10;
			sum3=sum3+r;
		}
	printf("The sum of the digits until single digit remains is :%d",sum3+r);
	}
}