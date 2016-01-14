#include <stdio.h>
#include <math.h>

int main() {
        float a = 1.2, b = 2.3, c = -3.4, x1, x2;

        float delta = b*b - 4*a*c;
        x1 = (-b + sqrt(delta) ) / (2*a);
        x2 = (-b - sqrt(delta) ) / (2*a);

        printf("x1 = %.5f, x2 = %.5f\n", x1, x2);

        return 0;
}