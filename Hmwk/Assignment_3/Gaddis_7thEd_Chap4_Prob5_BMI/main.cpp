
/* 
 * File:   Body Mass Index
 * Author: Lucas Banks
 * Created on October 5, 2016, 12:38 PM
 * Purpose: Calculates BMI based on use input. Tells user if you have a good
 *          alibi I mean BMI. 
 */

#include <iostream>//Input/output object

using namespace std;

int main() {
    
    //Initialize variables
    float height, weight;
    float bmi;
    
    //Prompts user to type in height and weight
    cout<<"Type in your height in inches :";
    cin>>height;
    cout<<"Type in your weight in pounds :";
    cin>>weight;
    
    //calculates BMI
    bmi=(weight*703)/(height*height);
    
    cout<<(((bmi>25) || (bmi<18.5))
    ? "Your BMI sucks":
      "You got that cleeaaan BMI");
    
    return 0;
}

