#ifndef token_hpp
#define token_hpp
#include "C:\Users\korpa\Desktop\programming\talkie\src\utils\utils.hpp"
class token : public Parser{
    public:
    str path = "words.txt";
    Parser p{path};
    token(str path_) : path(path_) { std::cout << path << std::endl; }
    token() = default;
    token(const token& t_) = default; 
str calculate_token(vec<str> data, u_sh id) {
        vec<str> result_push_data = push_data(data);
        vec<str> data_numbers(0);
        data_numbers.reserve(7);
    return "";

    }
str calculate_random_symbols(size_t min, size_t max) {
    vec<str> result;
    int random_nums[7];
    random_number r;
    for (size_t i = 0, sz = 7; i < sz; ++i) {
        random_nums[i] = r.roll_dice(min, max);
    }
    Parser p("words.txt");
    p.parse();
    for (size_t i = 0, sz = 7; i < sz; ++i) {
        result.push_back(p.words[i]);
    }
    vec<str> symbols;
    symbols.reserve(10);
    char s[10]{'!', '@', '#', '$', '%',  '&', '^',  '_', '+', '-'};
    size_t random_positions[5];
    for (size_t i = 0, sz = 7; i < sz; ++i) {
        random_positions[i] = r.roll_dice(min, max);
    }
    str result_string;
    for (size_t i = 0, sz = 7; i < sz; ++i) {
        result_string += words[i] + symbols[random_positions[i]];
    }
    return result_string;
}

    vec<str> data;
vec<str> push_data(vec<str> data) {
    p.parse();
    for (const auto& word : words) {
        data.push_back(word);
    }
return data;
}
};
#endif