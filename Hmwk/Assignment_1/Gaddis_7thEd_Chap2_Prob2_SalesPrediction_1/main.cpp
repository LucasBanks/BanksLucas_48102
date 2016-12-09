/* 
 * File:   Sales Predictions
 * Author: Lucas Banks
 * Created on September 12, 2016, 10:24 AM
 * Purpose: Predict money made off of sales.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

float PERCENT = 0.62;
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    
    unsigned int totSale;
    float prediction;
    
     //Input or initialize values Here
    
    totSale = 4.6e6;
    
    //Process/Calculations Here
    
    prediction = (totSale*PERCENT);
    
    
    //Output Located Here
    cout<<"East Coast division will" 
        <<" generate "<<"$"<<static_cast<unsigned int>(prediction)<<endl;

    //Exit
    return 0;
}