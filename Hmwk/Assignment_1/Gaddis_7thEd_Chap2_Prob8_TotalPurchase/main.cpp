
/* 
 * File:   Total Purchase
 * Author: Lucas Banks
 *
 * Created on September 12, 2016, 9:22 PM
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

float TAX = 0.06;

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    
    float item1;
    float item2;
    float item3;
    float item4;
    float item5;
    float subTot;
    float tax;
    float tot;
    //Input or initialize values Here   
    
    item1 = 12.95;
    item2 = 24.95;
    item3 = 6.95;
    item4 = 14.95;
    item5 = 3.95;
    
    //Process/Calculations Here
    
    subTot = (item1+item2+item3+item4+item5);
    tax = (subTot*TAX);
    tot = (subTot+tax);
       
    //Output Located Here
  
    cout << "Subtotal: " << subTot << endl;
    cout << "Tax:      " << tax << endl;
    cout << "Total:    " << tot  << endl;
    //Exit
    return 0;
}

