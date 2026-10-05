

#include<stdio.h>
int main(){
	int n,digit,count=0;
	printf("Enter a number :");
	scanf("%d",&n);
	
	while(n>0){
		n/=10;
		count ++;
	}
	printf("Number of digit is: %d",count);
	return 0;
}
	
