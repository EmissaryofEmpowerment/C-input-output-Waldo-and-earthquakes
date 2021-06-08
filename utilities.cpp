#include "utilities.h"
#include <array>
#include <string>
#include <iostream>

std::string FixStory(std::string story)
{
    if (story.find("&apos;") == story.npos || story.find("striped shirt") == story.npos)
    {
        story = "Attempt to fix the string failed";
        std::cout<<story.find("striped shirt location: ") <<std::endl;
        return story;
    }
    else
    {
      /*  int stripedShirtCounter = 0;
        std::array<int, 20> insertPlaces;*/
        std::cout<<"At least this much"<<std::endl;
        while (story.find("&apos;") != std::string::npos)
        {
            story.replace(story.find("&apos;"), 6, "'");
        }
     //   while (story.find("striped shirt") != std::string::npos)
       // {
          /*  insertPlaces[0]=story.find("striped shirt");
            stripedShirtCounter++;*/
           // story.insert(story.find("striped shirt"), "red");
        //}
        /* for (int i = 0; i < stripedShirtCounter; i++)
        {
            std::cout<< " " << "next instance of \"striped shirt\"" <<insertPlaces[i] << std::endl;
        }*/
    }
    return story;
}