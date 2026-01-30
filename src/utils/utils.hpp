#ifndef UTILS
#define UTILS
#include <vector>
#include <string>
#include <random>
#include <set>
#include <iostream>
#include <fstream>
namespace {
    static std::random_device rd;
    static std::mt19937 rng{ rd() };

};
using u_sh = unsigned short;
using dl = double;
using ll = long long;
template <typename T>
using vec = std::vector<T>;
using str = std::string;

class random_number {
    public:
int roll_dice(int min, int max) {
	std::uniform_int_distribution<int> uid(min, max);
	return uid(rng);
}
};

class Parser {
    public:
    char delimiter = ';';
    str path;
    vec<str> words;

public:
    explicit Parser(const str& path_) : path(path_) {}

    Parser(const Parser&) = delete;
    Parser& operator=(const Parser&) = delete;

    void parse() {
        std::ifstream fs(path);
        if (!fs.is_open()) {
            std::cerr << "Cannot open file: " << path << std::endl;
            return;
        }

        str line;
        while (std::getline(fs, line)) {
            if (line.empty()) continue;

            str::size_type start = 0;
            str::size_type end = 0;

            while ((end = line.find(delimiter, start)) != str::npos) {
                words.push_back(line.substr(start, end - start));
                start = end + 1;
            }
            words.push_back(line.substr(start));
        }
    }
    void printWords() const {
        for (const auto& word : words) {
            std::cout << "'" << word << "'\n";
        }
    }
};

#endif