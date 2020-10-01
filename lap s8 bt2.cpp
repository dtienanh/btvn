#include<stdio.h>
int SoNgichDao(int n){
	int b =0;
	for(int n ; n!=0; n/=10){
		b=b*10+n%10;
	}
	return b;
}


int main(){
	int n;
	printf("Nhap vao so n : ");
	scanf("%d", &n);
	printf("\n so nghich dao la: %d",SoNgichDao(n));
}
