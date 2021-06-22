#ifndef UTILITIES_H
#define UTILITIES_H
#include <string>

std::string ReadFile(std::ifstream& inFile);
std::string FixStory(std::string story);
void WriteReportLine(float magnitude, std::string magnitudeType, std::string location,
                     float latitude, float longitude, float depth, std::string time, std::ostream& out);


#endif
