#include <stdio.h>

struct poly {
    float coefficient;
    int exponent;
};

void addPolynomials(struct poly poly1[], int row1, struct poly poly2[], int row2, struct poly result[], int *t3) {
    int i = 0, j = 0, k = 0;

    while (i < row1 && j < row2) {
        if (poly1[i].exponent == poly2[j].exponent) {
            result[k].coefficient = poly1[i].coefficient + poly2[j].coefficient;
            result[k].exponent = poly1[i].exponent;
            i++; j++; k++;
        } else if (poly1[i].exponent > poly2[j].exponent) {
            result[k] = poly1[i];
            i++; k++;
        } else {
            result[k] = poly2[j];
            j++; k++;
        }
    }

    while (i < row1) {
        result[k] = poly1[i];
        i++; k++;
    }

    while (j < row2) {
        result[k] = poly2[j];
        j++; k++;
    }

    *t3 = k;
}

int main() {
    struct poly poly1[10], poly2[10], result[20];
    int row1, row2, t3;

    // Example input for polynomial 1
    row1 = 4;
    poly1[0].coefficient = 5; poly1[0].exponent = 3;
    poly1[1].coefficient = 4; poly1[1].exponent = 2;
    poly1[2].coefficient = 3; poly1[2].exponent = 1;
    poly1[3].coefficient = 1; poly1[3].exponent = 0;

    // Example input for polynomial 2
    row2 = 3;
    poly2[0].coefficient = 8; poly2[0].exponent = 3;
    poly2[1].coefficient = 2; poly2[1].exponent = 1;
    poly2[2].coefficient = 5; poly2[2].exponent = 0;

    addPolynomials(poly1, row1, poly2, row2, result, &t3);

    printf("Resultant polynomial: ");
    for (int i = 0; i < t3; i++) {
        printf("%.1fx^%d ", result[i].coefficient, result[i].exponent);
        if (i < t3 - 1) printf("+ ");
    }

    return 0;
}

Output

Resultant polynomial: 13.0x^3 + 4.0x^2 + 5.0x^1 + 6.0x^0
[Process completed - press Enter]
