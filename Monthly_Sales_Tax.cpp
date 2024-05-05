/******************************************************************************

Name: Hyojeong Lee
Date:2024-01-18
File Name: Monthly_Sales_Tax

Comment : This program ask for the month, year, and collected ( sales plus tax)
         Then, calculate the sales, county sales tax which is 2 percent, state
         sales tax which is 4 percent. 
         
*******************************************************************************/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    //set the variables
    string month, year;
    double collect, sale, stateTax, countyTax;
    
    //ask for the month, year, and collected cash
    cout<<"Enter the month: ";
    cin>>month;
    
    cout<<"Enter the year: ";
    cin>> year;
    
    cout<<"Enter the total amount collected at the cash register: $";
    cin>>collect;
    
    //calculate sales, state tax, countytax
    sale=collect/1.06;
    stateTax=sale*0.04;
    countyTax=sale*0.02;
    
    //display
    cout<<month<<", "<<year<<endl
        <<"- - - - - - - - - - - - - - - - - -"<<endl
        <<setprecision(2)<<fixed
        <<left<<setw(20)<<"Total Collected:"<<"$ "<<collect<<endl
        <<setw(20)<<"sales:"<<"$ "<<sale<<endl
        <<setw(20)<<"County Sales Tax:"<<"$ "<<countyTax<<endl
        <<setw(20)<<"State Sales Tax:"<<"$ "<<stateTax<<endl
        <<setw(20)<<"Total Sales Tax: "<<"$ "<<countyTax+stateTax <<endl;
        
    return 0;
}

