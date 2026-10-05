//w.c.p to calculate sum of digit
#include<stdio.h>
int main(){
	int n,digit,sum=0;
	printf("Enter a number :");
	scanf("%d",&n);
	
	while(n>0){
		digit=n%10;
		sum=sum+digit;
		n=n/10;
		
	}
	printf("sum of digit is %d",sum);
	return 0;
}
