#pragma once
#include <map>
#include <string>
#include <fstream>
#include <algorithm>
#include <filesystem>

#define loadint(prop) prop = std::stoi(aMod.values[#prop])
class ModReader
{
private:
    std::string Trim(const std::string& str)
    {
        size_t first = str.find_first_not_of(" \t\n\r");
        if (first == std::string::npos)
            return "";  // All whitespace
        size_t last = str.find_last_not_of(" \t\n\r");
        return str.substr(first, last - first + 1);
    }

public:
    bool enabled = false;  // Initialize enabled as false
    std::map<std::string, std::string> values;

    ModReader(std::string ModName)
    {
        // Get the current executable path and look for the file in the same directory
        std::filesystem::path filePath = std::filesystem::current_path() / ("mods/" + ModName + ".mod");

        // Check if the file exists
        if (std::filesystem::exists(filePath))
        {
            enabled = true;
            std::ifstream file(filePath);

            if (file.is_open())
            {
                std::string line;

                // Read file line by line
                while (std::getline(file, line))
                {
                    // Remove comments by cutting off everything after a semicolon
                    size_t commentPos = line.find(';');
                    if (commentPos != std::string::npos)
                    {
                        line = line.substr(0, commentPos);
                    }

                    // Look for the '=' symbol for key-value pairs
                    size_t equalPos = line.find('=');
                    if (equalPos != std::string::npos)
                    {
                        // Extract key and value, trimming whitespace
                        std::string key = Trim(line.substr(0, equalPos));
                        std::string value = Trim(line.substr(equalPos + 1));

                        // Insert the key-value pair into the map
                        values[key] = value;
                    }
                }

                file.close();
            }
        }
    }
};