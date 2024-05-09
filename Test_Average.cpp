/******************************************************************************

Name: Hyojeong Lee
Date:
File Name: Test_Average

Comment : ask the user for the test score 1 to 5
        And calculate the average and display it
*******************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //set the variables
    double test1, test2, test3, test4, test5, total, avg;
    
    //ask the test scores
    cout<<"Enter the test 1's score :";
    cin>>test1;
    cout<<"Enter the test 2's score :";
    cin>>test2;    
    cout<<"Enter the test 3's score :";
    cin>>test3;    
    cout<<"Enter the test 4's score :";
    cin>>test4;
    cout<<"Enter the test 5's score :";
    cin>>test5;  
    cout<<endl;
    
    //get a total and calculate average test score
    total=test1+test2+test3+test4+test5;
    avg=total/5;
    
    //display it
    cout<<setprecision(1)<<fixed<<"Average test score is "<<avg<<endl;
    
    return 0;
}

