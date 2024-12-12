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
        else
        {
            std::cerr << "[!] Error: Failed to read from input file " << file << std::endl;
        }
    }
    else 
    {
        std::cerr << "[!] Error: Failed to open file " << file << std::endl;
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
    if (!file.is_open())
    {
        std::cerr << "[!] Error: File is not Open." << std::endl
                  << "[!] Please Check Data File Location or Definitions in FileHandling.h";
        return;
    }

    file.clear(); // Clear Error Flags
    file.seekg(0); // Seek to the beginning of the file

    std::string headerLine;
    if (getline(file, headerLine))
    {
        std::istringstream headerStream(headerLine);
        std::string fieldTitle;

        while (getline(headerStream, fieldTitle, ','))
        {
                vector.push_back(fieldTitle);
        }
    }
    else 
    {
        std::cerr << "[!] Error: Failed to read header line." << std::endl;
    }
}
#endif
