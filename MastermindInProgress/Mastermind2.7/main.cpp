#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <sstream>

using namespace std;

const string bgrList="QWASqwas", //valid list of beginner mode characters 
             esyList="QWASEDqwased", //valid list of easy mode characters
             nmlList="RBYGrbyg", //valid list of beginner mode characters
             hrdList="RBYGrbyg"; //valid list of beginner mode characters 
const string begnner(4, '.'),
             easy(6, '.'),
             interm(8, '.'),
             hard(10, '.');


string setBoard(string user);

int main()
{
    string guess; //the player's guess will be stored
    string spot(4,'.'); //where letters will be randomly assigned
    string chkSpot; //checks how accurate the player's guess is
    string again="y"; //variable that user input will determine if he plays again
    bool check; //input validation
    string dif;
    
    cout<<"What difficulty do you want to select?"<<endl;
    cout<<"1 = Beginner"<<endl;
    cout<<"2 = Easy"<<endl;
    cout<<"3 = Intermediate"<<endl;
    cout<<"4 = Hard"<<endl;
    
    getline(cin,dif);
    
    switch (dif[0])
    {
        case '1': {spot=setBoard(begnner); break;}
        case '2': {spot=setBoard(easy); break;}
        case '3': {spot=setBoard(interm); break;}
        case '4': {spot=setBoard(hard); break;}
    }
    
    
     

    do{
        do{
            //if nothing is invalid about the user input, this bool allows 
            //the program to pass through the loop
            check=true;
            
            //Prompts user to enter guess
            cout<<"Enter your guess: ";
            getline(cin,guess);
            
             //Checks for valid input
            while(guess.size()!=4)
            {   
                cout<<"Invalid input. Please type in the four valid letters only."<<endl;
                getline(cin,guess);
            }
            
            //Goes through the user inputted characters one by one, searches
            //to see if any character doesn't match up with the valid list of
            //characters.
            for(unsigned int i=0; i<guess.size(); i++)
            {             
                if (bgrList.find(guess[i])== string::npos)
                {
                    check=false;
                }               
            }
            
            //if any erroneous character was found in previous for loop, this while
            //will run giving the player an invalid input message
            if(check==false)
            {
                cout<<"Invalid input. Please type in the four valid letters only."<<endl;
            }
            
        }while(check==false);

        //converts lowercase inputs to uppercase
        for(int u=0; u<4; u++){
            switch(guess[u])
            {
            case 'q': {guess[u]='Q'; break;}
            case 'w': {guess[u]='W'; break;}
            case 'a': {guess[u]='A'; break;}
            case 's': {guess[u]='S'; break;}
            }
        }

    //for loop checks each spot to see how it corresponds with the player's
    //guess, and then will assign O or X to a variable that will output
    //during the game so that the player can know how accurate his guess was
        for (int j=0; j<4; j++)
        {
            (guess[j]==spot[j]) ? (chkSpot[j]='O') : (chkSpot[j]='X');
        }

    //if statement checks if user guessed the letters assigned to each
    //spot on the board correctly. If the player is successful, tell em.
    //if not, tell em.
            if (chkSpot[0]=='O'&&chkSpot[1]=='O'&&chkSpot[2]=='O'&&chkSpot[3]=='O')
            {
                cout<<"YOU WIN"<<endl;

                cout<<"|| ["<<spot[0]<<"]["<<spot[1]<<"]["<<spot[2]<<"]["<<spot[3]<<"] || ";
                cout<<"== [ "<<chkSpot[0]<<" "<<chkSpot[1]<<" "<<chkSpot[2]<<" "<<chkSpot[3]<<" ]"<<endl;
                cout<<endl;
                cout<<"Would you like to play again on a new board? Enter 'y' for yes, ";
                cout<<"or anything else to quit."<<endl;
                spot=setBoard(begnner);
                getline(cin,again);

            }
            else
            {

            cout<<"|| ["<<"?"<<"]["<<"?"<<"]["<<"?"<<"]["<<"?"<<"] || ";
            cout<<"== [ "<<chkSpot[0]<<" "<<chkSpot[1]<<" "<<chkSpot[2]<<" "<<chkSpot[3]<<" ]";
            cout<<"   -- CHOICES: Q W A S -- "<<endl;
            }

    }while(again=="y"||again=="Y");

    return 0;
}//end of main

    string setBoard(string user){
    string spot(user.size(),'.'); //where letters will be randomly assigned
    string chkSpot; //checks how accurate the player's guess is
    int boardSet; //where random number assignment (1-4) will be stored
    int repeat[user.size()]={}; //tests for number repetition
    bool exists=false; 
    srand(time(NULL));

    //for loop for randomizing the board
    for (int i=0; i<user.size(); i++)
    {
        exists=true;
        boardSet=(rand() % user.size()) + 1;
        
        //Tests a user character to see if it's already been used
        //(AKA, if it's already been stored in repeat[])
        for(int j=0; j<user.size(); j++)
        {
            if(boardSet==repeat[j])
            {
                exists=false;
            }
        }
        
        
        

        //first if test will test if the random number is identical to any previous random number.
        //if the random number IS equal to any previous ones, it will decrement 'i'
        if (exists==false)
        {
            //(bgrList.find(guess[i])== string::npos) (PREVIOUS VERSION ^)
            
            //decrements i so that the for loop will run an extra loop so that it can
            //assign a number that hasn't already been taken
            i--;
        }
        //if the random number is unique, it assigns it to a spot on the board
        else{
        //each number 1-4 corresponds to a letter that will be assigned to a spot
        //on the board
        switch (boardSet)
        {
            case 1: {
                spot[i]='Q'; //Assigns Q to a spot
                chkSpot[i]=spot[i]; //Assigns red to check for if the user guessed correctly.
                repeat[i]=boardSet; //assigns number 1 in repeat variable so it can test for future repeats
            break;
            }
            case 2: {
                spot[i]='W'; //Assigns W to a spot
                chkSpot[i]=spot[i]; //Assigns blue to check for if the user guessed correctly.
                repeat[i]=boardSet; //assigns number 2 in repeat variable so it can test for future repeats
                break;
            }
            case 3: {
                spot[i]='A'; //Assigns A to a spot
                chkSpot[i]=spot[i]; //Assigns yellow to check for if the user guessed correctly.
                repeat[i]=boardSet; //assigns number 3 in repeat variable so it can test for future repeats
                break;
            }
            case 4: {
                spot[i]='S'; //Assigns S to a spot
                chkSpot[i]=spot[i]; //Assigns green to check for if the user guessed correctly.
                repeat[i]=boardSet; //assigns number 4 in repeat variable so it can test for future repeats
                break;
            }
        }//ends switch
        }//ends else statement
    }//ends for loop

    cout<<"|| ["<<"?"<<"]["<<"?"<<"]["<<"?"<<"]["<<"?"<<"] || ";
    cout<<"== [ "<<"?"<<" "<<"?"<<" "<<"?"<<" "<<"?"<<" ]";
    cout<<"   -- CHOICES: Q W A S -- "<<endl;

    return spot;
}