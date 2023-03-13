#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ofstream fout;
    fout.open("log.txt");
    fout << "hello File" <<endl;
    cout << "hello Console" <<endl;
}
