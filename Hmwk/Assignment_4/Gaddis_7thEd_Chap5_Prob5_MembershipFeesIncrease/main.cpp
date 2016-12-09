/* 
 * File:   Membership Fee Increase
 * Author: Lucas Banks
 * Created on October 12, 2016, 1:42 PM
 * Purpose: Output membership fees each year. Each year increases by 4%.
 */

#include <iostream> //Input/output objects
using namespace std;

int main() {
    //initialize values
    float cost=2500; //value that stores various costs of the years
    float copound;   //where compound interest is stored
    
    //for loop outputs cost of membership fee for 6 years
    //& calculates the increased memebership fee over that time
    for (int year=1; year<=6; year++){
     copound=(cost*0.04); //calculates compound interest for each year
     cost+=(copound);     //adds extra intrest value onto the fee for said year
     
     //outputs membership fee after every year
     cout<<"The membership fee after "<<year<<" year(s) is $"<<cost<<endl;        
    }
    
    //Exit program!
    return 0;
}