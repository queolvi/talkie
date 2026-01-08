#ifndef token_hpp
#define token_hpp
#include "C:\korp\talkie\src\core\cpp\user\adm"
class token{
    private:
    long long token_;
    public:
    long long calculate_token(std::vector<uint8_t> k, int c);
    token();
    ~token();

};
#endif
