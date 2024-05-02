/******************************************************************************

Name: Hyojeong Lee
Date: 2024-01-19
File Name: Angle_Calculator

Comment: This program ask an angle value in radian.
         Then, calculate sine, cosine, and tangent value.
         When display the trinomial values, the program check if the tangent of
         the angle is (pi/2) which is undefined. 
         
*******************************************************************************/
#include <iostream>
#include <cmath>    //for trinomial functions
#include <iomanip> // for setprecision

using namespace std;

int main() {
    // set variables
    double angle, sineValue, cosValue, tanValue;
    
    //Ask for angle in radian
    cout << "Enter an angle in radians: ";
    cin >> angle;

    // Calculate sine, cosine, and tangent
    sineValue = sin(angle);
    cosValue = cos(angle);
    tanValue = tan(angle);

    // Display the result sine and cosine in fixed precision 4. 
    cout << fixed << setprecision(4)
         << "Sine of the angle: " << sineValue << endl
         << "Cosine of the angle: " << cosValue << endl;
         
    //get pi for tangent 
    double pi = M_PI;
    
    // Check for tangent value, as tan(pi/2) is undefined
    if (angle != (pi / 2)) {
        cout << "Tangent of the angle: " << tanValue << endl;
    } else {
        cout << "Tangent of the angle is undefined." << endl;
    }

    return 0;
}