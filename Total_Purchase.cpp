/******************************************************************************

Name :Hyojeong Lee
Date :2024-01-15
File Name :Total_Purchase

Commnet: This program set the price of item 1 to 5 and display each item's price,
         the subtotal of the sale, the amount of sales tax, and the total.
         sales tax is define as a names constant. 
         
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    //Set the item price variable
    double item1=15.95, item2=24.95, item3=6.95, item4=12.95, item5=3.95 ,subtotal, total;
    
    //set the sales tax as a named constant
    const int saletax=7;
    
    //Calculate the subtotal of the subtotal
    subtotal= item1+item2+item3+item4+item5;
    
    //Calculate the total
    total= subtotal + subtotal*(saletax/100);
    
    //display
    cout<<"each item's price\n" <<"price of item 1 = $15.95\n"<<"price of item 2 = &24.95\n"
        <<"price of item 3 = $6.95\n"<<"price of item 4 = $12.95\n"<<"price of item 5 = $3.95\n"
        <<endl
        <<"The subtotal of the sale is $"<<subtotal<<endl
        <<"The amount of sales tax is "<<saletax<<"%"<<endl
        <<"The total is $" <<total<<endl;

    return 0;
}
