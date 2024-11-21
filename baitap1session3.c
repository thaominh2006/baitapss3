#include<stdio.h>

int main(){
	char ten[50]; // Khai bao bang ky tu de luu ten
	
	// Yeu cau nguoi dung nhap ten
	printf("Vui long nhap ten cua ban:");
	snacf(" %[^\n]", ten); // Doc ca chuoi, bao gom khoang trang
	
	// In ra loi chao
	printf("Xin chao %^s\n", ten );
	
	return 0;
}
