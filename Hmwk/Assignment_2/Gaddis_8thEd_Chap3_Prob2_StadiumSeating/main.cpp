/* 
 * File:   Stadium Seating
 * Author: Lucas Banks
 * Purpose: Has user input how many tickets for each class of seats were sold, 
 *          then displays the amount of income generated from ticket sales.
 */

#include <iostream>   //Input/Output objects
#include <iomanip>    //Input/Output manipulation
using namespace std;  

//Global constants
const unsigned short int priceA = 15,
                         priceB = 12,
                         priceC =  9;

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
int classA, classB, classC,
    income;
    
    //Input values
    cout<<"How many tickets of each class of seats were sold? \n";
    cout<<"Class A: ";
    cin>>classA;
    cout<<"Class B: ";
    cin>>classB;
    cout<<"Class C: ";
    cin>>classC;
    
    //Process values
    income=(classA*priceA)+(classB*priceB)+(classC*priceC);
    
    //Display Output
    cout<<"The amount of income generated from ticket sales is $"
        <<setprecision(2)<<fixed<<static_cast<float>(income)<<"."<<endl;
    
    //Exit Program
    return 0;
}