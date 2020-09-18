#include <stdio.h>
int main() {
   int n;
   printf("nhap  vao n: ");
   scanf("%d", &n);
   int i;
   float s;
    for (int i = 1; i <= n ; ++i) {
        s += (float) 1 / i;
    }
    printf("s = %f", s);
    return 0;
}

