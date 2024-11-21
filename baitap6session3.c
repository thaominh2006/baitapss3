#include<stdio.h>

int main(){
	float canhday, chieucao, dientich;
	printf("nhap do dai canh day cua tam giac:");
	scanf("%f",&canhday);
	printf("nhap do dai chieu cao: ");
	scanf("%f",&chieucao);
	dientich = (canhday * chieucao) / 2;
	printf("dien tich cua tam giac voi canh day %.2f va chieu cao %.2f la: %.2f\n", canhday, chieucao, dientich);
	
	return 0 ;
}
