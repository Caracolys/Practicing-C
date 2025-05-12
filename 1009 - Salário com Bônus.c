#include <stdio.h>

int main() {
    char name[100];
    double fixedSalary, totalSales, finalSalary;

    scanf("%[^\n]%lf%lf", name, &fixedSalary, &totalSales);

    finalSalary = fixedSalary + totalSales * 0.15;

    printf("TOTAL = R$ %.2lf\n", finalSalary);

    return 0;

}
