/* 
 * File:   Average of Values
 * Author: Lucas Banks
 * Created on September 12, 2016, 1:05 PM
 * Calculate the average of given values.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

const int NUM1 = 28;
const int NUM2 = 32;
const int NUM3 = 37;
const int NUM4 = 24;
const int NUM5 = 33;

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short int sum;
    float avg;
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    sum = (NUM1+NUM2+NUM3+NUM4+NUM5);
    avg = static_cast<float>(sum)/5;
    
    //Output Located Here
    cout<<"The average is "<<avg<<endl;

    //Exit
    return 0;
}
