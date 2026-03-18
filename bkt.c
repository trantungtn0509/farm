int main() {
    char s[101], ch;
    int i, dem = 0;
    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);
    printf("Nhap ky tu ch: ");
    scanf("%c", &ch);
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == ',') {
            if (i > 0 && s[i - 1] == ch) {
                dem++;
            }
        }
    }
    if (i > 0 && s[i - 1] == ch) {
        dem++;
    }
    printf("So tu ket thuc bang '%c' la: %d\n", ch, dem);
    
    return 0;
