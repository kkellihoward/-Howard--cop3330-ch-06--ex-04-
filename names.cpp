/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Kelli Howard
 */


#include <iostream>
#include <string>
#include <vector>
  
using namespace std;

class Name_value {
  public:
    string words;
    int numbers;
};

int main() {
    int num = -1;
    string word = "";
    bool valid_entry = true;
    bool isUserDone = false;
    vector<Name_value> names_and_values;

    
    while(!isUserDone)
    {
        cout << "Enter a string: ";
        cin >> word;

        cout << "Enter a number: ";
        cin >> num;

        if(num == 0 && word == "NoName")
        {
            isUserDone = true;
            break;
        }

        for (int i = 0; i < names_and_values.size(); ++i)
        {
            if(names_and_values[i].words == word)
            {
                valid_entry = false;
            }
        }

        if(valid_entry)
        {
            Name_value name_value;
            Name_value *ptr = &name_value;
            ptr->words = word;
            ptr->numbers = num;
            cout << word << " " << num << " was added to the list \n";
            names_and_values.push_back( *ptr );
        }
        else
        {
            cout << "That was not a valid combination \n";
        }
    }

    for (Name_value content : names_and_values)
    {
        cout << content.words << " " << content.numbers;
    }

    return 0;
}