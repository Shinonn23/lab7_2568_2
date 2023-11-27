//Dialog of the first example is given below.
#include "iostream"
#include "string"
#include <sys/types.h>

using namespace std;

int main() {
    string botName = "Fahsai";
    string userName = "?????";
    
    string studentId;
    int GEAR;
    
    string botNameTemplate = botName + ": ";
    string userNameTemplate = userName + ": ";
    
    string movie;
    string freetime;
    
    string nope;
    
    cout << botNameTemplate << "Sawadee ka...Can you tell me your name?" << endl << userNameTemplate;
    getline(cin, userName);
    userNameTemplate = userName + ": ";
    cout << botNameTemplate << "Wow!!! " << userName << " is a really cool name." << endl;
    cout << botNameTemplate << "I think you are an Engineering student. What is your student ID?" << endl << userNameTemplate;
    getline(cin, studentId);
    GEAR = stoi(studentId.substr(0, 2)) - 12;
    
    cout << botNameTemplate << "I think you may be GEAR " << GEAR << ". I have a free movie ticket for you." << endl;
    cout << botNameTemplate << "Let's go to the cinema together!!!" << endl;
    cout << botNameTemplate << "What movie do you want to watch?" << endl << userNameTemplate;
    getline(cin, movie);
    
    cout << botNameTemplate << "So....which day are you free to go with me?" << endl << userNameTemplate;
    getline(cin, freetime);
    cout << botNameTemplate << freetime <<"....that is OK!!! I'm looking forward to watching " << movie << " with you." << endl << userNameTemplate;
    getline(cin, nope);
    
    cout << botNameTemplate << "555+ see you " << freetime << ". Bye Bye \\(^ ^)/";
}


/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/
