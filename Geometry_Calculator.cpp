/******************************************************************************

Name: Hyojeong Lee
Date: 2024-01-27
File Name: Geometry Calculator

Comment: This program is geometry calculator. Ask for the user if they want to
        calculate the area of circle, rectangle, triangle, or quit.
        And then, ask for the variable needed for each figure. If enter negative 
        number, it ask again. And then, calculate and display it.
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    //set the variables 
    int num;
    const double pi=3.14159;
    double area;
    
    //ask for the user in menu
    cout<<"Geometry Calculator\n"<<endl
        <<"1. Calculate the Area of a Circle"<<endl
        <<"2. Calculate the Area of a Rectangle"<<endl
        <<"3. Calculate the Area of a Triangle"<<endl
        <<"4. Quit\n"<<endl
        <<"Enter your choice (1~4)";
    cin>>num;
    
    //according to the user input, case will work 
    switch(num)
    {
        //calculate circle's area and display it 
        case 1 :
            double radius;
            cout<<"Enter the radius of the circle : ";
            cin>>radius;
            //not accept negative number
            while(radius<0)
            {
                cout<<"Negative number is invalid.\nEnter positive number: ";
                cin>>radius;
            }
            area=radius*radius*pi;
            cout<<"The area of circle is "<<area;
            break;
         
         //calculate rectangle's area and display   
        case 2:
            double length,width;
            cout<<"Enter rectangle's length : ";
            cin>>length;
            while(length<0)
            {
                cout<<"Negative number is invalid.\nEnter positive number: ";
                cin>>length;
            }
            cout<<"Enter rectangle's width : ";
            cin>>width;
            while(width<0)
            {
                cout<<"Negative number is invalid.\nEnter positive number: ";
                cin>>width;
            }
            area=length*width;
            cout<<"Rectangle's area is "<<area;
            break;
        
        //Calculate the triangle's area and display    
        case 3:
            double base, height;
            cout<<"Enter triangle's base : ";
            cin>>base;
            while(base<0)
            {
                cout<<"Negative number is invalid.\nEnter positive number: ";
                cin>>base;
            }
            cout<<"Enter triangle's height: ";
            cin>>height;
            while(height<0)
            {
                cout<<"Negative number is invalid.\nEnter positive number: ";
                cin>>height;
            }
            area=base*height*0.5;
            cout<<"Triangle's area is "<<area<<endl;
            break;
            
        //end the program    
        case 4:
            cout<<"End the program."<<endl;
            break;
        //if user input is out of 1~4, break    
        default:
            cout<<"Error; out of not in (1~4)";
            break;
    
    }
    return 0;
}