#include<stdio.h>
int combination(int n,int k){
	if(k == 0 || k == n){
		return 1;
	}
	return combination(n - 1,k - 1) + combination(n - 1,k);
}
int main(){
	int n,k;
	printf("nhap n:");
	scanf("%d",&n);
	printf("nhap k:");
	scanf("%d",&k);
	int result = combination(n,k);
	printf("to hop C(%d,%d) = %d",n,k,result);
	return 0;
}

