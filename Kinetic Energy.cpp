/******************************************************************************

Name: Hyojeong Lee
Date: 2024-02-20
File name: Kinetic Energy

Comment: In physics, an object that is in motion is said to have kinetic energy. 
The following formula can be used to determine a moving object’s kinetic energy:
KE=1/2*m*V^2
The variable in the formula are as follows: KE is the kinetic energy, m is the 
object’s mass in kilograms, and v is the object’s velocity, in meters per second. 
Write a function named kineticEnergy that accepts an object’s mass (in kilograms) 
and velocity (in meters per second) as arguments. The function should return 
the amount of kinetic energy that the object has. Demonstrate the function by
calling it in a program that asks the user to enter values for mass and velocity.
*******************************************************************************/
#include <iostream>
#include <cmath> //for V^2

using namespace std;

//prototype of function 
double calKE(double, double);

int main()
{
    //set the variables 
    double KE, mass, velocity;
    
    //ask for the mass
    cout<<"Enter the mass of object(Kg): ";
    cin>>mass;
    
    //ask for the velocity
    cout<<"Enter the velocity of object (meters per second): ";
    cin>>velocity;
    
    //cal function that calculate kinetic energy
    KE=calKE(mass, velocity);
    
    //display
    cout<<"Kinetic energy of the object is "<<KE;
    return 0;
    
}

//Function for calculating KE
double calKE(double mass, double vel)
{
    double a;
    a=0.5*mass*pow(vel,2);
    return a;
}
