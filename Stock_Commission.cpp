/******************************************************************************

Name: Hyojeong Lee
Date: 2024-01-15
File Name: Stock_Commission

Comment: This program display the amount poaid for the atick alone and the amount
         of the commission. Then, calculate the total amount paid for stock plus 
         the commission.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    //Set the variable value according to the question
    double share=750, price=35.00 , commission=2 , total, paid ;

    //Calculate the total amount
    total = share*price;
    
    //Calculate the total amount paid
    paid= total + total*(commission/100);
    
    //Display
    cout << "The amount paid for the sotck alone: " <<total<<" $"<<endl
         << "The amount of the commission: "<<commission<<" percent"<<endl
         << "The total amount paid(for the stock plus the commission): "<<paid<<" $"
         <<endl ;
         
    return 0;
}
