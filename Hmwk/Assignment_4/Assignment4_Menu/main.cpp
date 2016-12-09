/*
 * File:   Assignment 4 Menu
 * Author: Lucas Banks
 * Created on October 19, 2016, 4:31 AM
 * Purpose: Puts the homework problems into one menu.
 */

#include <iostream> //Input/Output objects
#include <iomanip>  //Input/Output manipulation
#include <cstdlib>  //Standard Library
#include <ctime>    //Time
#include <cmath>    //Math

using namespace std;

//Global Constants
const float GRAVITY = 6.673e-8f, //Universal Gravity Constant cm^3/g/sec^2
        CNKGGRM = 1000, //Conversion from KG to Grams
        CNSGGRM = 14593.9, //Conversion from Slugs to Grams
        CNKMMET = 1000, //Conversion from Km to Meters
        CNMETCM = 100, //Conversion from Meters to Centimeters
        CNDYNLB = 2.24809e-6f, //Conversion from Dynes to Pounds
        CNSGLBS = 32.174f; //Conversion from slugs to lbs which oddly acceleration of gravity in ft/sec

int main() {
    int inN;
    char nest;

    nest = 'y';

    while (nest == 'y') {


        //Prompt for problem for user input
        cout << "Input 1  for Sum of Numbers" << endl;
        cout << "Input 2  for ASCII" << endl;
        cout << "Input 3  for Ocean Levels" << endl;
        cout << "Input 4  for Calories Burned" << endl;
        cout << "Input 5  for Membership Fee Increase" << endl;
        cout << "Input 6  for Distance Traveled" << endl;
        cout << "Input 7  for Guessing Game " << endl;
        cout << "Input 8  for Weighing In" << endl;

        cin >>inN;

        while (inN > 9 || inN < 1) {
            cout << "Invalid Input. Try again" << endl;
            cin>>inN;
        }


        switch (inN) {
            case 1:
            {
                int sum = 0, //where sum of values will be stored
                        add = 0, //value that increments from 0 to user inputted positive int value
                        user = 0; //user inputted value


                //While loop that checks if user's int is negative
                while (user <= 0) {
                    //prompts user to input positive int
                    cout << "Put in a positive integer" << endl;
                    cin>>user;
                    //outputs "are u dumb" message if the user is dumb
                    if (user <= 0) {
                        cout << "I said enter a POSITIVE int. Are you a degenerate?" << endl;
                    }
                }

                //user controlled loop
                while (add <= user) //loops until add equals user input value
                {
                    //outputs each number as it adds up to user input value
                    cout << add << " +" << endl;
                    //stores sum of added values
                    sum += add++;
                }

                //outputs sum
                cout << "sum is " << sum << endl;

                break;
            }
            case 2:
            {
                //Initialize variables
                int t = 1; //ASCII value

                //For loop to output the ASCII characters.
                for (int i = 1; i < 127; i++) {
                    cout << static_cast<char> (i); //Turns number int into ASCII & outputs
                    while (t > 16) { //Outputs an endl; every 16 times the for loop loops.
                        cout << endl; //starts new line
                        t = 1; //resets while loop counter
                    }
                    t++; //increments while loop counter.
                } //how many loops could a for loop loop if a for loop could loop fors
                cout << endl;
                break;
            }
            case 3:
            {
                //Initialize value
                float value = 0; //Value to store calculation of year*1.5

                //Loop that outputs chart
                for (int year = 1; year <= 25; year++) {
                    value = year * 1.5; //Calculates how much ocean levels will have risen each year
                    //Outputs chart
                    cout << "In year " << year << ", ocean levels will have risen "
                            << value << " millimeters" << endl;

                }
                break;
            }
            case 4:
            {
                float value = 0; //Value where minute*3.9 calculation will be stored
                int wLoop = 1; //value to increment while loop counter

                //For loop starts here
                for (int minute = 1; minute <= 30; minute++) { //initialize, test, update loop
                    wLoop++; //increments while loop counter
                    value = minute * 3.9; //calculates minute*3.9

                    //Every 5 times the for loop loops, this while loop will output values
                    while (wLoop > 5) {
                        cout << "In minute " << minute << ", you will have burned "
                                << value << " calories" << endl;
                        wLoop = 1; //reset while loop counter;
                    }

                }
                break;
            }
            case 5:
            {
                //initialize values
                float cost = 2500; //value that stores various costs of the years
                float copound; //where compound interest is stored

                //for loop outputs cost of membership fee for 6 years
                //& calculates the increased memebership fee over that time
                for (int year = 1; year <= 6; year++) {
                    copound = (cost * 0.04); //calculates compound interest for each year
                    cost += (copound); //adds extra intrest value onto the fee for said year

                    //outputs membership fee after every year
                    cout << "The membership fee after " << year << " year(s) is $" << cost << endl;
                }
                break;

            }
            case 6:
            {

                //initialize
                int hours, mph; //user inputted values
                int dist; //calculated distance - hours*mph

                //prompts user to input how fast and far vehicle went.
                cout << "Enter how fast the vehicle was traveling in mph: ";
                cin>>mph;
                cout << "Enter how many hours it was traveling for: ";
                cin>>hours;

                //calculates distance
                dist = hours*mph;

                cout << "" << endl; //spaces out user input from output chart

                //outputs header
                cout << "Hours" << "     " << "Distance Traveled (miles)" << endl;

                //loop outputs distance per hour, every hour
                for (int i = 1; i <= hours; i++) {
                    dist = i*mph; //adds up distance evry hour
                    cout << i << "           " << dist << endl; //outputs distance every hour
                }
                break;
            }
            case 7:
            {
                //Set the random number seed
                srand(static_cast<unsigned int> (time(0)));

                //Declaration of Variables
                int range, nGuess;
                int number, answer;

                //Input values
                cout << "This is the guessing game" << endl;
                cout << "Choose a range for the number to guess" << endl;
                cin>>range;

                //Process values -> Map inputs to Outputs
                nGuess = log(range) / log(2) + 1;
                cout << "You have " << nGuess << " guesses to find the random number" << endl;
                number = rand() % (range + 1); //[0,range]

                //Display Results of each Guess
                for (int guess = 1; guess <= nGuess; guess++) {
                    cout << "Input your guess" << endl;
                    cin>>answer;
                    if (answer > number)cout << "Guess to High" << endl;
                    else if (answer < number)cout << "Guess to Low" << endl;
                    else {
                        cout << "You guessed the number" << endl;
                        exit(0);
                    }
                }
                cout << "Sorry too many guesses" << endl;
            }
            case 8:
            {
                //Declaration of Variables
                float msEarth = 5.972e24; //Google lookup -> Kilograms
                float msMark = 6.0f; //Mass of Mark -> Slug
                float rdEarth = 6371.0f; //Google radius of the earth km
                float weight; //Force of attraction from Physics

                //Conversion of inputs
                msEarth *= CNKGGRM; //Convert mass of the earth to grams
                msMark *= CNSGGRM; //Convert mass of mark to grams
                rdEarth *= CNKMMET*CNMETCM; //Convert the radius of the earth to centimeters

                //Process values -> Map inputs to Outputs
                weight = GRAVITY * msMark * msEarth / rdEarth / rdEarth; //Weak force attraction due to Gravity
                weight *= CNDYNLB; //Convert dynes to pounds

                //Display Output
                cout << "According to the Weak Force of Gravity Mark weighs = " << weight << "lbs" << endl;
                cout << "As a check Mark weighs = " << 6 * CNSGLBS << "lbs" << endl;
                cout << "The percentage error in the Radius of Earth = +-" << 100.0f * 18 / 6371 << "%" << endl;
                cout << "The margin of error for the weight = " << (weight - 6 * CNSGLBS) / weight * 100.0f << "%" << endl;

            }
            case 9:
            {

            }
            default:
            {
                cout << "Invalid Input" << endl;
            }
        }

        cout << "Do you want to pick another program?" << endl;
        cout << "Type 'y' for yes, and anything else for no: ";
        cin>>nest;

    }
    return 0;
}

