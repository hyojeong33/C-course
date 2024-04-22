/******************************************************************************

Name: Hyojeong Lee
Date: 2024-01-15
File Name: Annual_Pay

Comment :Supposes an employee gets paid every two weeks and earns 
         $2200 each pay period. In a year, the employee gets paid 26 times.
         This program display the total annual payment on the screen.
         
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    //Set the variables
    double payAmount=2200.0 , annualPay;
    int payPeriods = 26;
    
    //Calculate annual payment
    annualPay=payAmount*payPeriods;
    
    //Display the total annual payment
    cout<< "The total annual payment is $"<<annualPay<<endl;

    return 0;
}
