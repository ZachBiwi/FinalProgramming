//Zach Sawicki
//Very basic program meant to help me learn GIT,
//a free and open-source standard used by just
//about all software engineers for version control

#include <iostream>
#include <string>

using namespace std;


int main() {
    Printer p;
    p.setMessage1("Version 0.4");
    p.setMessage2("This program is made to show that I have learned git");
    p.printAll();
    p.setMessage1("I have learned git commands like: ");
    p.setMessage2("git init");
    p.printAll();
    p.setMessage1("git add [name of file]");
    p.setMessage2("git reset [name of file]");
    p.printAll();
    p.setMessage1("git commit (with optional flag -m "" to add a message");
    p.setMessage2("git branch");
    p.printAll();
    p.setMessage1("git checkout (with optional flag -b to create a branch");
    p.setMessage2("git stash");
    p.printAll();
    
    
    return 0;
}

/*
* @@brief This function prints a message
*/
void function() {
    cout << "Version 0.2";
    cout << "This program is made to show that I have learned git";
}


/*
* @@brief class to print one of two messages
*/
class Printer {
private:
    string message1;
    string message2;
public:
    Printer();
    Printer(string x, string y);
    void setMessage1(string s);
    void setMessage2(string s);
    void print1(); 
    void print2();
    void printAll();
};

/*
* @@brief Default constructor that sets message1 and message2 to null
*/
Printer::Printer() {
    message1 = "";
    message2 = "";
}

/*
* @@brief Parameter constructor to set message1 and message2 to arguments
*/
Printer::Printer(string x, string y) {
    message1 = x;
    message2 = y;
}

/*
* @@brief Setter for message1
*/
void Printer::setMessage1(string s) {
    message1 = s;
}

/*
* @@brief Setter for message2
*/
void Printer::setMessage2(string s) {
    message2 = s;
}

/*
* @@brief Print message1 to console
*/
void Printer::print1() {
    cout << message1 << endl;
}

/*
* @@brief Print message2 to console
*/
void Printer::print2() {
    cout << message2 << endl;
}

/*
* @@brief Print message1 and message2 to console
*/
void Printer::printAll() {
    print1();
    print2();
}