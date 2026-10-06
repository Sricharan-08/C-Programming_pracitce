//Program name :  Palindrome_num.cabs
//Description  :  Checks if the given number is a palindrome
//Author 	   :  Sricharan (KMIT)	


#include<stdio.h>
void main(){
	int n,r, rev=0,m;
	printf("enter a number:\n");
	scanf("%d",&n);
	m=n;
	while(n!=0){
		r=n%10;
		rev = rev*10+r;
		n=n/10;
		
	}
	if(m==rev){
		printf("The given number is a PALINDROME\n");
	}
	else{
		printf("The given  number is not a PALINDROME\n");
	}
	
}