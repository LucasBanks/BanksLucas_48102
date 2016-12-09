
/* 
 * File:   Sales Tax
 * Author: Lucas Banks 
 * Created on September 12, 2016, 10:49 AM
 * Calculate taxes
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
float STTAX = 0.04;    //State sales tax
float CONTAX = 0.02;  // Country sales tax


//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare all Variables Here
    
    unsigned short int purch;
    float totTax;
    
    //Input or initialize values Here
    
    purch = 52;
    
    //Process/Calculations Here
    
    totTax = (purch*STTAX*CONTAX);
    
    //Output Located Here
    cout<<"The total sales tax on a $2 purchase is $"<<totTax<<endl;

    //Exit
    return 0;
}