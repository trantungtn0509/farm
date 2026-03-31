#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

typedef struct {
	char ten[50];
	char lop[20];
	char gioiTinh[10];
	float diemTB;
}SinhVien;
 
 // nhap danh sach
 void nhap(SinhVien sv[], int n) {
 	for(int i = 0; i < n; i++){
 		printf("\nSinh vien thu %d:\n ", i + 1);
 		printf("Ho ten : ");
 		fgets(sv[i].ten, sizeof(sv[i].ten), stdin);
 		sv[i].ten[strcspn(sv[i].ten, "\n")] = 0;
 		
 		printf("Lop : ");
 		scanf("%s", sv[i].lop);
 		
 		printf("Gioi Tinh : ");
 		scanf("%s", sv[i].gioiTinh);
 		
 		printf("Diem TB : ");
 		scanf("%f", &sv[i].diemTB);
 		
 		getchar(); 
	 }
 }
 
 // xuat
 void xuat(SinhVien sv[], int n) {
 	printf("\nDanh sach sinh vien :\n ");
 	for(int i = 0; i < n; i++) {
 		printf("%s | %s | %s | %.2f\n", sv[i].ten, sv[i].lop, sv[i].gioiTinh, sv[i].diemTB);
	 }
 }
 
 // loc diem 8
 void diem8(SinhVien sv[], int n) {
 	printf("\nSinh vien dat diem 8:\n ");
 	for(int i = 0; i < n; i++) {
 		if(sv[i].diemTB >= 8) { 
 			printf("%s - %s\n", sv[i].ten, sv[i].lop);
		 }
	 }
 }
 
 // tim max
 void maxDiem(SinhVien sv[], int n) {
 	printf("\nSinh vien diem cao nhat:\n ");
 	int max = 0;
 	for (int i = 1; i< n; i++) {
 		if(sv[i].diemTB > sv[max].diemTB) {
 			max = i;
		 }
	 }
	 printf("%s | %s | %s | %.2f\n", sv[max].ten, sv[max].lop, sv[max].gioiTinh, sv[max].diemTB);
 }
 
 // sap xep
 void sapXep(SinhVien sv[], int n){
 	for(int i = 0; i < n - 1; i++) {
 		for(int j = i + 1; j < n; j++) {
 			if(sv[i].diemTB < sv[j].diemTB) {
 				SinhVien temp = sv[i];
 				sv[i] = sv[j];
 				sv[j] = temp;
			 }
		 }
	 }
 }
 int main () {
 	int n;
 	printf("Nhap so sinh vien : ");
 	scanf("%d", &n);
 	getchar();
 	
 	SinhVien sv[n];
 	
 	nhap(sv ,n);
 	xuat(sv, n);
 	
 	diem8(sv, n);
 	maxDiem(sv, n);
 	sapXep(sv, n);
 	
 	return 0;
 }
