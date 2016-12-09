#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <sstream>
 
using namespace std;
//passes in the appropriate values to set the board for the difficulty 
//selected by the user. 
const string begnner(4, '.'), 
             easy(6, '.'),
             interm(7, '.'),
             hard(8, '.');
 
//Function prototypes  
string setBoard(string user, string &choices); 
string checkInput(int num);
 
int main()
{
    string guess; //the player's guess will be stored
    string spot(4,'.'); //where letters will be randomly assigned
    string chkSpot; //checks how accurate the player's guess is
    string again="y"; //variable that user input will determine if he plays again
    string choices; //Where list of valid choices will be stored for the difficulty
    int numOf; //number of valid choices
    bool win; //Keeps game in a loop until character wins.
    string dif; //variable where user input to determine difficulty will be stored
   
    do{
        //sets win = false so that the game will keep looping until player 
        //wins and/or decides to quit the program. 
        win=false;
    
        //Prompts user to select difficulty or leave program.
        cout<<"What difficulty do you want to select?"<<endl;
        cout<<"1 = Beginner"<<endl;
        cout<<"2 = Easy"<<endl;
        cout<<"3 = Intermediate"<<endl;
        cout<<"4 = Hard"<<endl;
        cout<<""<<endl;
        cout<<"Input anything else to quit program."<<endl;
        getline(cin,dif);
   
        //Passes in strings of a length relevant to the difficulty selected.
        switch (dif[0])
        {
            case '1': {spot=setBoard(begnner, choices);
            numOf=4;
            break;}
            case '2': {spot=setBoard(easy, choices);
            numOf=6;
            break;}
            case '3': {spot=setBoard(interm, choices);
            numOf=7;
            break;}
            case '4': {spot=setBoard(hard, choices);
            numOf=8;
            break;}        
            default: {
                win=true;
                again="n"; 
            }
    }
 
    do{
        //this if will skip the whole block that checks the user's input for the
        //right letters if user decides to quit. 
        if (again!="n"){
        guess=checkInput(numOf);
        
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
                win=true;
                cout<<"Would you like to play again on a new board? Enter 'y' for yes, ";
                cout<<"or anything else to quit."<<endl;
                getline(cin,again); 
            }
            else
            {
                //Outputs the board to show what the user's got right and the
                //list of their choices
                cout<<"|| ["<<"?"<<"]["<<"?"<<"]["<<"?"<<"]["<<"?"<<"] || ";
                cout<<"== [ "<<chkSpot[0]<<" "<<chkSpot[1]<<" "<<chkSpot[2]<<" "<<chkSpot[3]<<" ]";
                cout<<"   -- CHOICES: "<<choices<<" --"<<endl;
            }
        }
    }while(win==false);  //loop will keep players guessing until they win.
}while(again=="y"||again=="Y"); //loop will keep players in menu until they- 
    return 0;                   //decide to quit
}//end of main
 
