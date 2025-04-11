#include <iostream>
#include <fstream>

const std::string file_name = "file.txt";
const char key_first_symbol = '*';
const char key_symbol_after = ':';
const int extra_space_after = 2;

std::ifstream file;
int total_hours;

void initialize_variables()
{
    file.open(file_name);
    total_hours = 0;
}

void search_file_content()
{
    std::string line;
    while (getline(file, line))
    {
        if (line.front() == key_first_symbol)
        {
            int position = line.find(key_symbol_after) + extra_space_after;
            std::string content_left = line.substr(position);
            if (content_left.size() < 2)
            {
                total_hours += std::stoi(content_left);
            }
        }
    }
}

void show_total_hours()
{
    std::cout << "Total hours: " << total_hours << '\n';
}

int main()
{
    initialize_variables();
    search_file_content();
    show_total_hours();
    return 0;
}
