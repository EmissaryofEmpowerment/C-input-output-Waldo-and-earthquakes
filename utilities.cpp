#include <string>
#include "utilities.h"
#include <fstream>
#include <iostream>
#include <iomanip>

std::string ReadFile(std::ifstream& inFile)
{
    std::string story = " ";
    getline(inFile, story);
    int location = 0;
    while (story.find("&apos;") < story.size())
    {
        location = story.find("&apos;");
       story.replace(location, 6,"'");
    }
    location = (story.find("striped shirt"));
    while (story.find("striped shirt") > 0 && story.find("striped shirt") < story.size())
    {
        story.insert(location, "red ");
        location = story.find("striped shirt") + 18;
       location = story.find(location,story.find("striped shirt"));
    }
    return story;
}
