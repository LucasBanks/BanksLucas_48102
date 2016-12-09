/* 
 * File:   Roman Numeral Converter
 * Author: Lucas Banks
 * Created on October 5, 2016, 10:08 AM
 * Purpose: Input number, get Roman numeral. 
 */ 

#include <iostream> //Input/output objects
using namespace std;

int main(int argc, char** argv) {
    //Initialize variables
    short num;
    //Prompts user to input number in between 1-10
    cout<<"Enter a number and I'll have you a Roman numeral STAT!"<<endl;
    cout<<"Make it a number in between 1-10 though"<<endl;
    cin>>num;
    
    //Prints Roman numeral base don number inputted.  
    switch (num){
        case 1: cout<<num<<" = I"<<endl;
                break;        
        case 2: cout<<num<<" = II"<<endl; 
                break;
        case 3: cout<<num<<" = III"<<endl;
                break;
        case 4: cout<<num<<" = IV"<<endl;
                break;
        case 5: cout<<num<<" = V"<<endl;
                break;
        case 6: cout<<num<<" = VI"<<endl;
                break;
        case 7: cout<<num<<" = VII"<<endl;
                break;
        case 8: cout<<num<<" = VIII"<<endl;
                break;
        case 9: cout<<num<<" = IX"<<endl;
                break;
        case 10: cout<<num<<" = X"<<endl;
                break; 
        default:cout<<"Not a number in between 1-10 if I am being honest"<<endl;
    }

    return 0;
}

