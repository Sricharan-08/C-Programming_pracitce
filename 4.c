#include<stdio.h>
void main(){
	int num,sum=0;
	printf("Enter the number:\n");
	scanf("%d",&num);
    while(num>=10){
        int sum=0;
        while(num>0){
            sum +=num%10;
            num =num/10;
        }
        num = sum;
    }
	printf("The sum of the digits in the number reduced to one digit is :%d",num);
    
}