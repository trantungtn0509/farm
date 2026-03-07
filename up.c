#include <stdio.h>
int main () {
	int n;
	printf("Nhap so phan tu : ");
	scanf("%d", &n);
	int i, j, temp;
	int a[n];
	// nhap mang
	for(i = 0; i < n; i++) {
		printf("a[%d]", i);
		scanf("%d", &a[i]);
	}
	// hien thi mang
	printf("\nMang vua nhap la :\n");
	for(i = 0; i < n; i++){
		printf("%d", a[i]);
	}
	// sap xep tang dan
	for(i = 0; i < n-1; i++){
		for(j = i+1; j < n; j++){
			if(a[i] > a[j]){
			temp = a[i];
		    a[i] = a[j];
		    a[j] = temp;
			}
		}
	}
	printf("\nMang tang dan la : \n");
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	// sap xep giam dan
	for(i = 0; i < n-1; i++){
		for(j = i+1; j < n; j ++){
			if(a[i] < a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\nMang giam dan la : \n");
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	return 0;
}
