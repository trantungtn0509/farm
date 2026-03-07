#include <stdio.h>
int main () {
	int n;
	printf("Nhap so phan tu : ");
	scanf("%d", &n);
	int a[n];
	// nhap mang
	for(int i = 0; i < n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);	
	}
	// hien thi mang
	printf("\nMang vua nhap la : \n");
	for(int i = 0; i < n; i++) {
		printf("%d",  a[i]);
	}
	int max = a[0];
	int min = a[0];
	// tim max va min
	for(int i =  1; i < n; i++) {
		if(a[i] > max)
			max = a[i];
		if(a[i] < min)	
		    min = a[i];
	}
	printf("\nPhan tu lon nhat la : %d\n", max);
	printf("\nPhan tu nho nhat la : %d\n", min);
	return 0;
}
