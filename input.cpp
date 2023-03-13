#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream fin;
    fin.open("log.txt");
    string word;
    // gets one string from the file
    fin >> word;
    //prints out the string
    cout<<"Word from file: " << word <<endl;
    // asks for a string from the user
    cin >> word;
    //prints out the string
    cout<< "Word from console: " << word <<endl;
    fin.close();

}
