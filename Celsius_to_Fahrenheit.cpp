/******************************************************************************

Name:Hyojeong Lee
Date:2024-01-16
File Name:Celsius to Fahrenheit 

Comment: This program ask the user for the celsius temperature.
        And convert it to fahrenheit temperature.
        
*******************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //set variables
    double C,F;
    
    //ask the user for celsius temperature
    cout<<"Enter the celsius value : ";
    cin>>C;
    
    //convert c to f
    F=9/5*C+32;
    
    //display it
    cout<<"Your celsius value in Fahrenheit temperature is "<<F<<endl;
    return 0;
}
