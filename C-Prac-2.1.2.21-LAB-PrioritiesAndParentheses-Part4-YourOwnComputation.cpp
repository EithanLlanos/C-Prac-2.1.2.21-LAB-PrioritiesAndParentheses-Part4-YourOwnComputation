//Scenario
//Complete the program in the editor.Compute the accrued amount of money with a starting value of 100 and an annual interest rate of 1.5 % .Compute and print the results for the first three years.
//Your version of the program must print the same result as the expected output for each year.Compute each annual value on the basis of the previous year's value.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Code
//
//#include <stdio.h>
//
//int main()
//{
//	float startValue = 100;
//	float interestRate = 0.015;
//	float firstYearValue;
//	float secondYearValue;
//	float thirdYearValue;
//	/* Your code */
//	printf("After first year: %f\n", firstYearValue);
//	printf("After second year: %f\n", secondYearValue);
//	printf("After third year: %f\n", thirdYearValue);
//	return 0;
//}
//Expected output
//After first year : 101.500000
//After second year : 103.022499
//After third year : 104.544998
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
int main() {
	float StarValue = 100;
	float interestRate = 0.015;
	//float firstYearValue = StarValue + StarValue * interestRate;
	float firstYearValue = StarValue * (1 + interestRate);
	//float secondYearValue = StarValue + StarValue * interestRate + StarValue * interestRate + StarValue * interestRate * interestRate;
	float secondYearValue = StarValue * (1 + 2 * interestRate + interestRate * interestRate);
	//float thirdYearValue = StarValue + StarValue * interestRate + StarValue * interestRate * interestRate +StarValue*interestRate+StarValue*interestRate+ StarValue * interestRate * interestRate;
	float thirdYearValue = StarValue * (1 + 3 * interestRate + 2 * interestRate * interestRate);
	printf("After first year: %f\n", firstYearValue);
	printf("After second year: %f\n", secondYearValue);
	printf("After third yeard: %f\n", thirdYearValue);
	return 0;
}