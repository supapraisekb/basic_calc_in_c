#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* This program is used to calculate the sum of two numbers
* Receives user input and then gives an output after calculation
*/
int main()
{
double num1;
double num2;
double result;
char oper;

printf("Please enter the first number: ");
scanf("%lf", &num1);
printf("Enter an operator: ");
scanf(" %c", &oper);
printf("Enter the second number: ");
scanf("%lf", &num2);

if (oper == '+') {
result = num1 + num2;
printf("Result: %.2lf\n", result);
} else if (oper == '-') {
result = num1 - num2;
printf("Result: %.2lf\n", result);
} else if (oper == '*') {
result = num1 * num2;
printf("Result: %.2lf\n", result);
} else if (oper == '/') {
if (num2 != 0) {
result = num1 / num2;
printf("Result: %.2lf\n", result);
} else {
printf("Error: Division by zero is not allowed.\n");
}
} else if (oper == '%') {
if (num2 != 0) {
result = fmod(num1, num2);
printf("Result: %.2lf\n", result);
} else {
printf("Error: Modulus by zero is not allowed.\n");
}
} else {
printf("Invalid operator, use only +, -, /, *, or %%.\n");
}
return 0;
}

