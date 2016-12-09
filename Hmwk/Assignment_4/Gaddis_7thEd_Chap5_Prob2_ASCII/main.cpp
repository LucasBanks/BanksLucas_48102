 
/*
 * File:   ASCII
 * Author: Nunya Buzzy
 * Created on October 12, 2016, 10:38 AM
 * Purpose: Program displays the ASCII characters 0-127.
            Outputs 16 chars per line.
 */
 
#include <iostream> //Input/output objects
 
using namespace std;
 
//Execution for the main function
int main() {
    //Initialize variables
    int t = 1; //ASCII value
   
    //For loop to output the ASCII characters.
    for (int i = 1; i < 127; i++) {
        cout << static_cast<char> (i); //Turns number int into ASCII & outputs
        while (t > 16) { //Outputs an endl; every 16 times the for loop loops.
            cout << endl; //starts new line
            t = 1; //resets while loop counter
        }
        t++;//increments while loop counter.
    } //how many loops could a for loop loop if a for loop could loop fors
 
    return 0;
}