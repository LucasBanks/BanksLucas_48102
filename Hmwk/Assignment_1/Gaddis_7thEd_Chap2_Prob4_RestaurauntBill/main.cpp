
/* 
 * File:   Restaurant Bill
 * Author: Lucas Banks
 * Created on September 12, 2016, 12:25 PM
 * Purpose: Calculate total restaurant bill, meal tax, and tip.
 */

//System Libraries Here
#include <iostream>
#include <iomanip> //Adds in setprecision.
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

float MEALTAX = 0.0675;
float TIP     = 0.15;
float MEALTOT = 44.50;

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    
    float meal;
    float tax;
    float tip;
    float bill;
    
    //Input or initialize values Here   
    
    //Process/Calculations Here
    
    tax = (MEALTAX*MEALTOT);
    tip = (MEALTOT*TIP);
    meal = (MEALTOT+tax);
    bill = (MEALTOT+tax+tip);
    
    
    //Output Located Here
    cout<<"Meal: $"<<setprecision(4)<<meal<<endl;
    cout<<"Tax:  $"<<setprecision(3)<<tax<<endl;
    cout<<"Tip:  $"<<setprecision(3)<<tip<<endl;
    cout<<"Bill  $"<<setprecision(4)<<bill<<endl; 

    //Exit
    return 0;
}
