
#include <stdio.h>

/*
 * Potrfolio submission
 * Name:Abdimalik Hussein
 * ID:202028878
 */

int main(void) {

    // define and initialise variables for the problem data
    float salary = 36250.0;
    float ni_rate = 8.0;
    float tax_rate = 15.0;

    float ni_contribution;
    float salary_after_ni;
    float taxable_salary;
    float tax_contribution;
    float take_home_salary;

    // calculate the deductions and final take-home salary
    ni_contribution = salary * (ni_rate / 100);

    salary_after_ni = salary - ni_contribution;

    taxable_salary = salary_after_ni - 12500;

    if (taxable_salary < 0) {
        taxable_salary = 0;
    }

    tax_contribution = taxable_salary * (tax_rate / 100);

    take_home_salary = salary - ni_contribution - tax_contribution;

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f\n", salary);
    printf("NI contribution £%.2f\n", ni_contribution);
    printf("Tax contribution £%.2f\n", tax_contribution);
    printf("Take home salary £%.2f\n", take_home_salary);

    return 0;
}
