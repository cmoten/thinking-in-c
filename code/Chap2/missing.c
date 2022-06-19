#include <stdio.h>
#include <limits.h>

int main() {
    float x = ULONG_MAX;    /* 18,446,744,073,709,551,616 */
    double y = ULONG_MAX;
    long double z = ULONG_MAX;

    printf("%f\n%f\n%Lf\n",x,y,z);

    return 0;
}

