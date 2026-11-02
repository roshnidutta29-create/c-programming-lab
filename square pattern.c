//wcp to print a *  pattern in square format
#include<stdio.h>
int main(){
	int i ,n,j;
	printf("enter the size of square :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	for(j=1;j<=n;j++){
	printf("*");
}
	printf("\n");
}
return 0;
}
