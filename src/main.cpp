#include <exception>
#include <iostream>
#include <fstream>

#define PATH "src/file.txt"
#define KEY_FIRST_SYMBOL '*'
#define KEY_AFTER_SYMBOL ':'
#define EXTRA_SPACE_AFTER 1

int TOTAL;

void search_file_content() {
    std::fstream file;
    file.open(PATH);
    if (!file.is_open()) {
        TOTAL = 0;
        return;
    }
    std::string line;
    while (getline(file, line)) {
        if (line.empty()) {
            continue;
        }
        int position = 0;
        if (line.front() == KEY_FIRST_SYMBOL) {
            size_t index = line.find(KEY_AFTER_SYMBOL);
            if (index == std::string::npos) {
                continue;
            }
            position = index + EXTRA_SPACE_AFTER + 1;
        }
        if (position != 0) {
            std::string content_after = line.substr(position);
            if (content_after.size() <= 2) {
                try {
                    TOTAL += std::stoi(content_after);
                } catch (const std::exception) {
                    continue;
                }
            }
        }
    }
    file.close();
}

void show_total() {
    std::cout << "Total hours: " << TOTAL << '\n';
}

int main() {
    search_file_content();
    show_total();
    return 0;
}
