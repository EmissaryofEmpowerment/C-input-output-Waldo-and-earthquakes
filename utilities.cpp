#include <string>
#include "utilities.h"
#include <fstream>
#include <iostream>
#include <iomanip>

std::string ReadFile(std::ifstream& inFile)
{//begin string ReadFile
    std::string story = " ";
    getline(inFile, story);
    return story;
}//end string ReadFile

std::string FixStory(std::string story)
{
    int location = 0;
    int iterations = 0;
    while (story.find("&apos;") < story.size())
    {
        location = story.find("&apos;");
        story.replace(location, 6,"'");
        iterations++;
        if (iterations > story.size())
        {
            std::cout<<"Failed to replace \"&apos;\" with \" '"<<std::endl;
            return story;
        }
    }
    iterations = 0;
    while (story.find("striped shirt") > 0 && story.find("striped shirt") < story.size())
    {
        location = (story.find("striped shirt"));
        story.replace(location, 13, "shirtstripedred");
        location = story.find("striped shirt");
        iterations++;
        if (iterations > 7)
        {
            std::cout<<"failed to insert \"red striped shirt\" in appropriate locations";
            return story;
        }
    }
    iterations *=0;
    while (story.find("shirtstripedred") > 0 && story.find("shirtstripedred") < story.size())
    {// begin while "shirtstripedred
        location = (story.find("shirtstripedred"));
        story.replace(location, 15, "red striped shirt");
        location = story.find("shirtstripedred");
        iterations++;
        if (iterations > 7)
        {
            std::cout<<"failed to insert \"red striped shirt\" in appropriate locations";
            return story;
        }
    }//close while ("shirtstripedred")
    return story;
}

void WriteReportLine(float magnitude, std::string magnitudeType, std::string location,
float latitude, float longitude, float depth, std::string time, std::ostream& out)
{
    std::string location_to_print = " ";
    if (location.size() > 38)
    {
        location_to_print = location.substr(0, 35) + "...";
    }
    else
    {
        location_to_print = location;
    }
   out << std::right << std::setw(3) <<std::fixed << std::setprecision(1)
   <<  magnitude << " " <<std::left << std::setw(4) << magnitudeType <<  std::setw(38)
   << location_to_print/*
 * << std::right << std::setw(12) << std::setprecision(6) << latitude
  << std::right << std::setw(12) << std::setprecision(6) << longitude  << std::right
  << std::setw(8) << std::setprecision(3) << depth  << "  " <<time*/ << std::endl;
}