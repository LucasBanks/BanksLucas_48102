
/* 
 * File:   Ocean Levels
 * Author: Lucas Banks
 * Created on September 12, 2016, 1:36 PM
 * Purpose: To calculate when homeowners in Riverside will 
 *          have beachfront properties. 
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

const float CNVMMFT = 304.8; //Conversion millimeters to feet from Google
const float CNVMMM=1000; //Conversion from millimeters to meters

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare if variables with Initialization
    float rate=1.5f; //Sea level rise rate in nm/year
    char nYear1=5,nYear2=7,nYear3=10; //Years to calculate rate
    float rise1,rise2,rise3; //Solutions for the 3 years from above
    float years; //Number of years before your home is beach front property
    int nYcBch;//Number of years before your home becomes a beach front property
    float elevRiv=860.0f; //Elevation of Riverside in feet according to wikipedia.
     //Process/Calculations Here
    rise1=rate*nYear1;
    rise1=rate*nYear2;
    rise1=rate*nYear3;
    nYcBch=elevRiv/rate*CNVMMFT;
    
    //Output Located Here
    cout<<"The rate of sea level rise = "<<rate<<"mm/year"<<endl;
    cout<<"After "<<static_cast<int>(nYear1)<<" years the sea will rise "<<rise1<<" mm"<<endl;
    cout<<"After "<<static_cast<int>(nYear2)<<" years the sea will rise "<<rise1<<" mm"<<endl;
    cout<<"After "<<static_cast<int>(nYear3)<<" years the sea will rise "<<rise1<<" mm"<<endl;
    cout<<"At this rate, Riverside wont have beach front property for "
        <<nYcBch<<" years"<<endl;
    cout<<"This rise equates to "<<nYcBch*rate/CNVMMM<<" meters"<<endl;
    
    //Exit
    return 0;
}
