#include <stdio.h>
int main () {
	int n, i, max;
	printf("Nhap so phan tu n:\n");
	scanf("%d", &n);
	
	int a[i];
	for(i = 0; i < n; i++){
		printf("a[%d]", i);
		scanf("%d", &a[i]);
	}
	printf("Mang vua nhap la :\n");
	for(i = 0; i < n; i++){
		printf("%d", a[i]);
	}
	max = a[0];
	for(i = 1; i < n; i++){
		if(a[i] > max){
			max = a[i];
		}
	}
	printf("\nPhan tu lon nhat trong mang : %d\n", max);
	return 0;
}
