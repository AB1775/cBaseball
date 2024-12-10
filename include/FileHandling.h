#ifndef FILEHANDLING_H
#define FILEHANDLING_H

#include <iostream>
#include <ostream>
#include <sstream>
#include <string>
#include <fstream>
#include <vector>

////////////////////
// File Variables //
////////////////////
const std::string batting = "Baseball_Stats/team_standard_batting24.csv";
const std::string pitching = "Baseball_Stats/team_standard_pitching24.csv";
const std::string fielding = "Baseball_Stats/team_standard_fielding24.csv";

/**
 * @brief Function to Check if File is Open
 *
 * @param file Reference to input file stream.
 * @return std::string Returns the header line of the file.
 */
std::string fileChecker(std::ifstream &file)
{
    if (file.is_open())
    {
        std::string headerLine;
        if (getline(file, headerLine))
        {
            return headerLine;
        }
    }
    return ""; // Return Empty String if Data Not Found
}

/**
 * @brief Function to Assign Field Titles to Vector
 *
 * @param file Reference to input file stream.
 * @param vector Reference to vector of strings.
 * @return void
 */
void fieldTitlesFunction(std::ifstream &file, std::vector<std::string> &vector)
{
    std::string headerLine;
    file.seekg(0);

    if (!file.is_open())
    {
        std::cerr << "[!] Error: File is not Open." << std::endl
                  << "[!] Please Check Data File Location or Definitions in FileHandling.h";
    }
    else
    {
        if (getline(file, headerLine))
        {
            std::istringstream headerStream(headerLine);
            std::string fieldTitle;

            while (getline(headerStream, fieldTitle, ','))
            {
                vector.push_back(fieldTitle);
            }
        }
    }
}
#endif
