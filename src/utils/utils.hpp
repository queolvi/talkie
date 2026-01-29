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

class Parser{
    char symbol = ';'; str s; vec<str> st;
    std::ifstream fs; str::size_type pos;
    str path;
    Parser(str path_) : path(path_) {};
    Parser() = default;
    ~Parser() = default;
    void parse() {
        fs.open(path);
        if (!fs) { std::cout << "\nCannot open file\n"; return; }
        while (std::getline(fs, s)) {
            if ()
        }
    }
};

#endif