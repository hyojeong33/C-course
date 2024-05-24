/******************************************************************************

Name: Hyojeong Lee
Date:2024-01-26
File Name=Days_In_A_Month

Comment: This program ask the user to enter the month and year.
        And then, display the number of days in that month.
        If user anter invlid month and year values, it ask it again.
        
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    //set the variables
    int month,year,days, cal;

    
    //ask for the month 1~12. If input is unvalid, ask again
    cout<<"Enter a month (1-12): ";
    cin>>month;
    while(month>12 || month<1)
    {
        cout<<"It is invlid.\n Enter between 1 to 12: ";
        cin>>month;
    }
    
    //ask for the year. If it is negative number, ask again
    cout<<"Enter a year: ";
    cin>>year;
    while(year<0)
    {
        cout<<"Year cannot be negative. \n Enter valid year value: ";
        cin>>year;
    }
    
    //check if it is leaf year
    if(year%100 != 0)
    {
        cal=year%4;
    }
    else
    {
        cal=year%400;
    }
    
    //display 31 days 
    if(month==1|| month==3|| month==5|| month==7|| month==8|| month==10|| month==12)
    {
        cout<<"31 days"<<endl;
    }
    //display 30 days 
    else if(month==4 || month==6|| month==9|| month==11)
    {
        cout<<"30 days"<<endl;
    }
    //display for feb
    else
    {
        //leaf year's feb has 29 days
        if(cal==0)
        {
            cout<<"29 days"<<endl;
        }
        else
        {
            cout<< "28 days"<<endl;
        }
    }
    
    return 0;
}
