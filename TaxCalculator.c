#include <stdio.h>

int main() {
    double income, tax = 0;

    printf("Enter your annual income: ");
    scanf("%lf", &income);

    if (income > 1500000) {
        tax = (income - 1500000) * 0.30 + 300000 * 0.20 + 200000 * 0.15 + 300000 * 0.10 + 400000 * 0.05;
    }
    else if (income > 1200000) {
        tax = (income - 1200000) * 0.20 + 200000 * 0.15 + 300000 * 0.10 + 400000 * 0.05;
    }
    else if (income > 1000000) {
        tax = (income - 1000000) * 0.15 + 300000 * 0.10 + 400000 * 0.05;
    }
    else if (income > 700000) {
        tax = (income - 700000) * 0.10 + 400000 * 0.05;
    }
    else if (income > 300000) {
        tax = (income - 300000) * 0.05;
    }
    else {
        tax = 0;
    }

    printf("Your tax is: ₹%.2lf\n", tax);
    return 0;
}
