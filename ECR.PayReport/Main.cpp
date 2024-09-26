
// Pay Report
// Ethan Rabideau

#include <iostream>
#include <conio.h>

using namespace std;



struct Employee {
    int ID = 0;
    string FirstName;
    string LastName;
    float HoursWorked = 0;
    float HourlyRate = 0;
};

void PrintEmployees(Employee* arr, int size)
{
	float totalPay = 0;
	float finalPay = 0;
	std::cout << "Pay Report" << "\n" << "----------";

	for (int i = 0; i < size; i++)
	{

		totalPay = arr[i].HoursWorked * arr[i].HourlyRate;
		std::cout << "\n" << arr[i].ID << ". " << arr[i].FirstName << " " << arr[i].LastName << ": $" << totalPay;
		finalPay += totalPay;

	}
	std::cout << "\n" << "\n" << "Total Pay: $" << finalPay;
}

int main()
{

	std::cout << "Enter the number of employees: ";
	int numEmployees = 0;
	std::cin >> numEmployees;

	Employee* employees = new Employee[numEmployees];
	for (int i = 0; i < numEmployees; i++)
	{
		std::cout << "Enter the ID for Employee " << (i + 1) << ": ";
		std::cin >> employees[i].ID;

		std::cout << "Enter the First Name for Employee " << (i + 1) << ": ";
		std::cin >> employees[i].FirstName;

		std::cout << "Enter the Last Name for Employee " << (i + 1) << ": ";
		std::cin >> employees[i].LastName;

		std::cout << "Enter the Hours Worked for Employee " << (i + 1) << ": ";
		std::cin >> employees[i].HoursWorked;

		std::cout << "Enter the Hourly Rate for Employee " << (i + 1) << ": ";
		std::cin >> employees[i].HourlyRate;
	}
	
	PrintEmployees(employees, numEmployees);

	(void)_getch();
	return 0;
}
