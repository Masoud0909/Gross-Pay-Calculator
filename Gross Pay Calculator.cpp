/**********************************************************
A program to calculate the gross pay, deductions and net pay of an employee.
Write a program that computes the wages for an employee. The program is interactive, and asks
the user to enter the employee name, followed by two values, one for the number of hours the
employee worked, and one for the employee's hourly rate. The program then computes the
employee's gross wages. Salary deductions consist of 2.4% of the gross salary for employment
insurance, 1% as union dues, and 17% for taxes. All three percentages should be declared as
constants
**********************************************************/

#include <iostream>
#include <cmath>


using namespace std;

int main() {

    string EmployeeName;
    int Numb_Hours;
    double Hourly_Rate;

    double const taxes = 0.17;
    double const Union_Dues = 0.01;
    double const Insurance = 0.024;

    cout << "Enter the Employee Name please: ";
    cin >> EmployeeName;

    cout << "Enter the Number of hours the employee worked: ";
    cin >> Numb_Hours;

    cout << "Enter the hourly rate you want to pay the employee: ";
    cin >> Hourly_Rate;

    cout << "Employee Name:         " << EmployeeName << endl;
    cout << "Hours Worked:          " << Numb_Hours << endl;
    cout << "Hourly Rate:           " << Hourly_Rate << endl;

    double GrossPay = Hourly_Rate * Numb_Hours;
    cout << "Gross Pay:                     " << GrossPay << endl;

    double Deductions = (GrossPay * Union_Dues);
    double Deductions2 = (GrossPay * Insurance);
    double Deduction3 = (GrossPay * taxes);

    cout << "Deductions: " << endl;
    cout << "Union Dues             " << Deductions << endl;
    cout << "Employment Insurance   " << Deductions2 << endl;
    cout << "Taxes                  " << Deduction3 << endl;

    double totalDeducts = Deductions + Deductions2 + Deduction3;
    cout << "Total Deductions       " << totalDeducts << endl;

    double NetPay = GrossPay - totalDeducts;
    cout << "Net Pay:                       " << NetPay << endl;

}
