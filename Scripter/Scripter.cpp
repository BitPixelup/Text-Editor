#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    char command;
    string buffer;  
    string inputLine;

    cout << "Enter 'i' to enter insert mode: ";
    cin >> command;

    if (command == 'i') {
        cin.ignore(); 
        cout << "Insert mode activated. Type your text (type 'exit' to quit):\n";

        do {
            getline(cin, inputLine);  

            if (inputLine != "exit") {
                buffer += inputLine + "\n";  
            }

        } while (inputLine != "exit"); 

        ofstream testFile("script.txt");
        testFile << buffer << endl;

        testFile.close();


    }
    else {
        cout << "Invalid command!" << endl;
    }

    return 0;
}