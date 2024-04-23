/******************************************************************************

Name :Hyojeong Lee
Date :2024-01-15
File Name: Energy_Drink_Consumption

Comment : This program calculates and displays information based on a survey
          conducted by a soft drink company. The survey collected data from
          16500 customers and found that 15% purchase one or more energy drinks
          per week.Additionally, 58% of the energy drink customers prefer
          citrus-flavored energy drinks.
          
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    //set the variable and value
    double customer=16500 , purchase_percent=15, citrus_percent=58 ,purbuy,citbuy ;
    
    //Calculate the number of customer who purchase one or more energy drinks per week
    purbuy=customer*(purchase_percent/100);
    
    //Calculate the number of customer wo prefer citrus-flavored energy drinks
    citbuy=purbuy*(citrus_percent/100);
    
    //display
    cout<<"The approximate number of customers in the survey who purchase one or more energy drinks per week is "
        <<purbuy <<endl << "The approximate number of customers in the survey who prefer citrus-flavored energy drinks is "
        << citbuy << endl;
        
    return 0;
}