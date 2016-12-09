
/* 
 * File:   Miles per Gallon
 * Author: Lucas Banks
 * Created on September 12, 2016, 9:40 PM
 * Purpose: Calculate MPG of car based off given values.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

const unsigned short int CAR = 12;
const unsigned short int MILES = 350;

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    
    float mpg;
    
    //Input or initialize values Here   
    
    //Process/Calculations Here
    
    mpg = static_cast<float>(MILES)/static_cast<float>(CAR);
       
    //Output Located Here
    
    cout << "The car gets " << mpg << " miles to the gallon" << endl;
            
    //Exit
    return 0;
}

