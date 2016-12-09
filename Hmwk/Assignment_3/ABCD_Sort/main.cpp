
/* 
 * File:   main.cpp
 * Author: Lucas Banks
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {

    char a='a',b='b',c='c',d='d';
    /*cout<<"Enter a or b in any order and I will sort them!"<<endl; 
    cout<<"Enter first letter: ";
    cin>>a;
    cout<<"Enter second letter: ";
    cin>>b;
    
    if(a=='a'){
        cout<<a<<" "<<b<<endl;
    }
    else {
        cout<<b<<" "<<a<<endl;
    }
    
    cout<<"Enter a, b or c in any order and I will sort them!"<<endl; 
    cout<<"Enter first letter: ";
    cin>>a;
    cout<<"Enter second letter: ";
    cin>>b;
    cout<<"Enter third letter: ";
    cin>>c;
    
    if((a=='a') && (b=='b')){
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    else if ((a=='b') && (b=='a')){
        cout<<b<<" "<<a<<" "<<c<<endl;
    }
    else if ((c=='a') && (a=='b')){
        cout<<c<<" "<<a<<" "<<b<<endl;
    }
    else if ((c=='b') && (b=='a')){
        cout<<b<<" "<<c<<" "<<a<<endl;
    }*/
    
    cout<<"Enter a, b, c or d in any order and I will sort them!"<<endl; 
    cout<<"Enter first letter: ";
    cin>>a;
    cout<<"Enter second letter: ";
    cin>>b;
    cout<<"Enter third letter: ";
    cin>>c;
    cout<<"Enter fourth letter: ";
    cin>>d;
    
    if((a=='a') && (b=='b') && (c=='c')){
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    }
    else if ((a=='b') && (b=='a') && (c=='d')){
        cout<<b<<" "<<a<<" "<<d<<" "<<c<<endl;
    }
    else if ((c=='a') && (a=='b') && (d=='c')){
        cout<<c<<" "<<a<<" "<<d<<" "<<b<<endl;
    }
    else if ((c=='b') && (b=='a') && (a=='d')){
        cout<<b<<" "<<c<<" "<<d<<" "<<a<<endl;
    }
    else if ((d=='a') && (c=='b') && (a=='d')){
        cout<<d<<" "<<c<<" "<<b<<" "<<a<<endl;
    }
    else if ((d=='a') && (a=='c') && (c=='d')){
        cout<<d<<" "<<b<<" "<<a<<" "<<c<<endl;
    }
    else if ((d=='a') && (a=='c') && (c=='b')){
        cout<<d<<" "<<c<<" "<<a<<" "<<b<<endl;
    }
    else if ((a=='a') && (b=='c') && (c=='b')){
        cout<<a<<" "<<c<<" "<<b<<" "<<d<<endl;
    }
    else if ((a=='a') && (b=='d') && (c=='b')){
        cout<<a<<" "<<c<<" "<<d<<" "<<b<<endl;
    }
    else if ((a=='a') && (b=='b') && (c=='d')){
        cout<<a<<" "<<b<<" "<<d<<" "<<c<<endl;
    }
    else if ((a=='b') && (b=='c') && (c=='d')){
        cout<<d<<" "<<a<<" "<<b<<" "<<c<<endl;
    }
    else if ((a=='b') && (b=='a') && (c=='c')){
        cout<<b<<" "<<a<<" "<<c<<" "<<d<<endl;
    }
    else if ((a=='b') && (b=='c') && (c=='a')){
        cout<<c<<" "<<a<<" "<<b<<" "<<d<<endl;
    }
    else if ((a=='d') && (b=='a') && (c=='c')){
        cout<<b<<" "<<d<<" "<<c<<" "<<a<<endl;
    }
    else if ((a=='c') && (b=='a') && (c=='b')){
        cout<<b<<" "<<c<<" "<<a<<" "<<d<<endl;
    }
    else if ((a=='c') && (b=='b') && (c=='a')){
        cout<<c<<" "<<b<<" "<<a<<" "<<d<<endl;
    }
    else if ((a=='c') && (b=='d') && (c=='a')){
        cout<<c<<" "<<d<<" "<<a<<" "<<b<<endl;
    }
    else if ((a=='d') && (b=='b') && (c=='a')){
        cout<<c<<" "<<b<<" "<<d<<" "<<a<<endl;
    }
    else if ((a=='d') && (b=='b') && (c=='c')){
        cout<<d<<" "<<b<<" "<<c<<" "<<a<<endl;
    }
    else if ((a=='d') && (b=='c') && (c=='a')){
        cout<<c<<" "<<d<<" "<<b<<" "<<a<<endl;
    }
    else if ((a=='c') && (b=='a') && (c=='d')){
        cout<<b<<" "<<d<<" "<<a<<" "<<c<<endl;
    }
    else if ((a=='b') && (b=='d') && (c=='c')){
        cout<<d<<" "<<a<<" "<<c<<" "<<b<<endl;
    }
    else if ((a=='a') && (b=='c') && (c=='d')){
        cout<<a<<" "<<d<<" "<<b<<" "<<c<<endl;
    }
    else if ((a=='a') && (b=='d') && (c=='c')){
        cout<<a<<" "<<c<<" "<<d<<" "<<b<<endl;
    }
    
    
    //Exit
    return 0;
}
