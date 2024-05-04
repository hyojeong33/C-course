/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    // set the variables 
    double loan, monthInterest, numPayment, monthPay,paidBack,interestPaid;

    //ask for the loan, monthly interest rate, and number of payments
    cout << "Enter the loan amount: $";
    cin >> loan;

    cout << "Enter the monthly interest rate: ";
    cin >> monthInterest;
    monthInterest=monthInterest/100;
    
    cout << "Enter the number of payments: ";
    cin >> numPayment;

    // Calculate monthly payment
    double num = pow((1 + monthInterest), numPayment);
    monthPay = loan*((monthInterest * num) / (num - 1));

    // Calculate amount paid back and interest paid
    paidBack = monthPay * numPayment;
    interestPaid = paidBack - loan;

    // Display the loan report
    cout << fixed << setprecision(2)
         << left << setw(20) << "Loan Amount:" << "$ " << right << setw(10) << loan << endl
         << left << setw(20) << "Monthly Interest Rate:" << right << setw(9) << monthInterest << "%" << endl
         << left << setw(20) << "Number of Payments:" << right << setw(10) << numPayment << endl
         << left << setw(20) << "Monthly Payment:" << "$ " << right << setw(10) << monthPay << endl
         << left << setw(20) << "Amount Paid Back:" << "$ " << right << setw(10) << paidBack << endl
         << left << setw(20) << "Interest Paid:" << "$ " << right << setw(10) << interestPaid << endl;
    return 0;
}