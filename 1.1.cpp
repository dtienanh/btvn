#include <stdio.h>
int main() {
 int n,s = 0;
 printf("nhap n: ");
 scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        s += i;
    }
    printf("s = %d", s);
    return 0;
}
