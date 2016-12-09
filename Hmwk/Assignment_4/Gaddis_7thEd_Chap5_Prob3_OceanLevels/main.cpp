/* 
 * File:   Ocean Level
 * Author: Lucas Banks
 * Created on October 12, 2016, 12:51 PM
 * Purpose: Outputs chart showing the value in millimeters that the ocean levels
 *          will have risen each year for 25 years. 
 */

#include <iostream> //Input/output objects
using namespace std;

//Execute!
int main() {
    //Initialize value
    float value=0; //Value to store calculation of year*1.5
    
    //Loop that outputs chart 
    for (int year=1; year<=25; year++){
        value=year*1.5; //Calculates how much ocean levels will have risen each year
        //Outputs chart
        cout<<"In year "<<year<<", ocean levels will have risen "
                <<value<<" millimeters"<<endl;      
    }
    //End program!
    return 0;
}

