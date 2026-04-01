#include <stdio.h>
int main () {
	int n, a[100];
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int max = a[0];
	int max2 = -1000000000;
	
	for(int i = 1; i < n; i++) {
		if(a[i] > max) {
			max2 = max;
			max = a[i];
		}
		else if(a[i] > max2 && a[i] < max) {
			max2 = a[i];
		} 
	}
	printf("%d", max2);
	return 0;
}