string setBoard(string user, string &choices){
    string spot(user.size(),'.'); //where letters will be randomly assigned
    string chkSpot; //checks how accurate the player's guess is
    int boardSet; //where random number assignment (1-4) will be stored
    int repeat[user.size()]={}; //tests for number repetition
    bool exists=false;
    srand(time(NULL));
    
    //Will assign list of valid choices depending on what difficulty the user 
    //chooses
    switch(user.size())
    {
        case 4: {choices="Q W A S"; break;}
        case 6: {choices="Q W A S E D"; break;}
        case 7: {choices="Q W A S E D R"; break;}
        case 8: {choices="Q W A S E D R F"; break;}
    }
   
    //for loop for randomizing the board
    for (int i=0; i<4; i++)
    {
        //sets exist to true at the start of each loop. 
        exists=true;
        
        //gets a random number in-between 1 and the number denoting 
        //the length of the string passed in by the user selected difficulty
        boardSet=(rand() % user.size()) + 1;
       
        //Tests a user character to see if it's already been used
        //(AKA, if it's already been stored in repeat[])
        for(int j=0; j<4; j++)
        {
            if(boardSet==repeat[j])
            {
                //if there is a repeat variable, set exists to false
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
                chkSpot[i]=spot[i]; //Assigns Q to check for if the user guessed correctly.
                repeat[i]=boardSet; //assigns number 1 in repeat variable so it can test for future repeats
            break;
            }
            case 2: {
                spot[i]='W'; //Assigns W to a spot
                chkSpot[i]=spot[i]; //Assigns W to check for if the user guessed correctly.
                repeat[i]=boardSet; //assigns number 2 in repeat variable so it can test for future repeats
                break;
            }
            case 3: {
                spot[i]='A'; //Assigns A to a spot
                chkSpot[i]=spot[i]; //Assigns A to check for if the user guessed correctly.
                repeat[i]=boardSet; //assigns number 3 in repeat variable so it can test for future repeats
                break;
            }
            case 4: {
                spot[i]='S'; //Assigns S to a spot
                chkSpot[i]=spot[i]; //Assigns S to check for if the user guessed correctly.
                repeat[i]=boardSet; //assigns number 4 in repeat variable so it can test for future repeats
                break;
            }
            case 5: {
                spot[i]='E'; //Assigns E to a spot
                chkSpot[i]=spot[i]; //Assigns E to check for if the user guessed correctly.
                repeat[i]=boardSet; //assigns number 5 in repeat variable so it can test for future repeats
                break;
            }
            case 6: {
                spot[i]='D'; //Assigns D to a spot
                chkSpot[i]=spot[i]; //Assigns D to check for if the user guessed correctly.
                repeat[i]=boardSet; //assigns number 6 in repeat variable so it can test for future repeats
                break;
            }
            case 7: {
                spot[i]='R'; //Assigns R to a spot
                chkSpot[i]=spot[i]; //Assigns R to check for if the user guessed correctly.
                repeat[i]=boardSet; //assigns number 7 in repeat variable so it can test for future repeats
                break;
            }
            case 8: {
                spot[i]='F'; //Assigns F to a spot
                chkSpot[i]=spot[i]; //Assigns green to check for if the user guessed correctly.
                repeat[i]=boardSet; //assigns number 8 in repeat variable so it can test for future repeats
                break;
            }
        }//ends switch
        }//ends else statement
    }//ends for loop
    //outputs the board
    cout<<"|| ["<<"?"<<"]["<<"?"<<"]["<<"?"<<"]["<<"?"<<"] || ";
    cout<<"== [ "<<"?"<<" "<<"?"<<" "<<"?"<<" "<<"?"<<" ]";
    cout<<"   -- CHOICES: "<<choices<<" --"<<endl;
 
    return spot; //returns the string which holds the positions of the letters
                 //on the board.
}
 
string checkInput(int num)
{
    bool check; //variable to check if input is valid
    string guess; //user's guess
    string vldList; //where valid list of characters will be stored.
      
    //assigns the string of valid characters to a variable that will be searched
    //when it comes to checking if the user input is valid
    switch(num)
    {
        case 4: {vldList="QWASqwas"; break;}
        case 6: {vldList="QWASEDqwased"; break;}
        case 7: {vldList="QWASEDRqwasedr"; break;}
        case 8: {vldList="QWASEDRFqwasedrf"; break;}
    }
   
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
           
            //converts lowercase inputs to uppercase
        for(int u=0; u<4; u++){
            switch(guess[u])
            {
            case 'q': {guess[u]='Q'; break;}
            case 'w': {guess[u]='W'; break;}
            case 'a': {guess[u]='A'; break;}
            case 's': {guess[u]='S'; break;}
            case 'e': {guess[u]='E'; break;}
            case 'd': {guess[u]='D'; break;}
            case 'r': {guess[u]='R'; break;}
            case 'f': {guess[u]='F'; break;}
            }
        }
           
            //Goes through the user inputted characters one by one, searches
            //to see if any character doesn't match up with the valid list of
            //characters.
            for(unsigned int i=0; i<guess.size(); i++)
            {            
                if (vldList.find(guess[i])== string::npos)
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
        }while(check==false);  //will loop if the input was invalid  
        return guess; //returns the user's BACKGROUND CHECKED guess
}