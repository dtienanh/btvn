#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,p,S,C;
	printf("Nhap canh thu nhat : ");
	scanf("%f",&a);
	printf("Nhap canh thu hai :");
	scanf("%f",&b);
	printf("Nhap canh thu ba :");
	scanf("%f",&c);
	if(a+b>=c){
		//lan 1
		if(a+c>=b){
			//lan2
			if(b+c>=a){
				//lan3
				printf("\nDay la 3 canh cua 1 tam giac");
				C=a+b+c;
				p=(a+b+c)/2;
				S=sqrt(p*(p-a)*(p-b)*(p-c));
				printf("\nChu vi tam giac la: %0.2f",C);
				printf("\nDien tich tam giac la: %0.2f",S);
			}else{
				printf("Day khong phai 3 canh cua 1 tam giac");
			}
		}else{
			printf("Day khong phai 3 canh cua 1 tam giac");
		}
	}else{
		printf("Day khong phai 3 canh cua 1 tam giac");
	}
}
