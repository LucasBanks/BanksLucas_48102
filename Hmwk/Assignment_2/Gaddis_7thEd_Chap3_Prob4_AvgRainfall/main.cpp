
/* 
 * File:   Average Rainfall
 * Author: LucasB
 * Created on September 27, 2016, 7:47 PM
 * Purpose: Calculates average rainfall of each month from the given user 
 *          input values.
 */
//User Libraries
#include <iostream> //Input/output 
#include <string>   //Enables the string data type
using namespace std;


int main() {
    //Declarations
    string june, july, aug;
    float juneA, julyA, augA;
    float avg;
    //Prompts user to input month
    cout<<"Enter month 1 "<<endl;
    cin>>june;
    //Prompts user to input amount of rain
    cout<<"Enter the amount (in inches) of rain that fell during "<<june<<endl;
    cin>>juneA;
    
    //Prompts user to input month
    cout<<"Enter month 2 "<<endl;
    cin>>june;
    //Prompts user to input amount of rain
    cout<<"Enter the amount (in inches) of rain that fell during "<<july<<endl;
    cin>>julyA;
    
    //Prompts user to input month
    cout<<"Enter month 3 "<<endl;
    cin>>aug;
    //Prompts user to input amount of rain
    cout<<"Enter the amount (in inches) of rain that fell during "<<aug<<endl;
    cin>>augA;
    
    avg=(juneA+julyA+augA)/3; //Processes average of input values
    
    //outputs
    cout<<"The average rainfall in June, July & August was "<<avg<<" inches."<<endl; 

    return 0;
}

