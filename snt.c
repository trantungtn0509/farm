#include <stdio.h>
int kiemtra(int n){
	if(n < 2){
		return 0;
	}
	for(int i = 2; i < n; i++) {
		if (n % i == 0){
			return 0; //  chia ma du 0 -> khong phai so nguyen to
		}
	}
	return 1;
}
int main () {
	int n;
	printf("Nhap n : ");
	scanf("%d", &n);
	if(kiemtra(n) == 1){
		printf("La so nguyen to !", n);
	} else {
		printf("Khong phai la so nguyen to !", n);
	}
	return 0;
}
