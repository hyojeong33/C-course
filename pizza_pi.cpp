/******************************************************************************

Namee: Hyojeong Lee
Date: 2024-01-18
File Name: Pizza_Pi

comment: This program ask the user for the diameter of the pizza in inches.
        And, calculate the numbers of slices. They divide the area by 14.125 and
        round it. 

*******************************************************************************/
#include <iostream>
#include <cmath> //for round method

using namespace std;

int main()
{
    //set variables according to the information
    double diameter, slices, area, divide=14.125;
    
    //set pi value in constant 
    const double pi=3.14159;
    
    //ask the user for the diameter of the pizza
    cout<<"Enter the diameter of the pizza in inches : ";
    cin>>diameter;
    
    
    //calculate the area
    area=pow((diameter/2.0),2)*pi;
    
    //calculate the slices
    slices=round(area/divide);
    
    //display 
    cout<<"The pizza with a diameter of "<<diameter<<" inches "
        <<"has "<<slices<<" slices. "<<endl;
        
    return 0;
}
