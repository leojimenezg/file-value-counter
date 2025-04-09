#include <iostream>
#include <fstream>

const std::string file_name = "file.txt";
const std::string key_word = "* Horas:";
const std::string units = "hrs";

std::ifstream file;
int total_values;

void initialize_variables()
{
    file.open(file_name);
    total_values = 0;
}

void get_and_search_file_content()
{
    std::string line;
    while (getline(file, line))
    {
        if (line.front() == key_word[0])
        {
            std::size_t position = line.find_last_of(key_word);
            std::cout << line[position] << '\n';
        }
    }
}

void show_total_values()
{
    std::cout << "Total " << units << ": " << total_values << '\n';
}

int main()
{
    initialize_variables();
    get_and_search_file_content();
    return 0;
}
