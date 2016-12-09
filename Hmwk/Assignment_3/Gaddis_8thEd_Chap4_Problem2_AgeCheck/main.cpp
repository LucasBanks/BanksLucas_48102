/* 
 * File:   Age Check
 * Author: Lucas Banks
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  User inputs an age (int value), program determines if 
 *           one is eligible to be hired at that age. 
 */

//System Libraries Here
#include <iostream> //Input/output objects
using namespace std;

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short age;
    
    //Prompt user to enter his age.
    cout<<"Enter your age and we will tell you if you are eligible "
        <<"to be hired for our position"<<endl;
    
    cin>>age;
    
    //Output appropriate statement based on goven user input.
    if(age>=18&&age<=28){
        cout<<"You are eligible to be hired for the job."<<endl;
    }
    else if (age<18){
        cout<<"Go eat a candy cane or something."<<endl;
        }
    else if (age>28){
        cout<<"Go tend to your great grandchildren cuz goddang u old."<<endl;
    }

    //Exit
    return 0;
}

