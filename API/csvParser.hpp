#include <fstream>
#include <sstream>
#include <vector>

namespace csv
{
    std::vector<std::string> split(std::string& s, char delim)
    {
        std::vector<std::string> ans;
        if (s.empty())
            return ans;
        std::string split;
        std::istringstream ss(s);
        while (std::getline(ss, split, delim))
        {
            ans.push_back(split);
        }
        return ans;
    }

    std::vector<std::vector<std::string>> getLines(std::string filename)
    {
        std::fstream file(filename, std::ios_base::in);
        if (!file.is_open())
        {
            return std::vector<std::vector<std::string>>();
        }
        std::vector<std::vector<std::string>> ans;
        while (file.good())
        {
            std::string s;
            std::getline(file, s);
            ans.push_back(csv::split(s, ','));
        }
        file.close();
        return ans;
    }

}
