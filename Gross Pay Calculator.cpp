/**********************************************************
A program to calculate the gross pay, deductions and net pay of an employee.
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
