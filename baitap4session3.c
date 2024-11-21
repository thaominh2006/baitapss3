#include<stdio.h>

int main(){
	float diemtoan,diemvan,diemanh,sum,ave;
	printf("nhap diem mon toan:");
	scanf("%f",&diemtoan);
	printf("nhap diem mon van:");
	scanf("%f",&diemvan);
	printf("nhap diem mon anh:");
	scanf("%f",&diemanh);
	sum = diemtoan + diemvan + diemanh;
	ave = sum/3;
	printf("tong diem 3 mon la: %.2f\n",sum);
	printf("diem tb 3 mon la: %.2f\n",ave);
	
	return 0 ;
}
