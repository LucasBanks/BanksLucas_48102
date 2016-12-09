/* 
 * File:   Sum Of Number
 * Author: Lucas Banks
 * Created on October 12, 2016, 10:08 AM
 * Purpose: User inters positive int. Program adds all values counting up to int
 *          and displays sum. 
 */

#include <iostream> //Input/output objects
using namespace std;

//Execute ain function
int main() {
    //Initialize values
    int sum=0, //where sum of values will be stored
        add=0, //value that increments from 0 to user inputted positive int value
        user=0; //user inputted value
    
    
    //While loop that checks if user's int is negative
    while(user<=0){
        //prompts user to input positive int
        cout<<"Put in a positive integer"<<endl;
        cin>>user;
        //outputs "are u dumb" message if the user is dumb
        if(user<=0){
            cout<<"I said enter a POSITIVE int. Are you a degenerate?"<<endl;
        }
    }
    
    //user controlled loop
    while(add<=user) //loops until add equals user input value
    {
        //outputs each number as it adds up to user input value
        cout<<add<<" +"<<endl;
        //stores sum of added values
        sum+=add++;      
    }
    
    //outputs sum
    cout<<"sum is "<<sum<<endl;

    return 0;
}
