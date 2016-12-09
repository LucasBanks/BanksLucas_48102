
/* 
 * File:   Calories Burned
 * Author: Lucas Banks
 * Created on October 12, 2016, 1:15 PM
 * Purpose: 
 */

#include <iostream> //Input/output objects
using namespace std;

//Execute!
int main() {
    //Initialize value
    float value=0; //Value where minute*3.9 calculation will be stored
    int wLoop=1; //value to increment while loop counter
    
    //For loop starts here
    for (int minute=1; minute<=30; minute++){ //initialize, test, update loop
        wLoop++; //increments while loop counter
        value=minute*3.9; //calculates minute*3.9
        
        //Every 5 times the for loop loops, this while loop will output values
        while (wLoop>5){ 
        cout<<"In minute "<<minute<<", you will have burned "
                <<value<<" calories"<<endl;  
        wLoop=1; //reset while loop counter;
        }
        
    }
    //End program!
    return 0;
}
