#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

    string fileName = "log.txt"

    char input;
    cout<< "Would You like to read the file or write to the file(w/r)" <<endl;
    cin >> input;
 
    if(input == 'w'){
        ofstream fout;
        fout.open(fileName, std::fstream::app);
        string word = "";
        cout<<"enter words to add to the end of a file and -1 to exit" <<endl;

        while(word != "-1"){
            cin >>word;
            if(word != "-1"){
                fout << word<< " ";
            }
       }

        fout.close();
    }

    else if(input == 'r'){
        std::ifstream fin;
        fin.open(fileName);
        string word;
        fin >> word;
        while(fin.eof() == false){
            cout<<word << " ";
            fin >> word;
        }

        cout<<endl;
        fin.close();
    }
    else{
        cout<<"invalid input" <<endl;
        return -1;
    }
}
