
/* 
 * File:   Annual Pay
 * Author: Lucas Banks
 * Created on September 12, 2016, 1:21 PM
 * Purpose: Calculate an employee's total annual pay.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short int pAmount;
    unsigned short int pPeriod;
    unsigned short int annuPay;
    
    //Input or initialize values Here
    
    pAmount = 1700;
    pPeriod = 26;
    
    //Process/Calculations Here
    
    annuPay = (pAmount*pPeriod);
    
    //Output Located Here
    cout<<"The employee's total annual pay is $"<<annuPay<<endl;

    //Exit
    return 0;
}
