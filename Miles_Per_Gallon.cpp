/******************************************************************************

Name: Hyojeong Lee
Date: 2024-01-15
Project Name: Miles_Per_Gallon

comment: A car holds 15 gallons of gasoline and can travel 375 miles before
         refusing. This program will calculates the number of miles per gallon (MPG)
         the car gets.
         
*******************************************************************************/


#include <iostream>

using namespace std;

int main()
{
    //set the variable of hold and travel
    double hold=15 , travel=375 ,mpg ;
    
    //calculate the car's MPG
    mpg=travel/hold;
    
    //Display the car's mpg
    cout<<"The car's miles per gallon(MPG) is "<<mpg<<" miles/gallon"<<endl;

    return 0;
}
