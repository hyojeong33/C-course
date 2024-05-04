/******************************************************************************

Name: Hyojeong Lee
Date: 2024-01-18
File Name_ Ingredient adjuster

Comment: A cookie recipe is 5 cups of sugar, 1 cup of butter, and 75 cups of flour
        to make 48 cookies. This program ask the user for the number of cookie he
        make and display the amounts
*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //set the variables
    double sugar, butter, flour, amount; 
    
    //ask the amount of cookie to make
    cout<< "Enter the amount of cookie you want to make ";
    cin>>amount;
    
    //Calculate the amount of ingredients
    sugar=(5.0/48)*amount;
    butter=(1.0/48)*amount;
    flour=(75.0/48)*amount;
    
    //display
    cout<<setprecision(2)<<fixed<<endl
        <<"Amount of sugar you need :"<<sugar<<"cups"<<endl
        <<"Amount of butter you need: "<<butter<<"cups"<<endl
        <<"Amount of flour you need: "<<butter<<"cups"<<endl;
    

    return 0;
}
