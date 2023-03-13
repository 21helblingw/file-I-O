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
    // if the input stream is not at the end of the file
    // print the word and get another word from the file
    while(fin.eof() == false){
    //prints out the string
    cout<< "Word from file: " << word <<endl;
    fin >> word;
    }
    fin.close();

}
