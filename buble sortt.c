#include <stdio.h>
int main () {
	int n, i, j, temp;
	printf("Nhap so phan tu:\n");
	scanf("%d", &n);
	
	int a[n];
	printf("Nhap cac phan tu :\n");
	for (int i = 0; i < n; i++) {
		printf("a[%d]", i);
		scanf("%d", &a[i]);
	}
	//buble sort: sap xep tang dan
	for(i = 0; i < n-1; i++){
		for(j = i + 1; j < n; j++){
			if(a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("Mang sau khi sap xep tang dan :\n");
	for (i = 0; i < n; i++){
		printf("%d", a[i]);
	}
	return 0;
}
