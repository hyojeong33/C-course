/******************************************************************************

Name: Hyojeong Lee
Date: 2024-01-27
File Name: Bank Charges

Comment: This program ask for the beginning balance and the number of fhecks written.
        If balance is under $400, there is extra charge $15 and if balance is negative,
        display the urgent message. If the checks number is negative, ask it again.
        Calculate the checks service fees according to the ratio below, and display.
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    //set the variables
    double balance,checks,charge,total=10;
    
    //ask for the beginning balance
    cout<<"Enter your beginning balance: $";
    cin>>balance;
    //if balance is negative number, display urgent message 
    //also there is extra charge $15 
    if(balance<0)
    {
        cout<<"Urgent! account is overdrawn."<<endl;
        total=total+15;
    }
    //if balance is lower then $400, there is extra charge $15
    else if(balance<400)
    {
        cout<<"Account balance is under $400. \nThere is extra $15."<<endl;
        total=total+15;
    }
    
    //ask for the number of checks written
    cout<<"Enter the number of checks written: ";
    cin>>checks;
    
    //if input is negative, ask it again
    while(checks<0)
    {
        cout<<"It is invalid number\n Enter the number of checks written: ";
        cin>>checks;
    }
    
    //set the charge price per check
    if(checks<20)
    {
        charge=0.1;
    }
    else if(checks<40)
    {
        charge=.08;
    }
    else if(checks<60)
    {
        charge=0.06;
    }
    else
    {
        charge=0.04;
    }
    
    //calculate total service fee
    total=total+charge*checks;
    
    //display it
    cout<<"Bank's service fees for the month is $ "<<total<<endl;
    return 0;
}