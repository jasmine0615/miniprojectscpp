#include <iostream>
#include <string>
using namespace std;
/*
You were suddenly feeling frisky so you asked _______ (1. Crush's name) if he wanted to _______ (2. Verb) in the _______ (3. Favorite room in the house) with you. Normally, you use this room to store your vast collection of _______ (4. Plural noun), but this time you felt like switching things up.

You just knew he was ready to go when he propped his _______ (5. Body part) up on the _______ (6. Piece of furniture) and gave you his _______ (7. Adjective) bedroom eyes.
*/
int main()
{
    string name, action, place, things, body, furniture, adj;
    cout << "Enter your favorite name: " << endl;
    cin >> name;
    cout << "Enter any action: " << endl;
    cin >> action;
    cout << "Enter your favorite place in your home: " << endl;
    cin >> place;
    cout << "Enter your collection: " << endl;
    cin >> things;
    cout << "Enter a body part: " << endl;
    cin >> body;
    cout << "Enter a piece of furniture: " << endl;
    cin >> furniture;
    cout << "Enter an adjective: " << endl;
    cin >> adj;
    cout << "You were suddenly feeling frisky so you asked " << name << " if she wanted to " << action << " in the " << place << " with you. " << endl;
    cout << " Normally, you use this room to store your vast collection of " << things << ", but this time you felt like switching things up." << endl;
    cout << "You just knew she was ready to go when he propped her " << body << " up on the " << furniture << " and gave you her " << adj << " bedroom eyes." << endl;
    return 0;
}