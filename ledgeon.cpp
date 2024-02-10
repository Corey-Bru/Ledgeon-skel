#include <iostream>
/*
* int main function takes inputs year1,patientsFirstYear, year2, and patientsSecondYear. 
* Where patientsFirstYear/patientsSecondYear are associated with year1 and year2 in their respective order.
* The inputs help calculate percent change and chargesYear1/chargesYear2 by using the constant charity_charges_ratio that was given.
* int main also outputs year1/year2, chargesYear1/chargesYear2, and percentChange.
*/
int main() {
	int year1 = 0;
	std::cout << "Enter the first year: ";
	std::cin >> year1;
	int patientsFirstYear = 0;
	std::cout << "Enter the number of patients we saw that year: ";
	std::cin >> patientsFirstYear;
	
	int year2 = 0;
	std::cout << "Enter the second year: ";
	std::cin >> year2;
	int patientsSecondYear = 0;
	std::cout << "Enter the number of patients we saw that year: ";
	std::cin >> patientsSecondYear;

	double percentChange = static_cast<double>(((patientsSecondYear - patientsFirstYear))) / (patientsFirstYear) * 100;
	double const charity_charges_ratio = 1008.97;

	double chargesYear1 = patientsFirstYear * charity_charges_ratio;
	double chargesYear2 = patientsSecondYear * charity_charges_ratio;

	std::cout << "In year " << year1 << ", our hospital issued " << chargesYear1 << " dollars of charity charges.\n";
	std::cout << "In year " << year2 << ", our hospital issued " << chargesYear2 << " dollars of charity charges.\n";

	std::cout << "Between " << year1 << " and " << year2 << ", there was a " << percentChange << "% increase in patients seen at our hospital.\n";







}