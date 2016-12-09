/* 
 * File:    
 * Author: Lucas Banks
 * Created on September 12, 2016, 10:13 AM
 * Purpose: Add two numbers together 
 */

//System Libraries Here
#include <iostream> //Input/Output objects
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short int num1;
    unsigned short int num2;
    unsigned short int total;
    
    
    //Input or initialize values Here
    
    num1 = 62;
    num2 = 99;
        
    //Process/Calculations Here
    
    total = (num1 + num2);
    
    //Output Located Here
    cout<<total<<endl;

    //Exit
    return 0;
}