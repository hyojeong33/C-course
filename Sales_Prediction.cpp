/******************************************************************************

Name : Hyojeong Lee
Date:2024-01-15
Project Name: Sales_Prediction

comment : The East Coast sales division of a company generates 58 percent
          of total sales. Based on that percentage, the program will predict
          how much the East Coast division will generate if the company has
          $8.6 million in sales this year.
          
*******************************************************************************/

#include <iostream>

using namespace std;

int main() {
    // percent and total sale
    double percent=58, sale=8.6;

    // Calculate East Coast sales prediction
    double gen=(percent/100)*sale;

    // Display the prediction
    cout << "East Coast division is predicted to generate: $" << gen 
         << " million"<< endl;

    return 0;
}
