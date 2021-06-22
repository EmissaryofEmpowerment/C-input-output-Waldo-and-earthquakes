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
    //  inStory = ReadFile(inFile);
    // inStory = FixStory(inStory);
    ofstream outFile("../../updated_story.txt");
    outFile << inStory;
    outFile.close();
    inStory = "../../earthquakes.txt";
    ifstream out(inStory);
    if (out.fail())
    {
        cout<<"The file " << inStory << "could not be found."<<endl;
    }
    float magnitude = 0.00;
    string magnitude_type = " ";
    string location = " ";
    float latitude = 0.00;
    float longitude = 0.00;
    float depth = 0.00;
    string time = " ";
    out >> magnitude;
    out >> magnitude_type;
    getline(out, location);
    getline(out, location);
    out >> latitude;
    out >> longitude;
    out >> depth;
    out >> time;
    WriteReportLine(magnitude,magnitude_type, location, latitude, longitude, depth, time, cout);
    return 0;
}

