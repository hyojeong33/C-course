/******************************************************************************

Name: Hyojeong Lee
Date: 2024-02-13
File Name: a nedted loop

Comment : This program displays the following 
     *
    ***
   *****
  *******
 *********
***********

using nested for loops.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    //For the six lines
    for(int i=1; i<=6 ; i++)
    {
        //it displays ' ' 
        for(int j=1; j<=(6-i); j++)
        {
            cout<<' ';
        }
        
        //It displays '*'
        for(int k=i; k>=1; k-- )
        {
            if(k==1)
            {
                cout<<"*";
            }
            else
            {
                cout<<"**";
            }
        }
        cout<<endl;
    }

    return 0;
}