/* 
 * File:   MAss and Weight
 * Author: Lucas Banks
 *
 * Created on October 5, 2016, 1:39 PM
 */

#include <iostream> //Input/output objects

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float mass, newtons;
    
    cout<<"Enter an object's mass in kg"<<endl;
    cin>>mass;
    
    newtons=(mass*9.8);
    
    cout<<"The object weighs "<<newtons<<" in newtons"<<endl;
    
    cout<<((newtons>1000) ? "It's too heavy bro":" ");
    cout<<((newtons<10)   ? "It's too small":" ");
              
            
        

    return 0;
}

