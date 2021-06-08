#include <iostream>
#include <array>
#include <string>
#include <fstream>
#include "utilities.h"

using namespace std;

int main()
{
    string file = "../../story.txt";
    string story= " ";
    string getAlestory= " ";
    ifstream readFile(file);
    if (readFile.fail())
    {
        cout<<"Could not find \"story.txt\" " << endl;
        return 1;
    }
    while (getline(readFile,story))
    {
        getAlestory +=story;
    }
   // std::cout<<getAlestory<<"\n"<<endl;
    std::cout<<story<<endl;




  //  cout<<"What's going on? " <<story<<endl;
    return 0;
    cout<<" before edit" << endl;

    story = FixStory(story);
    cout<<story<<endl;

  return 0;
}
