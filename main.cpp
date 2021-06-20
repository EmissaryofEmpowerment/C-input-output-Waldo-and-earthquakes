#include <iostream>
#include <string>
#include <fstream>
#include "utilities.h"

using namespace std;

int main()
{
    string inStory = "../../story.txt";
    ifstream inFile(inStory);
    if (inFile.fail())
    {
        cout<<"The file " << inStory << " could not be found.";
        return 1;
    }
    inStory = ReadFile(inFile);

  return 0;
}
