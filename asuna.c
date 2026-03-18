#include <stdio.h>

int main() {
    char s[101]; 
    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);
    printf("Chuoi vua nhap: %s", s);
    return 0;
}
