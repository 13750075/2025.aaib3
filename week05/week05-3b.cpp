///week05-3b.cpp
///week05-3a.cpp part1/par2
///CPE02 UVA483
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
    string line;
    while(getline(cin,line)){
        stringstream ss(line);
        string word;
        ss>>word;
        reverse(word.begin(),word.end() );
        cout<<word;
        while(ss>>word){
            reverse(word.begin(),word.end() );
            cout<<" "<<word;
        }
        cout<<endl;
    }
}

