#include <stdio.h>

int main() {
	double a, b, c;

    printf("Enter 3 digits (example: 1 2 3): ");
	scanf("%lf %lf %lf", &a, &b, &c);

        double min, mid, max;

    if (a <= b && a <= c) {
        min = a;
        if (b <= c) {
            mid = b;
            max = c;
        }
        else {
            mid = c;
            max = b;
            }
    }
    else if (b <= a && b <= c) {
        min = b;
        if (a <= c) {
            mid = a;
            max = c;
        }
        else {
            mid = c;
            max = a;
            }
    }
    else {
        min = c;
        if (a <= b) {
            mid = a;
            max = b;
        }
        else {
            mid = b;
            max = a;
            }
    }

    printf("Ascending : %g %g %g\n", min, mid, max);
    printf("Descending: %g %g %g", max, mid, min);

	return 0;
}
