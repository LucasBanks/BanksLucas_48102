/* 
 * File:   main.cpp
 * Author: Lucas Banks
 *
 * Created on October 5, 2016, 10:36 AM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    
    float len1, len2, wid1, wid2;
    float r1, r2;
    
    cout<<"Enter length for rectangle 1: ";
    cin>>len1;
    cout<<"Enter width for rectangle 1: ";
    cin>>wid1;
    
    cout<<"Enter length for rectangle 2: ";
    cin>>len2;
    cout<<"Enter width for rectangle 2: ";
    cin>>wid2;
    
    r1 = (len1*wid1);
    r2 = (len2*wid2);
    
    if (r1>r2){
        cout<<"Rectangle 1 has the greater area."<<endl;
    }
    else if (r1<r2){
        cout<<"Rectangle 2 has the greater area."<<endl; 
    }
    else {
        cout<<"The area of the two rectangles are the same."<<endl;
    }
    
    cout<<"The area of rectangle 1 is: "<<r1<<endl;
    cout<<"The area of rectangle 2 is: "<<r2<<endl;
    return 0;
}

