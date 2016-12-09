
/* 
 * File:   Distance Traveled
 * Author: Lucas Banks
 * Created on October 13, 2016, 12:23 PM
 * Purpose: User inputs how fast vehichle whent (mph) and 
 *          how many hours it drove. Program calculates and
 *          outputs how far it drove each hour.
 */

#include <iostream> //input/output objects
using namespace std;

//execute main function
int main() {
    //initialize
    int hours, mph; //user inputted values
    int dist; //calulated distance - hours*mph
    
    //prompts user to input how fast and far vehicle went.
    cout<<"Enter how fast the vehicle was traveling in mph: ";
    cin>>mph;   
    cout<<"Enter how many hours it was traveling for: ";
    cin>>hours;
    
    //calculates distance 
    dist=hours*mph;
    
    cout<<""<<endl; //spaces out user input from output chart
    
    //outputs header
    cout<<"Hours"<<"     "<<"Distance Traveled (miles)"<<endl;
    
    //loop outputs distance per hour, every hour
    for (int i=1; i<=hours; i++){
        dist=i*mph; //adds up distance evry hour
        cout<<i<<"           "<<dist<<endl; //outputs distance every hour    
    }
    
    //exit!
    return 0;
}