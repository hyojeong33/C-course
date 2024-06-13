/******************************************************************************

Name: Hyojeong Lee
Date: 2024-01-25
File Name: Software_Sales

Comment:A software company sells a package that retails for $99.
        quantity discount is 10-19:20% , 20-49:30% , 50-99:40%, 100 or more:50%.
        This program asks for the number of units sold and computes and display
        the total cost of the purchase. If the number of units sold is less than
        0, it asks again to enter valid number.
*******************************************************************************/
#include <iostream>


using namespace std;

int main()
{
    //set variables
    double retail=99,sold=-1, discount, total;
    
    //ask for the number of nuits sold
    cout<<"Enter the number of units sold (greater than 0) : ";
    cin>>sold;
    //Make sure the number of units is greater than 0
    while(sold<0 || sold==0)
    {
        cout<<"That is invalid number of quantity\n"
            <<"Enter the number of units sold (greater than 0) : ";
        cin>>sold;
    }
    
    //calculate the total cost according to the discount ratio
    if(sold<10)
    {
        discount=0;
        total=retail*sold*(100-discount)/100.0;
    }
    else if(sold<20)
    {
        discount=20;
        total=retail*sold*(100-discount)/100.0;
    }
    else if(sold<50)
    {
        discount=30;
        total=retail*sold*(100-discount)/100.0;
    }
    else if(sold<100)
    {
        discount=40;
        total=retail*sold*(100-discount)/100.0;
    }
    else
    {
       discount=50;
        total=retail*sold*(100-discount)/100.0;
    }
    
    //display discount and total cost amount
    cout<<"Discount is "<<discount<<"%.\n"
        <<"Total cost is $ "<<total<<endl;
        
    return 0;
}