#include <stdio.h>

int Fbc(int n) {
    int f0 = 0;
    int f1 = 1;
    int fn = 1;
    int i;
    
    if (n < 0) {
        return -1;
    }else if (n == 0 || n == 1){
        return n;
    }else {
        for (i = 2; i < n; i++){
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;

}
int main() {
 	int i;
    printf("day so Fbc nho hon 100 la : \n");
    for (i = 0; i < 12; i++) {
        printf("%d ", Fbc(i));
    }
}

