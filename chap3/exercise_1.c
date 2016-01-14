#include <stdio.h>

int main() {
        float degF, degC;

        degF = 27;
        degC = (degF - 32)/1.8;

        printf("%.2f degrees Fahrenheit is %.2f degrees Celsius\n", degF, degC);

        return 0;
}