#include <stdio.h>

int main()
{

    double PAYRATE = 12;
    double TAXTO300 = .85;   // First $300 of gross
    double TAX300TO450 = .8; // Next $150 of gross
    double TAX450PLUS = .75; // Remaining gross
    int hours, overtimeHours = 0;
    double netPay = 0, grossPay = 0, taxes = 0;

    printf("\nEnter your weekly hours worked: ");
    scanf("%d", &hours);
    // printf("\n%d\n", regHours); Check that input is stored correctly

    if (hours > 40)
    {
        overtimeHours = hours - 40;
        hours = 40;
    }

    grossPay = (hours * PAYRATE) + (overtimeHours * (PAYRATE * 1.5));

    if (grossPay <= 300)
    {
        taxes = (grossPay * (1 - TAXTO300));
    }
    else if (grossPay > 300 && grossPay <= 450) {
        taxes = (300 * (1 - TAXTO300)) + ((grossPay - 300) * (1 - TAX300TO450));
    }
    else {
        taxes = (300 * (1 - TAXTO300)) + (150 * (1 - TAX300TO450)) + ((grossPay - 450) * (1 - TAX450PLUS));
    }

    netPay = grossPay - taxes;

    printf("\nGross pay is: $%.2f\n", grossPay);
    printf("Total taxes are: $%.2f\n", taxes);
    printf("Net Pay after taxes is: $%.2f\n", netPay);

    return 0;
}