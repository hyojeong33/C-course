/******************************************************************************

Name: Hyojeong Lee
Date: 2024-01-27
File Name: Mobile Service Provider

Comment: This program  which package the customer has purchased and how many
        minutes were used. Then calculate the customer’s monthly bill and 
        display the total amount due.
        In part 2, displays how much package A customers would save if they 
        purchased package B or C, and how much money Package B customers would 
        save if they purchases Package C. If there would be no savings, 
        no message should be printed.
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //set the variables 
    char package;
    int min;
    double total, compareB, compareC,saveB, saveC;
    
    //ask the package 
    cout<<"Enter which package has purchased (A,B, or C):";
    cin>>package;
    
    //ask for the minutes used 
    cout<<"How many minutes were used: ";
    cin>>min;
    
    //calculate the total cost by package.
    switch(package)
    {
        //Package A: For $39.99 per month 450 minutes are provided.
        //Additional minutes are $0.45 per minute.
        case 'a':
        case 'A':
            total=39.99;
            if(min>450)
            {
                total=total+(min-450)*0.45;
            }
            break;
         
        //Package B: For $59.99 per month 900 minutes are provided.
        //Additional minutes are $0.40 per minute.   
        case'b':
        case'B':
            total=59.99;
            if(min>900)
            {
                total=total+ (min-900)*0.40;
            }
            break;
        //Package C: For $69.99 per month unlimited minutes provided.    
        case'c':
        case'C':
            total=69.99;
        //only accept package a,b, or c    
        default:
            cout<<"Invalid package."<<endl;
            break;
    }
    
    //display 
    cout<<"Total amount is $ "<<total<<endl;
    
    //part 2
    
    //calculate the saving money when user is using package a
    if(package=='a' || package=='A')
    {
        compareB=59.99;
        if(min>900)
        {
            compareB=compareB+(min-900)*0.4;
        }
        compareC=69.99;
        
        if(compareB-total < 0)
        {
            saveB=total-compareB;
            cout<<"If you change to package B, you can save $ "<<saveB<<endl;;
        }
        if(compareC-total<0)
        {
            saveC=total-compareC;
            cout<<"If you change to package C, you can save $ "<< saveC<<endl;
        }
    }
    
    //calculate the saving money when user is using package b
    else if(package=='b'||package=='B')
    {
        compareC=69.99;
        if(compareC-total<0)
        {
            saveC=total-compareC;
            cout<<"If you change to package C, you can save $ "<< saveC<<endl;
        }
    }
    return 0;
}