#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(){
    // file name for the streams
    string fileName = "log.txt"
    // gets the user input to ask for reading or writing
    char input;
    cout<< "Would You like to read the file or write to the file(w/r)" <<endl;
    cin >> input;
    // checks if the input is a w
    if(input == 'w'){

        // fout is very similer to cout. cout is console output stream where 
        // fout is file output stream. fout will take the string and output it to the file
        // cout<< "Hello World" <<endl; - this would output hello World to the console
        // fout<< "Hello World" <<endl; - this would output hello world to the file
        // the ios::app tells the program to open the file with append turned on
        // this means to add words to the end of the file 
        // instead of clearing the file and starting at the beginning, which is the default
        ofstream fout;
        // opens the file for writing
        fout.open(fileName, std::fstream::app);
        string word = "";
        cout<<"enter words to add to the end of a file and -1 to exit" <<endl;

        // while the word is not a -1, get a word from the user and print it to the file
       while(word != "-1"){
            // gets a word from the user
            cin >>word;
            // if it is not a -1, print it to the file
            if(word != "-1"){
                fout << word<< " ";
            }
       }

        fout.close(); // close the file
    }

    else if(input == 'r'){

        // opens the file for reading
        // fout is very similer to cin. cout is console input where 
        // fin is file input. It will read a string from thr file and 
        // store it in word
        std::ifstream fin;
        fin.open(fileName);
        string word;
        fin >> word;
        // loop through the file intil fin hits the end of the file
        while(fin.eof() == false){
            // prints the word to the console
            cout<<word << " ";
            // gets the next word
            fin >> word;
        }
        cout<<endl;
        fin.close(); // closes the file
    }
    else{
        cout<<"invalid input" <<endl;
        return -1;
    }

}
