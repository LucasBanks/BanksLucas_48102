
/* 
   File:   Software Sales
   Author: Lucas Banks
   Created on 10/4/16
   Purpose: Calculate total price while factoring in the discount
            variation based off of the amount of units sold.
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const unsigned short UNITS=99;

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    short amount;
    short int cost;
    //Prompt user to enter amount sold
    cout<<"How many units were sold?"<<endl;
    cin>>amount;
    
    //Calculates total cost with included discount. 
    //Discount is determined by quantity of units sold.
    if ((amount>0)&&(amount<10)){
     cost=UNITS*amount;
     
     cout<<"The total cost of the purchase is: $"<<cost<<endl;        
    }
    else if ((amount>9)&&(amount<20)){
     cost=(UNITS*amount);
     cost=cost-(cost*0.20);
     
     cout<<"The total cost of the purchase is: $"<<cost<<endl;        
    }
    else if ((amount>19)&&(amount<50)){
     cost=(UNITS*amount);
     cost=cost-(cost*0.30);
     
     cout<<"The total cost of the purchase is: $"<<cost<<endl;        
    }
    else if ((amount>49)&&(amount<100)){
     cost=(UNITS*amount);
     cost=cost-(cost*0.40);
     
     cout<<"The total cost of the purchase is: $"<<cost<<endl;        
    }
    else if (amount>99){
     cost=(UNITS*amount);
     cost=cost-(cost*0.50);
     
     cout<<"The total cost of the purchase is: $"<<cost<<endl;        
    }
    else if (amount<0){
        cout<<"So who gave me dees units"<<endl;
    }
    else {
        cout<<"Uhh bruh you bought jack diggily SQAT"<<endl;
    }

    //Exit Program
    return 0;
}