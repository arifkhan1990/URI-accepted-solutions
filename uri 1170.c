#include <stdio.h>

int main(){
    int n, d,i;
    double x;

    scanf("%d", &n);
    for( i = 0; i < n; i++){
            scanf("%lf", &x);
            d = 0;
            while(x > 1){
                    x /= 2;
                    d++;
            }
            printf("%d dias\n", d);
    }

    return 0;
}

