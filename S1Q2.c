#include <stdio.h>
#include <string.h>

void reverse(char str[], int i, int j, int len); 
void reverse(char str[], int i, int j, int len) {
    if (i >= j) {
        return;
    }
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    reverse(str, i + 1, j - 1, len);
}

int main() {
    char str[100];
    printf("Enter str: ");
    fgets(str,100, stdin);
    str[strcspn(str, "\n")] = '\0';
    int len = strlen(str);
    reverse(str, 0, len - 1, len);
    printf("Reversed string: %s\n", str);
    return 0;
}
