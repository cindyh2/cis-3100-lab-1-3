//
//  main.cpp
//  lab 3 question 6
//
//  Created by Cindy Hernandez on 3/10/24.
//

#include <iostream>
using namespace std;

int main() {
    char choice;
    
    // using while statement for the loop to show game menu
    while (true) {
        cout << "***************************************************\n" << endl;
        cout << "                       Welcome!" << endl;
        cout << "Please choose a number from the following options: " << endl;
        cout << " 1. Choose your own adventure" << endl;
        cout << " 2. Madlibs" << endl;
        cout << " 3. Exit \n" << endl;
        cout << "***************************************************" << endl;
        
        // prompt user to enter a choice
        cout << "Choose an option: " << endl;
        cin >> choice;
        
        if (choice == '1') {
            cout << "Loading Choose Your Own Adventure...\n" << endl;
            // declare variables
            char starter, choice, response;
            
            // adventure based off pokemon franchise, will only have 2 options for choices instead of 3
            cout << "Welcome to your first adventure!" << endl;
            cout << "Choose a starter: 1 for Charmander or 2 for Pikachu" << endl;
            // storing the input
            cin >> starter;
            
            // used an 'if' statement to prevent user from inputting a number beside 1 or 2
            if (starter == '1' || starter == '2') {
                cout << "Great! Your journey has begun! \n " << endl;
                
                cout << "As you are walking through Route 1, a wild Pidgey appears. What will you do? Choose an option: \n 1. Catch the Pokemon.\n 2. Battle the Pokemon.\n 3. Run away."  << endl;
                // store input
                cin >> choice;
                
                // type if and else statements corresponding to their choices
                // each choice has a different answer
                if (choice == '1') {
                    cout << "You threw a Pokeball. The Pidgey is caught! You now have 2 Pokemon in your party. \n" << endl;
                } else if (choice == '2') {
                    cout << "You and your starter fought the Pidgey and won. Your Pokemon has leveled up! \n" << endl;
                } else if (choice == '3') {
                    cout << "You have fled the battle. \n" << endl;
                }
                
                // next question for the user
                cout << "You have reached the end of Route 1. You have now reached Route 2. \n You see some patches of grass and some friendly trainers. What would you like to do?: \n 1. Talk to some trainers. \n 2. Go in the grass. \n 3. Go rest at the Pokemon Center. \n" << endl;
                // store input
                cin >> response;
                
                // reponses based off input choice
                // used brackets to get more lines controlled by 1 control statement
                if (response == '1') {
                    cout << "You talk to two trainers. The first trainer gives you advice about using items. The second trainer gives you a free fishing rod. \n" << endl;
                    cout << "You decide to explore further and talk to more trainers. \n" << endl;
                } else if (response == '2') {
                    cout << "You battled some Pokemon in the grass. Your Pokemon has leveled up 5 levels. " << endl;
                    cout << "You decided to heal up your Pokemon and find some trainers in the area. \n" << endl;
                } else if (response == '3') {
                    cout << "You and your Pokemon go rest at the Pokemon Center. \n" << endl;
                }
                // the end of the adventure
                cout << "You have finished your adventure. See you next time! \n" << endl;
            }
            
            // response if user doesnt input 1 or 2
            else
                cout << "Try again. " << endl;
            
        } else if (choice == '2') {
            cout << "Loading Madlibs...\n " << endl;
            //declaring variables
            string number, pverb, animal, place, money, name, noun, name2, color;
            
            // asking questions for user input
            cout << "Enter a positive number below 4: " << endl;
            cin >> number;
            
            cout << "Enter an animal: " << endl;
            cin >> animal;
            
            cout << "Enter a past-tense verb: " << endl;
            cin >> pverb;
            
            cout << "Enter a retail store: " << endl;
            // this will be considered a place
            cin >> place;
            
            cout << "Enter a positive number below 50: " << endl;
            cin >> money;
            
            cout << "Enter a name: " << endl;
            cin >> name;
            
            cout << "Enter a noun: " << endl;
            cin >> noun;
            
            cout << "Enter another name: " << endl;
            cin >> name2;
            
            cout << "Enter a color: " << endl;
            cin >> color;
            
            // story written by user
            cout << "One day, " << number << animal  << " went to the mall and " << pverb << " went shopping for a birthday gift. First, they went to " << place << " to look for a gift under $" << money << " but they couldn't agree on a gift option. " << name << " suggests the group go to " << noun << " to rethink their options. Everybody agrees and makes their way there. On the way there," << name2 << " sees a beautiful " << color << " card holder meets their budget. After a long day of looking for a gift, the group ends their day successfully and go home safely." << endl;
        } else if (choice == '3') {
            cout << "\nExiting game. See you next time! " << endl;
            // adding break to end loop
            break;
        } else {
            cout << "Please try again. " << endl;
        }
    }
    // used else statement so that no other number other than 1,2,3 can run the menu
    
    return 0;
}

