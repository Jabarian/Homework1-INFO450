//
//  main.cpp
//  Homework 1
//
//  Created by MJ on 9/12/19.
//  Copyright © 2019 MJ Jabarian. All rights reserved.
//


#include <iostream>
#include <string>

using namespace std;

int main()
{
    int fiftyReturn, twentyReturn, tenReturn, fiveReturn, oneReturn;
    int input = 0;
    
    string repeat ="";
    do {
        
        cout << endl << "Enter amount to withdraw: ";
        cin >> input;
        
        if (input > 0 && input < 301)
        {
            
            if (input >= 50)
            {
                fiftyReturn = (input / 50);
                cout << "you will get " << fiftyReturn << " $50 dollar bills." << endl;
                input %= 50;
            }
            
            if (input >= 20)
            {
                twentyReturn = (input / 20);
                cout << "you will get " << twentyReturn << " $20 dollar bills." << endl;
                input %= 20;
            }
            
            if (input >= 10)
            {
                tenReturn = (input / 10);
                cout << "you will get" << tenReturn << " $10 dollar bills." << endl;
                input %= 10;
            }
            
            
            if (input >= 5)
            {
                fiveReturn = (input / 5);
                cout << "you will get " << fiveReturn << " $5 dollar bills." << endl;
                input %= 5;
            }
            
            if (input >= 1)
            {
                oneReturn = input;
                cout << "you will get " << oneReturn << " $1 dollar bills." << endl;
                input %= oneReturn;
            }
            
            if (input == 0)
            {
                cout << endl << "want to repeat again? " << endl;
                cout << endl << "Enter yes or no to repeat" << endl;
                cin >> repeat;
            }
            
        }
        
        else 
        {
            
            cout << endl << "Enter a amount more than 0 and less than 301." << endl;
            cout << "Would you like to try again?" << endl;
            cout << "Enter yes or no to try to repeat" << endl;
            cin >> repeat;
            
        }
        
    }
    while ((repeat == "yes")); //part of do while syntax to continue iterations
    
    return 0; //end program
    
}
