#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

void GameIntro();

int main(){

GameIntro();
     cout << "Press Enter to start the game! " << endl;
         cin.get();
 string name;
 cout <<"what is your name?"<<endl;
            cin >> name;
        

    int number, seed, respond, chance=3;
    string ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9,ans10,ans11,ans12,ans13,ans14,ans15;
    string correct1 = "hole", correct2 = "secret", correct3 = "towel", correct4 = "egg", correct5 = "promise";
    string correct6 = "echo", correct7 = "second", correct8 = "book", correct9 = "three", correct10 = "short";
    string correct11 = "fire", correct12 = "seven", correct13 = "sponge", correct14 = "shadow", correct15 = "david";
    
    seed = time(0);
    srand(seed);
    number = rand() % 15 + 1;
 
        
        
       do{
        cout << "Are you ready to play the game " << name << "?"<< endl;
        cout << "1. Play" <<endl;
        cout << "2. How to play"<<endl;
        cout << "3. Quit"<<endl;
        cin >> respond;
        if ( respond == 1 )
        {{
            
                    cout << "Let's start the game!"<<endl;
                    cout << "Your first question is question " << number<<endl;

                  switch(number)
   {
      
   case 1: cout<< "What gets bigger the more you take away? A __\n";
           cin>> ans1; 
           if (ans1==correct1){
               cout<< "CORRECT ANSWER\n" <<endl; }
            else {
                cout<< "WRONG ANSWER\n";
                chance--; 
                while ( chance == 0)
                {
                    cout << "GAME OVER" <<endl;
                }
                cout<< "You have "<<chance<< " chances left.\n";
            }
             
   case 2: cout<< "If you have me, you will want to share me. If you share me, you will no longer have me. \nWhat am I? A __\n";
           cin>> ans2; 
           if (ans2==correct2){
               cout<< "CORRECT ANSWER\n" <<endl; }
            else {
                cout<< "WRONG ANSWER\n";
                chance--; 
                while ( chance == 0)
                {
                    cout << "GAME OVER" <<endl;
                }
                cout<< "You have "<<chance<< " chances left.\n";
                } 

   case 3: cout<< "What gets wet when drying? A _\n";
           cin>> ans3; {
           if (ans3==correct3){
               cout<< "CORRECT ANSWER\n" <<endl; }
            else {
                cout<< "WRONG ANSWER\n";
                chance--; 
                while ( chance == 0)
                {
                    cout << "GAME OVER" <<endl;
                }
                cout<< "You have "<<chance<< " chances left.\n";
            }
           
           
   case 4: cout<< "What has to be broken before you can use it? An _\n";
           cin>> ans4; {
           if (ans4==correct4){
               cout<< "CORRECT ANSWER\n" <<endl; }
            else {
                cout<< "WRONG ANSWER\n";
                chance--; 
                while ( chance == 0)
                {
                    cout << "GAME OVER" <<endl;
                }
                cout<< "You have "<<chance<< " chances left.\n";
            }
             
   case 5: cout<< "What can you break, even if you never pick it up or touch it? A _\n";
           cin>> ans5;
           if (ans5==correct5){
               cout<< "CORRECT ANSWER\n" <<endl; }
            else {
                cout<< "WRONG ANSWER\n";
                chance--; 
               while ( chance == 0)
                {
                    cout << "GAME OVER" <<endl;
                }
                cout<< "You have "<<chance<< " chances left.\n";
            }
             
   case 6: cout<< "What can’t talk but will reply when spoken to? An __\n";
           cin>> ans6;
           if (ans6==correct6){
               cout<< "CORRECT ANSWER\n" <<endl; }
            else {
                cout<< "WRONG ANSWER\n";
                chance--; 
                while ( chance == 0)
                {
                    cout << "GAME OVER" <<endl;
                }
                cout<< "You have "<<chance<< " chances left.\n";
            }
            

 case 7: cout<< "If you’re running in a race and you pass the person in second place, \nwhat place are you in? __ place\n";
           cin>> ans7;
           if (ans7==correct7){
               cout<< "CORRECT ANSWER\n" <<endl; }
            else {
                cout<< "WRONG ANSWER\n";
                chance--; 
               while ( chance == 0)
                {
                    cout << "GAME OVER" <<endl;
                }
                cout<< "You have "<<chance<< " chances left.\n";
            }
            
             
   case 8: cout<< "What has words, but never speaks? A __\n";
           cin>> ans8;
           if (ans8==correct8){
               cout<< "CORRECT ANSWER\n" <<endl; }
            else {
                cout<< "WRONG ANSWER\n";
                chance--; 
               while ( chance == 0)
                {
                    cout << "GAME OVER" <<endl;
                }
                cout<< "You have "<<chance<< " chances left.\n";
            }
            
             
   case 9: cout<< "A little girl goes to the store and buys one dozen eggs. \nAs she is going home, all but three break. How many eggs are left unbroken? _\n";
           cin>> ans9;
           if (ans9==correct9){
               cout<< "CORRECT ANSWER\n" <<endl; }
            else {
                cout<< "WRONG ANSWER\n";
                chance--; 
                while ( chance == 0)
                {
                    cout << "GAME OVER" <<endl;
                }
                cout<< "You have "<<chance<< " chances left.\n";
            }
             
   case 10: cout<< "What five-letter word becomes shorter when you add two letters to it? _\n";
            cin>> ans10;
            if (ans10==correct10){
               cout<< "CORRECT ANSWER\n" <<endl; }
            else {
                cout<< "WRONG ANSWER\n";
                chance--; 
                while ( chance == 0)
                {
                    cout << "GAME OVER" <<endl;
                }
                cout<< "You have "<<chance<< " chances left.\n";
            }
               
             
   case 11: cout<< "I am always hungry and will die if not fed, but whatever \nI touch will soon turn red. What am I? A __\n";
            cin>> ans11;
            if (ans11==correct11){
               cout<< "CORRECT ANSWER\n" <<endl; }
            else {
                cout<< "WRONG ANSWER\n";
                chance--; 
                 while ( chance == 0)
                {
                    cout << "GAME OVER" <<endl;
                }
                cout<< "You have "<<chance<< " chances left.\n";
            }
             
             
   case 12: cout<< "I am an odd number. Take away a letter and I become even. What number am I? _\n";
            cin>> ans12;
            if (ans12==correct12){
               cout<< "CORRECT ANSWER\n" <<endl; }
            else {
                cout<< "WRONG ANSWER\n";
                chance--; 
                while ( chance == 0)
                {
                    cout << "GAME OVER" <<endl;
                }
                cout<< "You have "<<chance<< " chances left.\n";
            }
            
             
   case 13: cout<< "What is full of holes but still holds water? A __\n";
             cin>> ans13;
             if (ans13==correct13){
               cout<< "CORRECT ANSWER\n" <<endl; }
            else {
                cout<< "WRONG ANSWER\n";
                chance--; 
                while ( chance == 0)
                {
                    cout << "GAME OVER" <<endl;
                }
                cout<< "You have "<<chance<< " chances left.\n";
            }
            
             
   case 14: cout<< "I follow you all the time and copy your every move, but you can’t touch or catch me. \nWhat am I? A __\n";
            cin>> ans14;
            if (ans14==correct14){
               cout<< "CORRECT ANSWER\n" <<endl; }
            else {
                cout<< "WRONG ANSWER\n";
                chance--; 
                 while ( chance == 0)
                {
                    cout << "GAME OVER" <<endl;
                }
                cout<< "You have "<<chance<< " chances left.\n";
            }
            
             
   case 15: cout<< "David’s parents have three sons: Snap, Crackle, and what’s the name of the third son? _\n";
            cin>> ans15;
            if (ans15==correct15){
               cout<< "CORRECT ANSWER\n" <<endl; }
            else{
                cout<< "WRONG ANSWER\n";
                chance--; 
                 while ( chance == 0)
                {
                    cout << "GAME OVER" <<endl;
                }
                cout<< "You have "<<chance<< " chances left.\n";
    
            }
             
   }
           }  
}
   
return 0;
}
}
               
        
       else if (respond == 2)
        {
             ifstream inputfile;
    inputfile.open("instructions.txt");
    
    if(!inputfile){
        
        cout << "The file cannot be opened !" <<endl;}
    else {
        char c = inputfile.get();
        while (!inputfile.eof())
    {
        cout << c;
        c = inputfile.get();
    }
    inputfile.close();
    }
            }}
        
       while( respond != 3);
       
       
    }
    
    void GameIntro(){
    
    
    cout << "WELCOME TO OUR RIDDLE GAME!\n"<<endl;
        
        cout<<"          ( ͡❛ ᴗ ͡❛)"<<endl<<endl;
        
         
    
    }