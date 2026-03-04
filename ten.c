#include <stdio.h>
int main () {
	int a[10];
	int max, min;
	printf("Nhap 10 so :\n");
	for(int i = 0; i < 10; i++) {
		printf("a[%d]", i);
		scanf("%d", &a[i]);
	}
	max = min = a[0];
	for(int i = 1; i < 10; i++) {
		if(a[i] > max){
			max = a[i];
		}
		if(a[i] < min){
			min = a[i];
		}
	}
	printf("Phan tu lon nhat :%d\n", max);
	printf("Phan tu nho nhat :%d\n", min);
	return 0;
}
